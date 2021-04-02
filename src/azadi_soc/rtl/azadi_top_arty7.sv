
// top wrapper for arty 7 FPGA

module azadi_top_arty7( 

  input clk_i,
  input rst_ni,

  input  [3:0] gpio_i,
  output [3:0] gpio_o,

  input        jtag_tck_i,
  input        jtag_tms_i,
  input        jtag_trst_ni,
  input        jtag_tdi_i,
  output       jtag_tdo_o

);

      //localparam logic [31:0] JTAG_IDCODE = 32'h04F5484D;
    localparam logic [31:0] JTAG_IDCODE = {
      4'h0,     // Version
      16'h4F54, // Part Number: "OT"
      11'h426,  // Manufacturer Identity: Google
      1'b1      // (fixed)
    };

  logic [19:0] gpio_in;
  logic [19:0] gpio_out;

  assign gpio_in[19:16] = gpio_i;
  assign gpio_o         = gpio_out[19:16];
    

  azadi_soc_top #(
    .JTAG_ID(JTAG_IDCODE)
  ) top_arty7(
    .clock          (clk_i),
    .reset_ni       (rst_ni),
    .uart_rx_i      (),
  
    .gpio_i         (gpio_in),
    .gpio_o         (gpio_out),
  //  output logic [19:0] gpio_oe
  
  // jtag interface 
    .jtag_tck_i     (jtag_tck_i),
    .jtag_tms_i     (jtag_tms_i),
    .jtag_trst_ni   (jtag_trst_ni),
    .jtag_tdi_i     (jtag_tdi_i),
    .jtag_tdo_o     (jtag_tdo_o)
  
  );

endmodule