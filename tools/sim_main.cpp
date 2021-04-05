#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <utility>
#include <string>
#include "VAzadi_top_verilator.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include "VAzadi_top_verilator__Dpi.h"

using namespace std;

unsigned int main_time = 0;
// or
//vluint64_t main_time = 0;

double sc_time_stamp () {
    return main_time;
}

string d2h(int dec_num){
    int r;
    string hexdec_num="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
        while(dec_num>0)
        {
            r = dec_num % 16;
            hexdec_num = hex[r] + hexdec_num;
            dec_num = dec_num/16;
        }
    return hexdec_num; 
}

int main (int argc, char **argv) {

    std::cout << "\nVerilatorTB: Start of sim\n" << std::endl; 

    Verilated::commandArgs(argc, argv);

    VAzadi_top_verilator* top = new VAzadi_top_verilator;

    // init trace dump
    //VerilatedVcdC* tfp = NULL;

    Verilated::traceEverOn(true);
    VerilatedFstC* tfp = new VerilatedFstC;
    // if initialized above
    //tfp = new VerilatedVcdC;


    top->trace (tfp, 99);
    Verilated::mkdir("logs");
    tfp->open("logs/sim.vcd");
    std::ofstream outf{ "logs/azadi.log" };

    top -> clock = 0;
    

   top -> gpio_i = 8;
    while (main_time <= 1000 || !Verilated::gotFinish()) 
    { 
        top->clock = top->clock ? 0 : 1; 
              // Toggle clock
        if(main_time < 100)
        {
            top -> reset_ni = 0;
        }
        else
        {
            top -> reset_ni = 1;
        }

        string wd_reg = d2h(top->rvfi_rd_addr);
        string wd_val = d2h(top->rvfi_rd_wdata);

        outf<< "address: " << wd_reg << " value: " << wd_val << "\n";
        
        if(top->rvfi_insn == 239 ) break;

        top->eval();


        if (tfp) tfp -> dump(main_time);
        

        main_time ++;
    }

    top -> final();

    if (tfp) tfp -> close();
    // or close anyways
    //tfp -> close();

    delete top;

    std::cout << "\nVerilatorTB: End of sim" << std::endl;
    //exit(EXIT_SUCCESS);
    exit(0);
}
