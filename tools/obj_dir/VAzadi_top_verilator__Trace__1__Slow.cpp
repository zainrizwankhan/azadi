// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VAzadi_top_verilator__Syms.h"


void VAzadi_top_verilator::traceRegister(VerilatedFst* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VAzadi_top_verilator::traceFullTop0(void* userp, VerilatedFst* tracep) {
    VAzadi_top_verilator__Syms* __restrict vlSymsp = static_cast<VAzadi_top_verilator__Syms*>(userp);
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
        vlTOPp->traceFullSub1(userp, tracep);
        vlTOPp->traceFullSub2(userp, tracep);
        vlTOPp->traceFullSub3(userp, tracep);
    }
}

void VAzadi_top_verilator::traceFullSub0(void* userp, VerilatedFst* tracep) {
    VAzadi_top_verilator__Syms* __restrict vlSymsp = static_cast<VAzadi_top_verilator__Syms*>(userp);
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp1745[3];
    WData/*95:0*/ __Vtemp1761[3];
    WData/*95:0*/ __Vtemp1777[3];
    WData/*95:0*/ __Vtemp1793[3];
    WData/*95:0*/ __Vtemp1809[3];
    WData/*95:0*/ __Vtemp1825[3];
    WData/*95:0*/ __Vtemp1841[3];
    WData/*95:0*/ __Vtemp1857[3];
    WData/*95:0*/ __Vtemp1873[3];
    WData/*95:0*/ __Vtemp1889[3];
    WData/*95:0*/ __Vtemp2121[3];
    WData/*95:0*/ __Vtemp2137[3];
    WData/*95:0*/ __Vtemp2153[3];
    WData/*95:0*/ __Vtemp2169[3];
    WData/*95:0*/ __Vtemp2185[3];
    WData/*95:0*/ __Vtemp2201[3];
    WData/*95:0*/ __Vtemp2217[3];
    WData/*95:0*/ __Vtemp2233[3];
    WData/*95:0*/ __Vtemp2249[3];
    WData/*95:0*/ __Vtemp2265[3];
    WData/*95:0*/ __Vtemp2281[3];
    WData/*95:0*/ __Vtemp2362[3];
    WData/*95:0*/ __Vtemp2406[3];
    WData/*95:0*/ __Vtemp2410[3];
    WData/*95:0*/ __Vtemp2414[3];
    WData/*95:0*/ __Vtemp2418[3];
    WData/*95:0*/ __Vtemp2422[3];
    // Body
    {
        tracep->fullQData(oldp+1,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[0]),34);
        tracep->fullQData(oldp+3,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[1]),34);
        tracep->fullBit(oldp+5,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                       [0U] >> 5U))));
        tracep->fullCData(oldp+6,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                         [0U] >> 3U))),2);
        tracep->fullBit(oldp+7,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                       [0U] >> 2U))));
        tracep->fullBit(oldp+8,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                       [0U] >> 1U))));
        tracep->fullBit(oldp+9,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                 [0U])));
        tracep->fullBit(oldp+10,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [1U] >> 5U))));
        tracep->fullCData(oldp+11,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                          [1U] >> 3U))),2);
        tracep->fullBit(oldp+12,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [1U] >> 2U))));
        tracep->fullBit(oldp+13,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [1U] >> 1U))));
        tracep->fullBit(oldp+14,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                  [1U])));
        tracep->fullBit(oldp+15,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pmp_req_err[0]));
        tracep->fullBit(oldp+16,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pmp_req_err[1]));
        tracep->fullQData(oldp+17,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[0]),34);
        tracep->fullQData(oldp+19,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[1]),34);
        tracep->fullBit(oldp+21,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [0U] >> 5U))));
        tracep->fullCData(oldp+22,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                          [0U] >> 3U))),2);
        tracep->fullBit(oldp+23,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [0U] >> 2U))));
        tracep->fullBit(oldp+24,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [0U] >> 1U))));
        tracep->fullBit(oldp+25,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                  [0U])));
        tracep->fullBit(oldp+26,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [1U] >> 5U))));
        tracep->fullCData(oldp+27,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                          [1U] >> 3U))),2);
        tracep->fullBit(oldp+28,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [1U] >> 2U))));
        tracep->fullBit(oldp+29,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [1U] >> 1U))));
        tracep->fullBit(oldp+30,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                  [1U])));
        tracep->fullBit(oldp+31,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pmp_req_err
                                 [0U]));
        tracep->fullBit(oldp+32,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_alu));
        tracep->fullIData(oldp+33,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[0]),32);
        tracep->fullIData(oldp+34,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[1]),32);
        tracep->fullIData(oldp+35,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[0]),32);
        tracep->fullIData(oldp+36,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[1]),32);
        tracep->fullIData(oldp+37,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev),32);
        tracep->fullBit(oldp+38,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pmp_req_err
                                 [1U]));
        tracep->fullIData(oldp+39,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0]),32);
        tracep->fullIData(oldp+40,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1]),32);
        tracep->fullIData(oldp+41,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2]),32);
        tracep->fullIData(oldp+42,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3]),32);
        tracep->fullIData(oldp+43,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4]),32);
        tracep->fullIData(oldp+44,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5]),32);
        tracep->fullIData(oldp+45,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6]),32);
        tracep->fullIData(oldp+46,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7]),32);
        tracep->fullIData(oldp+47,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8]),32);
        tracep->fullIData(oldp+48,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9]),32);
        tracep->fullIData(oldp+49,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10]),32);
        tracep->fullIData(oldp+50,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11]),32);
        tracep->fullIData(oldp+51,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12]),32);
        tracep->fullIData(oldp+52,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13]),32);
        tracep->fullIData(oldp+53,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14]),32);
        tracep->fullIData(oldp+54,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15]),32);
        tracep->fullCData(oldp+55,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0]),8);
        tracep->fullCData(oldp+56,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1]),8);
        tracep->fullCData(oldp+57,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2]),8);
        tracep->fullCData(oldp+58,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3]),8);
        tracep->fullCData(oldp+59,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4]),8);
        tracep->fullCData(oldp+60,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5]),8);
        tracep->fullCData(oldp+61,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6]),8);
        tracep->fullCData(oldp+62,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7]),8);
        tracep->fullCData(oldp+63,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8]),8);
        tracep->fullCData(oldp+64,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9]),8);
        tracep->fullCData(oldp+65,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10]),8);
        tracep->fullCData(oldp+66,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11]),8);
        tracep->fullCData(oldp+67,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12]),8);
        tracep->fullCData(oldp+68,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13]),8);
        tracep->fullCData(oldp+69,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14]),8);
        tracep->fullCData(oldp+70,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15]),8);
        tracep->fullIData(oldp+71,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0]),32);
        tracep->fullIData(oldp+72,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[1]),32);
        tracep->fullIData(oldp+73,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[2]),32);
        tracep->fullIData(oldp+74,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[3]),32);
        tracep->fullIData(oldp+75,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[4]),32);
        tracep->fullIData(oldp+76,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[5]),32);
        tracep->fullIData(oldp+77,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[6]),32);
        tracep->fullIData(oldp+78,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[7]),32);
        tracep->fullIData(oldp+79,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[8]),32);
        tracep->fullIData(oldp+80,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[9]),32);
        tracep->fullIData(oldp+81,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[10]),32);
        tracep->fullIData(oldp+82,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[11]),32);
        tracep->fullIData(oldp+83,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[12]),32);
        tracep->fullIData(oldp+84,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[13]),32);
        tracep->fullIData(oldp+85,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[14]),32);
        tracep->fullIData(oldp+86,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[15]),32);
        tracep->fullIData(oldp+87,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[16]),32);
        tracep->fullIData(oldp+88,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[17]),32);
        tracep->fullIData(oldp+89,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[18]),32);
        tracep->fullIData(oldp+90,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[19]),32);
        tracep->fullIData(oldp+91,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[20]),32);
        tracep->fullIData(oldp+92,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[21]),32);
        tracep->fullIData(oldp+93,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[22]),32);
        tracep->fullIData(oldp+94,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[23]),32);
        tracep->fullIData(oldp+95,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[24]),32);
        tracep->fullIData(oldp+96,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[25]),32);
        tracep->fullIData(oldp+97,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[26]),32);
        tracep->fullIData(oldp+98,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[27]),32);
        tracep->fullIData(oldp+99,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[28]),32);
        tracep->fullIData(oldp+100,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[29]),32);
        tracep->fullIData(oldp+101,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[30]),32);
        tracep->fullIData(oldp+102,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[31]),32);
        tracep->fullCData(oldp+103,((7U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d) 
                                           >> 3U))),3);
        tracep->fullBit(oldp+104,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d) 
                                         >> 2U))));
        tracep->fullBit(oldp+105,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d) 
                                         >> 1U))));
        tracep->fullBit(oldp+106,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d))));
        tracep->fullCData(oldp+107,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d),6);
        tracep->fullCData(oldp+108,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                      >> 0x18U)))),8);
        tracep->fullCData(oldp+109,((0xfU & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+110,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                   >> 0x11U)))),3);
        tracep->fullBit(oldp+111,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                 >> 0x10U)))));
        tracep->fullCData(oldp+112,((0xfU & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                     >> 0xcU)))),4);
        tracep->fullSData(oldp+113,((0xfffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned))),12);
        tracep->fullCData(oldp+114,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                      >> 0x38U)))),8);
        tracep->fullCData(oldp+115,((0xfU & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                     >> 0x34U)))),4);
        tracep->fullCData(oldp+116,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                   >> 0x31U)))),3);
        tracep->fullBit(oldp+117,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                 >> 0x30U)))));
        tracep->fullCData(oldp+118,((0xfU & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                     >> 0x2cU)))),4);
        tracep->fullSData(oldp+119,((0xfffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                       >> 0x20U)))),12);
        tracep->fullBit(oldp+120,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+121,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+122,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+123,((3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+124,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+125,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+126,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+127,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+128,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o))));
        tracep->fullBit(oldp+129,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o))));
        tracep->fullCData(oldp+130,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hfifo_rspvalid),3);
        tracep->fullCData(oldp+131,((0x3fU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                      >> 0x25U)))),8);
        tracep->fullQData(oldp+132,(vlTOPp->Azadi_top_verilator__DOT__u_jtagdpi__DOT__ctx),64);
        tracep->fullBit(oldp+134,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+135,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+136,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+137,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+138,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+139,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+140,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+141,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+142,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+143,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+144,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+145,((0x7fU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                      >> 0x24U)))),8);
        tracep->fullBit(oldp+146,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+147,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+148,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+149,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+150,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+151,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+152,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+153,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+154,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+155,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+156,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+157,((0x7fU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                      >> 0x24U)))),8);
        tracep->fullBit(oldp+158,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+159,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+160,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+161,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+162,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+163,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+164,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+165,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+166,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+167,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+168,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+169,((0x7fU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                      >> 0x24U)))),8);
        tracep->fullBit(oldp+170,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+171,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+172,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+173,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+174,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+175,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+176,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+177,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+178,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+179,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+180,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+181,((0x7fU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                      >> 0x24U)))),8);
        tracep->fullBit(oldp+182,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+183,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+184,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+185,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+186,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+187,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+188,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+189,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+190,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+191,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+192,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+193,((0x7fU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                      >> 0x24U)))),8);
        tracep->fullCData(oldp+194,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[0]),4);
        tracep->fullCData(oldp+195,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[1]),4);
        tracep->fullCData(oldp+196,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[2]),4);
        tracep->fullCData(oldp+197,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[3]),4);
        tracep->fullCData(oldp+198,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[4]),4);
        tracep->fullCData(oldp+199,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[5]),4);
        tracep->fullCData(oldp+200,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[6]),4);
        tracep->fullCData(oldp+201,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[7]),4);
        tracep->fullCData(oldp+202,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[8]),4);
        tracep->fullCData(oldp+203,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[9]),4);
        tracep->fullCData(oldp+204,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[10]),4);
        tracep->fullCData(oldp+205,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[11]),4);
        tracep->fullCData(oldp+206,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[12]),4);
        tracep->fullCData(oldp+207,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[13]),4);
        tracep->fullCData(oldp+208,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[14]),4);
        tracep->fullCData(oldp+209,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0]),4);
        tracep->fullCData(oldp+210,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[1]),4);
        tracep->fullCData(oldp+211,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[2]),4);
        tracep->fullCData(oldp+212,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[3]),4);
        tracep->fullCData(oldp+213,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[4]),4);
        tracep->fullCData(oldp+214,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[5]),4);
        tracep->fullCData(oldp+215,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[6]),4);
        tracep->fullCData(oldp+216,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[7]),4);
        tracep->fullCData(oldp+217,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[8]),4);
        tracep->fullCData(oldp+218,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[9]),4);
        tracep->fullCData(oldp+219,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[10]),4);
        tracep->fullCData(oldp+220,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[11]),4);
        tracep->fullCData(oldp+221,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[12]),4);
        tracep->fullCData(oldp+222,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[13]),4);
        tracep->fullCData(oldp+223,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[14]),4);
        tracep->fullCData(oldp+224,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[15]),4);
        tracep->fullCData(oldp+225,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[16]),4);
        tracep->fullCData(oldp+226,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[17]),4);
        tracep->fullCData(oldp+227,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[18]),4);
        tracep->fullCData(oldp+228,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[19]),4);
        tracep->fullCData(oldp+229,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[20]),4);
        tracep->fullCData(oldp+230,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[21]),4);
        tracep->fullCData(oldp+231,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[22]),4);
        tracep->fullCData(oldp+232,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[23]),4);
        tracep->fullCData(oldp+233,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[24]),4);
        tracep->fullCData(oldp+234,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[25]),4);
        tracep->fullCData(oldp+235,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[26]),4);
        tracep->fullCData(oldp+236,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[27]),4);
        tracep->fullCData(oldp+237,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[28]),4);
        tracep->fullCData(oldp+238,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[29]),4);
        tracep->fullCData(oldp+239,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[30]),4);
        tracep->fullCData(oldp+240,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[31]),4);
        tracep->fullCData(oldp+241,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[32]),4);
        tracep->fullCData(oldp+242,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[33]),4);
        tracep->fullCData(oldp+243,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[34]),4);
        tracep->fullCData(oldp+244,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[35]),4);
        tracep->fullCData(oldp+245,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[36]),4);
        tracep->fullCData(oldp+246,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[37]),4);
        tracep->fullBit(oldp+247,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq));
        tracep->fullBit(oldp+248,((0U != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)));
        tracep->fullBit(oldp+249,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs 
                                         >> 0x11U))));
        tracep->fullBit(oldp+250,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs 
                                         >> 0x10U))));
        tracep->fullBit(oldp+251,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs 
                                         >> 0xfU))));
        tracep->fullSData(oldp+252,((0x7fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)),15);
        tracep->fullBit(oldp+253,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk));
        tracep->fullBit(oldp+254,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
        tracep->fullCData(oldp+255,(((0x4000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                      ? 0xeU : ((0x2000U 
                                                 & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                 ? 0xdU
                                                 : 
                                                ((0x1000U 
                                                  & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                  ? 0xcU
                                                  : 
                                                 ((0x800U 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                   ? 0xbU
                                                   : 
                                                  ((0x400U 
                                                    & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                    ? 0xaU
                                                    : 
                                                   ((0x200U 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                     ? 9U
                                                     : 
                                                    ((0x100U 
                                                      & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                      ? 8U
                                                      : 
                                                     ((0x80U 
                                                       & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                       ? 7U
                                                       : 
                                                      ((0x40U 
                                                        & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                        ? 6U
                                                        : 
                                                       ((0x20U 
                                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                          ? 4U
                                                          : 
                                                         ((8U 
                                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                           ? 3U
                                                           : 
                                                          ((4U 
                                                            & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                            ? 2U
                                                            : 
                                                           ((2U 
                                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
                                                             ? 1U
                                                             : 0U))))))))))))))),4);
        tracep->fullBit(oldp+256,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs 
                                         >> 0x10U))));
        tracep->fullBit(oldp+257,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__resumereq));
        tracep->fullIData(oldp+258,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel),20);
        tracep->fullBit(oldp+259,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart));
        tracep->fullBit(oldp+260,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel)));
        tracep->fullCData(oldp+261,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__resumereq),2);
        tracep->fullCData(oldp+262,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq),2);
        tracep->fullBit(oldp+263,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q));
        tracep->fullBit(oldp+264,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_busy_q));
        tracep->fullBit(oldp+265,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fetch_enable_q));
        tracep->fullBit(oldp+266,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_data_in__DOT__qe));
        tracep->fullBit(oldp+267,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip 
                                         >> 0x11U))));
        tracep->fullBit(oldp+268,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip 
                                         >> 0x10U))));
        tracep->fullBit(oldp+269,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip 
                                         >> 0xfU))));
        tracep->fullSData(oldp+270,((0x7fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip)),15);
        tracep->fullIData(oldp+271,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id),32);
        tracep->fullBit(oldp+272,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_c_insn_id));
        tracep->fullCData(oldp+273,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+274,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+275,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 7U))),5);
        tracep->fullIData(oldp+276,(((0xfffff000U & 
                                      ((- (IData)((1U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                                     (0xfffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x14U)))),32);
        tracep->fullIData(oldp+277,(((0xfffff000U & 
                                      ((- (IData)((1U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                                     ((0xfe0U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x14U)) 
                                      | (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 7U))))),32);
        tracep->fullIData(oldp+278,(((0xffffe000U & 
                                      ((- (IData)((1U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xdU)) | 
                                     ((0x1000U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x13U)) 
                                      | ((0x800U & 
                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                           << 4U)) 
                                         | ((0x7e0U 
                                             & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 7U))))))),32);
        tracep->fullIData(oldp+279,((0xfffff000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)),32);
        tracep->fullIData(oldp+280,(((0xfff00000U & 
                                      ((- (IData)((1U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0x14U)) | 
                                     ((0xff000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id) 
                                      | ((0x800U & 
                                          (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x14U)))))),32);
        tracep->fullIData(oldp+281,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0xfU))),32);
        tracep->fullSData(oldp+282,(((0x3e0U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0xaU)) 
                                     | (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 7U)))),10);
        tracep->fullCData(oldp+283,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x1bU))),5);
        tracep->fullBit(oldp+284,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q));
        tracep->fullCData(oldp+285,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q),2);
        tracep->fullBit(oldp+286,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
        tracep->fullBit(oldp+287,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q));
        tracep->fullIData(oldp+288,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding),17);
        tracep->fullCData(oldp+289,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_opcode),3);
        tracep->fullCData(oldp+290,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_source),8);
        tracep->fullCData(oldp+291,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_size),2);
        tracep->fullBit(oldp+292,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_req_pending));
        tracep->fullIData(oldp+293,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding),17);
        tracep->fullCData(oldp+294,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__dev_select_outstanding),4);
        tracep->fullBit(oldp+295,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe));
        tracep->fullBit(oldp+296,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__qe));
        tracep->fullBit(oldp+297,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__qe));
        tracep->fullBit(oldp+298,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__qe));
        tracep->fullBit(oldp+299,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__qe));
        tracep->fullBit(oldp+300,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__qe));
        tracep->fullBit(oldp+301,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__qe));
        tracep->fullBit(oldp+302,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__qe));
        tracep->fullBit(oldp+303,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__qe));
        tracep->fullBit(oldp+304,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__qe));
        tracep->fullBit(oldp+305,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__qe));
        tracep->fullBit(oldp+306,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__qe));
        tracep->fullBit(oldp+307,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__qe));
        tracep->fullBit(oldp+308,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe));
        tracep->fullBit(oldp+309,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe));
        tracep->fullBit(oldp+310,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe));
        tracep->fullBit(oldp+311,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe));
        tracep->fullBit(oldp+312,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe));
        tracep->fullBit(oldp+313,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe));
        tracep->fullBit(oldp+314,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe));
        tracep->fullBit(oldp+315,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id));
        tracep->fullBit(oldp+316,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err));
        tracep->fullIData(oldp+317,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_id),32);
        tracep->fullBit(oldp+318,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
        tracep->fullBit(oldp+319,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
        tracep->fullCData(oldp+320,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
        tracep->fullBit(oldp+321,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req));
        tracep->fullCData(oldp+322,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator),6);
        tracep->fullBit(oldp+323,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__mult_sel_ex));
        tracep->fullBit(oldp+324,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__div_sel_ex));
        tracep->fullBit(oldp+325,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing));
        tracep->fullBit(oldp+326,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_run));
        tracep->fullCData(oldp+327,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
        tracep->fullBit(oldp+328,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req) 
                                   | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))));
        tracep->fullBit(oldp+329,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
        tracep->fullBit(oldp+330,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
        tracep->fullCData(oldp+331,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
        tracep->fullCData(oldp+332,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
        tracep->fullCData(oldp+333,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
        tracep->fullBit(oldp+334,((8U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))));
        tracep->fullBit(oldp+335,(((3U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                   | (6U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
        tracep->fullBit(oldp+336,(((4U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                   | (7U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
        tracep->fullCData(oldp+337,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
        tracep->fullBit(oldp+338,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                         >> 2U))));
        tracep->fullCData(oldp+339,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
        tracep->fullCData(oldp+340,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
        tracep->fullBit(oldp+341,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                         >> 2U))));
        tracep->fullCData(oldp+342,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
        tracep->fullIData(oldp+343,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_enable__q),32);
        tracep->fullIData(oldp+344,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q),32);
        tracep->fullIData(oldp+345,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q),32);
        tracep->fullIData(oldp+346,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q),32);
        tracep->fullIData(oldp+347,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q),32);
        tracep->fullIData(oldp+348,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q),32);
        tracep->fullBit(oldp+349,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
        tracep->fullIData(oldp+350,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
        tracep->fullBit(oldp+351,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__error));
        tracep->fullCData(oldp+352,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
        tracep->fullCData(oldp+353,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
        tracep->fullCData(oldp+354,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
        tracep->fullBit(oldp+355,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+356,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+357,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+358,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+359,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+360,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+361,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+362,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+363,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+364,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                         >> 1U))));
        tracep->fullBit(oldp+365,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullIData(oldp+366,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__ip),32);
        tracep->fullCData(oldp+367,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q),6);
        tracep->fullCData(oldp+368,((0x1fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage)),5);
        tracep->fullCData(oldp+369,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                              >> 5U))),5);
        tracep->fullCData(oldp+370,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+371,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                              >> 0xfU))),5);
        tracep->fullQData(oldp+372,((0x1ffffffffULL 
                                     & (((QData)((IData)(
                                                         vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
        tracep->fullQData(oldp+374,((0x1ffffffffULL 
                                     & (((QData)((IData)(
                                                         vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                              >> 1U))))),33);
        tracep->fullQData(oldp+376,((0x1ffffffffULL 
                                     & (((QData)((IData)(
                                                         vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[4U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                              >> 2U))))),33);
        tracep->fullQData(oldp+378,((0x1ffffffffULL 
                                     & (((QData)((IData)(
                                                         vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[4U])) 
                                         << 0x1dU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                           >> 3U)))),33);
        tracep->fullCData(oldp+380,((0x1fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage))),5);
        tracep->fullCData(oldp+381,((0x1fU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                              >> 5U))),5);
        tracep->fullQData(oldp+382,((0x1ffffffffULL 
                                     & (((QData)((IData)(
                                                         vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
        tracep->fullQData(oldp+384,((0x1ffffffffULL 
                                     & (((QData)((IData)(
                                                         vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                           >> 1U)))),33);
        tracep->fullBit(oldp+386,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_q));
        tracep->fullSData(oldp+387,((0xfffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_q))),12);
        tracep->fullBit(oldp+388,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_q));
        tracep->fullSData(oldp+389,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_q),14);
        tracep->fullCData(oldp+390,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q0),8);
        tracep->fullCData(oldp+391,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q1),8);
        tracep->fullCData(oldp+392,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q2),8);
        tracep->fullCData(oldp+393,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q3),8);
        tracep->fullCData(oldp+394,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
        tracep->fullBit(oldp+395,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                         >> 2U))));
        tracep->fullCData(oldp+396,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
        tracep->fullBit(oldp+397,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+398,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+399,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+400,((3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+401,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+402,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+403,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                             >> 2U))),32);
        tracep->fullBit(oldp+404,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                 >> 1U)))));
        tracep->fullBit(oldp+405,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h))));
        tracep->fullBit(oldp+406,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->fullBit(oldp+407,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+408,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_DV));
        tracep->fullCData(oldp+409,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte),8);
        tracep->fullIData(oldp+410,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_cntrl_data),32);
        tracep->fullCData(oldp+411,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs),2);
        tracep->fullCData(oldp+412,((0xfU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                             >> 1U))),4);
        tracep->fullBit(oldp+413,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
        tracep->fullCData(oldp+414,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        tracep->fullBit(oldp+415,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+416,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [0U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+417,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [0U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+418,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [0U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+419,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                      [0U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+420,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+421,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                             [0U] >> 2U))),32);
        tracep->fullBit(oldp+422,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+423,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                [0U]))));
        tracep->fullBit(oldp+424,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [1U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+425,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [1U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+426,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [1U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+427,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [1U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+428,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                      [1U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+429,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [1U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+430,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                             [1U] >> 2U))),32);
        tracep->fullBit(oldp+431,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [1U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+432,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                [1U]))));
        tracep->fullBit(oldp+433,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [2U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+434,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [2U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+435,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [2U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+436,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [2U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+437,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                      [2U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+438,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [2U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+439,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                             [2U] >> 2U))),32);
        tracep->fullBit(oldp+440,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [2U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+441,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                [2U]))));
        tracep->fullBit(oldp+442,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [3U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+443,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [3U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+444,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [3U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+445,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [3U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+446,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                      [3U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+447,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [3U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+448,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                             [3U] >> 2U))),32);
        tracep->fullBit(oldp+449,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [3U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+450,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                [3U]))));
        tracep->fullBit(oldp+451,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [4U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+452,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [4U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+453,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [4U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+454,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [4U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+455,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                      [4U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+456,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [4U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+457,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                             [4U] >> 2U))),32);
        tracep->fullBit(oldp+458,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [4U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+459,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                [4U]))));
        tracep->fullBit(oldp+460,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [5U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+461,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [5U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+462,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [5U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+463,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [5U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+464,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                      [5U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+465,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [5U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+466,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                             [5U] >> 2U))),32);
        tracep->fullBit(oldp+467,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [5U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+468,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                [5U]))));
        tracep->fullBit(oldp+469,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [6U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+470,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [6U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+471,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [6U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+472,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [6U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+473,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                      [6U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+474,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [6U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+475,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                             [6U] >> 2U))),32);
        tracep->fullBit(oldp+476,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [6U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+477,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                [6U]))));
        tracep->fullBit(oldp+478,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [7U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+479,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [7U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+480,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [7U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+481,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [7U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+482,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                      [7U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+483,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [7U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+484,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                             [7U] >> 2U))),32);
        tracep->fullBit(oldp+485,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [7U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+486,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                [7U]))));
        tracep->fullBit(oldp+487,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [8U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+488,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [8U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+489,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [8U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+490,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [8U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+491,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                      [8U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+492,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [8U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+493,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                             [8U] >> 2U))),32);
        tracep->fullBit(oldp+494,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [8U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+495,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                [8U]))));
        tracep->fullBit(oldp+496,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [9U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+497,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [9U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+498,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [9U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+499,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [9U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+500,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                      [9U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+501,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [9U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+502,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                             [9U] >> 2U))),32);
        tracep->fullBit(oldp+503,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [9U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+504,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                [9U]))));
        tracep->fullBit(oldp+505,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0xaU] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+506,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [0xaU] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+507,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [0xaU] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+508,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [0xaU] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+509,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                      [0xaU] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+510,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0xaU] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+511,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                             [0xaU] 
                                             >> 2U))),32);
        tracep->fullBit(oldp+512,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0xaU] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+513,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                [0xaU]))));
        tracep->fullBit(oldp+514,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0xbU] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+515,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [0xbU] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+516,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [0xbU] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+517,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [0xbU] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+518,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                      [0xbU] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+519,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0xbU] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+520,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                             [0xbU] 
                                             >> 2U))),32);
        tracep->fullBit(oldp+521,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0xbU] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+522,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                [0xbU]))));
        tracep->fullBit(oldp+523,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0xcU] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+524,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [0xcU] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+525,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [0xcU] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+526,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                   [0xcU] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+527,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                      [0xcU] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+528,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0xcU] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+529,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                             [0xcU] 
                                             >> 2U))),32);
        tracep->fullBit(oldp+530,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0xcU] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+531,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                [0xcU]))));
        tracep->fullSData(oldp+532,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count),16);
        tracep->fullCData(oldp+533,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index),3);
        tracep->fullCData(oldp+534,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main),3);
        tracep->fullIData(oldp+535,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rmask),32);
        tracep->fullBit(oldp+536,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+537,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+538,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+539,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+540,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [0U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+541,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+542,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [0U] >> 2U))),32);
        tracep->fullBit(oldp+543,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+544,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [0U]))));
        tracep->fullBit(oldp+545,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [1U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+546,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [1U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+547,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [1U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+548,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [1U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+549,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [1U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+550,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [1U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+551,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [1U] >> 2U))),32);
        tracep->fullBit(oldp+552,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [1U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+553,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [1U]))));
        tracep->fullBit(oldp+554,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [2U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+555,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [2U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+556,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [2U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+557,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [2U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+558,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [2U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+559,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [2U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+560,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [2U] >> 2U))),32);
        tracep->fullBit(oldp+561,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [2U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+562,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [2U]))));
        tracep->fullBit(oldp+563,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [3U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+564,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [3U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+565,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [3U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+566,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [3U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+567,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [3U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+568,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [3U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+569,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [3U] >> 2U))),32);
        tracep->fullBit(oldp+570,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [3U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+571,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [3U]))));
        tracep->fullBit(oldp+572,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [4U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+573,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [4U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+574,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [4U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+575,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [4U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+576,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [4U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+577,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [4U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+578,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [4U] >> 2U))),32);
        tracep->fullBit(oldp+579,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [4U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+580,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [4U]))));
        tracep->fullBit(oldp+581,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [5U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+582,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [5U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+583,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [5U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+584,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [5U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+585,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [5U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+586,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [5U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+587,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [5U] >> 2U))),32);
        tracep->fullBit(oldp+588,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [5U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+589,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [5U]))));
        tracep->fullBit(oldp+590,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [6U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+591,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [6U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+592,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [6U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+593,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [6U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+594,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [6U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+595,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [6U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+596,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [6U] >> 2U))),32);
        tracep->fullBit(oldp+597,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [6U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+598,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [6U]))));
        tracep->fullBit(oldp+599,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [7U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+600,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [7U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+601,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [7U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+602,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [7U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+603,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [7U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+604,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [7U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+605,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [7U] >> 2U))),32);
        tracep->fullBit(oldp+606,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [7U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+607,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [7U]))));
        tracep->fullBit(oldp+608,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [8U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+609,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [8U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+610,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [8U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+611,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [8U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+612,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [8U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+613,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [8U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+614,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [8U] >> 2U))),32);
        tracep->fullBit(oldp+615,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [8U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+616,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [8U]))));
        tracep->fullBit(oldp+617,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [9U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+618,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [9U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+619,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [9U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+620,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [9U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+621,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [9U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+622,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [9U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+623,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [9U] >> 2U))),32);
        tracep->fullBit(oldp+624,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [9U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+625,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [9U]))));
        tracep->fullBit(oldp+626,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xaU] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+627,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xaU] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+628,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xaU] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+629,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xaU] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+630,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [0xaU] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+631,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xaU] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+632,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [0xaU] 
                                             >> 2U))),32);
        tracep->fullBit(oldp+633,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xaU] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+634,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [0xaU]))));
        tracep->fullBit(oldp+635,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xbU] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+636,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xbU] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+637,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xbU] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+638,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xbU] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+639,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [0xbU] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+640,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xbU] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+641,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [0xbU] 
                                             >> 2U))),32);
        tracep->fullBit(oldp+642,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xbU] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+643,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [0xbU]))));
        tracep->fullBit(oldp+644,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xcU] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+645,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xcU] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+646,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xcU] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+647,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xcU] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+648,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [0xcU] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+649,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xcU] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+650,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [0xcU] 
                                             >> 2U))),32);
        tracep->fullBit(oldp+651,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xcU] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+652,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [0xcU]))));
        tracep->fullBit(oldp+653,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+654,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+655,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+656,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+657,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+658,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+659,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+660,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+661,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+662,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+663,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+664,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+665,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+666,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [0U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+667,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+668,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [0U] >> 2U))),32);
        tracep->fullBit(oldp+669,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+670,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [0U]))));
        tracep->fullBit(oldp+671,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [0U]))));
        tracep->fullBit(oldp+672,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0U] 
                                                 >> 0x33U)))));
        tracep->fullQData(oldp+673,((((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                  [0U] 
                                                                  >> 0x22U))))) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [0U] 
                                                                                >> 0x30U))))
                                                                      ? (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [0U] 
                                                                                >> 2U))
                                                                      : 0U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     (2U 
                                                                      & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [0U] 
                                                                                >> 1U)) 
                                                                         << 1U))))))),51);
        tracep->fullBit(oldp+675,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+676,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+677,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+678,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+679,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+680,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+681,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+682,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+683,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+684,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [1U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+685,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [1U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+686,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [1U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+687,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [1U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+688,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [1U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+689,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [1U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+690,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [1U] >> 2U))),32);
        tracep->fullBit(oldp+691,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [1U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+692,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [1U]))));
        tracep->fullBit(oldp+693,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [1U]))));
        tracep->fullBit(oldp+694,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [1U] 
                                                 >> 0x33U)))));
        tracep->fullQData(oldp+695,((((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                  [1U] 
                                                                  >> 0x22U))))) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [1U] 
                                                                                >> 0x30U))))
                                                                      ? (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [1U] 
                                                                                >> 2U))
                                                                      : 0U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     (2U 
                                                                      & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [1U] 
                                                                                >> 1U)) 
                                                                         << 1U))))))),51);
        tracep->fullBit(oldp+697,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+698,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+699,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+700,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+701,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+702,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+703,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+704,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+705,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+706,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [2U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+707,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [2U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+708,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [2U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+709,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [2U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+710,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [2U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+711,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [2U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+712,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [2U] >> 2U))),32);
        tracep->fullBit(oldp+713,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [2U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+714,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [2U]))));
        tracep->fullBit(oldp+715,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [2U]))));
        tracep->fullBit(oldp+716,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [2U] 
                                                 >> 0x33U)))));
        tracep->fullQData(oldp+717,((((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                  [2U] 
                                                                  >> 0x22U))))) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [2U] 
                                                                                >> 0x30U))))
                                                                      ? (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [2U] 
                                                                                >> 2U))
                                                                      : 0U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     (2U 
                                                                      & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [2U] 
                                                                                >> 1U)) 
                                                                         << 1U))))))),51);
        tracep->fullBit(oldp+719,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+720,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+721,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+722,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+723,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+724,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+725,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+726,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+727,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+728,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [3U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+729,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [3U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+730,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [3U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+731,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [3U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+732,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [3U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+733,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [3U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+734,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [3U] >> 2U))),32);
        tracep->fullBit(oldp+735,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [3U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+736,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [3U]))));
        tracep->fullBit(oldp+737,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [3U]))));
        tracep->fullBit(oldp+738,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [3U] 
                                                 >> 0x33U)))));
        tracep->fullQData(oldp+739,((((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                  [3U] 
                                                                  >> 0x22U))))) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [3U] 
                                                                                >> 0x30U))))
                                                                      ? (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [3U] 
                                                                                >> 2U))
                                                                      : 0U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     (2U 
                                                                      & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [3U] 
                                                                                >> 1U)) 
                                                                         << 1U))))))),51);
        tracep->fullBit(oldp+741,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+742,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+743,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+744,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+745,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+746,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+747,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+748,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+749,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+750,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [4U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+751,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [4U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+752,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [4U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+753,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [4U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+754,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [4U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+755,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [4U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+756,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [4U] >> 2U))),32);
        tracep->fullBit(oldp+757,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [4U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+758,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [4U]))));
        tracep->fullBit(oldp+759,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [4U]))));
        tracep->fullBit(oldp+760,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [4U] 
                                                 >> 0x33U)))));
        tracep->fullQData(oldp+761,((((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                  [4U] 
                                                                  >> 0x22U))))) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [4U] 
                                                                                >> 0x30U))))
                                                                      ? (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [4U] 
                                                                                >> 2U))
                                                                      : 0U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     (2U 
                                                                      & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [4U] 
                                                                                >> 1U)) 
                                                                         << 1U))))))),51);
        tracep->fullBit(oldp+763,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+764,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+765,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+766,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+767,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+768,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+769,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+770,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+771,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+772,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [5U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+773,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [5U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+774,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [5U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+775,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [5U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+776,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [5U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+777,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [5U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+778,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [5U] >> 2U))),32);
        tracep->fullBit(oldp+779,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [5U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+780,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [5U]))));
        tracep->fullBit(oldp+781,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [5U]))));
        tracep->fullBit(oldp+782,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [5U] 
                                                 >> 0x33U)))));
        tracep->fullQData(oldp+783,((((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                  [5U] 
                                                                  >> 0x22U))))) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [5U] 
                                                                                >> 0x30U))))
                                                                      ? (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [5U] 
                                                                                >> 2U))
                                                                      : 0U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     (2U 
                                                                      & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [5U] 
                                                                                >> 1U)) 
                                                                         << 1U))))))),51);
        tracep->fullBit(oldp+785,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+786,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+787,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+788,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+789,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+790,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+791,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+792,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+793,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+794,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [6U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+795,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [6U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+796,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [6U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+797,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [6U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+798,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [6U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+799,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [6U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+800,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [6U] >> 2U))),32);
        tracep->fullBit(oldp+801,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [6U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+802,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [6U]))));
        tracep->fullBit(oldp+803,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [6U]))));
        tracep->fullBit(oldp+804,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [6U] 
                                                 >> 0x33U)))));
        tracep->fullQData(oldp+805,((((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                  [6U] 
                                                                  >> 0x22U))))) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [6U] 
                                                                                >> 0x30U))))
                                                                      ? (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [6U] 
                                                                                >> 2U))
                                                                      : 0U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     (2U 
                                                                      & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [6U] 
                                                                                >> 1U)) 
                                                                         << 1U))))))),51);
        tracep->fullBit(oldp+807,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+808,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+809,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+810,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+811,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+812,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+813,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+814,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+815,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+816,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [7U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+817,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [7U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+818,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [7U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+819,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [7U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+820,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [7U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+821,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [7U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+822,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [7U] >> 2U))),32);
        tracep->fullBit(oldp+823,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [7U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+824,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [7U]))));
        tracep->fullBit(oldp+825,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [7U]))));
        tracep->fullBit(oldp+826,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [7U] 
                                                 >> 0x33U)))));
        tracep->fullQData(oldp+827,((((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                  [7U] 
                                                                  >> 0x22U))))) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [7U] 
                                                                                >> 0x30U))))
                                                                      ? (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [7U] 
                                                                                >> 2U))
                                                                      : 0U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     (2U 
                                                                      & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [7U] 
                                                                                >> 1U)) 
                                                                         << 1U))))))),51);
        tracep->fullBit(oldp+829,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+830,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+831,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+832,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+833,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+834,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+835,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+836,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+837,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+838,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [8U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+839,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [8U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+840,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [8U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+841,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [8U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+842,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [8U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+843,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [8U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+844,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [8U] >> 2U))),32);
        tracep->fullBit(oldp+845,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [8U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+846,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [8U]))));
        tracep->fullBit(oldp+847,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [8U]))));
        tracep->fullBit(oldp+848,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [8U] 
                                                 >> 0x33U)))));
        tracep->fullQData(oldp+849,((((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                  [8U] 
                                                                  >> 0x22U))))) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [8U] 
                                                                                >> 0x30U))))
                                                                      ? (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [8U] 
                                                                                >> 2U))
                                                                      : 0U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     (2U 
                                                                      & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [8U] 
                                                                                >> 1U)) 
                                                                         << 1U))))))),51);
        tracep->fullBit(oldp+851,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+852,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+853,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+854,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+855,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+856,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+857,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+858,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+859,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+860,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [9U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+861,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [9U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+862,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [9U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+863,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [9U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+864,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [9U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+865,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [9U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+866,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [9U] >> 2U))),32);
        tracep->fullBit(oldp+867,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [9U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+868,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [9U]))));
        tracep->fullBit(oldp+869,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [9U]))));
        tracep->fullBit(oldp+870,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [9U] 
                                                 >> 0x33U)))));
        tracep->fullQData(oldp+871,((((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                  [9U] 
                                                                  >> 0x22U))))) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [9U] 
                                                                                >> 0x30U))))
                                                                      ? (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [9U] 
                                                                                >> 2U))
                                                                      : 0U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     (2U 
                                                                      & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [9U] 
                                                                                >> 1U)) 
                                                                         << 1U))))))),51);
        tracep->fullBit(oldp+873,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+874,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+875,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+876,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+877,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+878,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+879,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+880,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+881,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+882,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xaU] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+883,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xaU] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+884,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xaU] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+885,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xaU] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+886,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [0xaU] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+887,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xaU] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+888,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [0xaU] 
                                             >> 2U))),32);
        tracep->fullBit(oldp+889,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xaU] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+890,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [0xaU]))));
        tracep->fullBit(oldp+891,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [0xaU]))));
        tracep->fullBit(oldp+892,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xaU] 
                                                 >> 0x33U)))));
        tracep->fullQData(oldp+893,((((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                  [0xaU] 
                                                                  >> 0x22U))))) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [0xaU] 
                                                                                >> 0x30U))))
                                                                      ? (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [0xaU] 
                                                                                >> 2U))
                                                                      : 0U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     (2U 
                                                                      & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [0xaU] 
                                                                                >> 1U)) 
                                                                         << 1U))))))),51);
        tracep->fullBit(oldp+895,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+896,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+897,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+898,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+899,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+900,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+901,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+902,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+903,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+904,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xbU] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+905,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xbU] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+906,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xbU] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+907,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xbU] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+908,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [0xbU] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+909,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xbU] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+910,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [0xbU] 
                                             >> 2U))),32);
        tracep->fullBit(oldp+911,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xbU] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+912,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [0xbU]))));
        tracep->fullBit(oldp+913,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [0xbU]))));
        tracep->fullBit(oldp+914,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xbU] 
                                                 >> 0x33U)))));
        tracep->fullQData(oldp+915,((((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                  [0xbU] 
                                                                  >> 0x22U))))) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [0xbU] 
                                                                                >> 0x30U))))
                                                                      ? (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [0xbU] 
                                                                                >> 2U))
                                                                      : 0U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     (2U 
                                                                      & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [0xbU] 
                                                                                >> 1U)) 
                                                                         << 1U))))))),51);
        tracep->fullBit(oldp+917,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+918,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+919,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+920,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+921,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+922,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+923,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+924,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+925,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+926,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xcU] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+927,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xcU] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+928,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xcU] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+929,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xcU] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+930,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                      [0xcU] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+931,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xcU] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+932,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                             [0xcU] 
                                             >> 2U))),32);
        tracep->fullBit(oldp+933,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xcU] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+934,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [0xcU]))));
        tracep->fullBit(oldp+935,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                [0xcU]))));
        tracep->fullBit(oldp+936,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xcU] 
                                                 >> 0x33U)))));
        tracep->fullQData(oldp+937,((((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                  [0xcU] 
                                                                  >> 0x22U))))) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [0xcU] 
                                                                                >> 0x30U))))
                                                                      ? (IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [0xcU] 
                                                                                >> 2U))
                                                                      : 0U))) 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     (2U 
                                                                      & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                                [0xcU] 
                                                                                >> 1U)) 
                                                                         << 1U))))))),51);
        tracep->fullCData(oldp+939,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_ns),2);
        tracep->fullBit(oldp+940,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_d));
        tracep->fullBit(oldp+941,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_d));
        tracep->fullBit(oldp+942,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [0U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+943,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [0U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+944,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [0U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+945,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [0U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+946,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                      [0U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+947,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [0U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+948,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                             [0U] >> 2U))),32);
        tracep->fullBit(oldp+949,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [0U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+950,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                [0U]))));
        tracep->fullBit(oldp+951,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [1U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+952,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [1U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+953,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [1U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+954,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [1U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+955,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                      [1U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+956,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [1U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+957,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                             [1U] >> 2U))),32);
        tracep->fullBit(oldp+958,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [1U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+959,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                [1U]))));
        tracep->fullBit(oldp+960,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [2U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+961,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [2U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+962,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [2U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+963,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [2U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+964,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                      [2U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+965,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [2U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+966,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                             [2U] >> 2U))),32);
        tracep->fullBit(oldp+967,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [2U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+968,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                [2U]))));
        tracep->fullBit(oldp+969,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [3U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+970,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [3U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+971,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [3U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+972,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [3U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+973,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                      [3U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+974,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [3U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+975,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                             [3U] >> 2U))),32);
        tracep->fullBit(oldp+976,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [3U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+977,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                [3U]))));
        tracep->fullBit(oldp+978,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [4U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+979,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [4U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+980,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [4U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+981,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [4U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+982,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                      [4U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+983,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [4U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+984,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                             [4U] >> 2U))),32);
        tracep->fullBit(oldp+985,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [4U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+986,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                [4U]))));
        tracep->fullBit(oldp+987,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [5U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+988,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [5U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+989,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [5U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+990,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [5U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+991,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                      [5U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+992,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [5U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+993,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                             [5U] >> 2U))),32);
        tracep->fullBit(oldp+994,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [5U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+995,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                [5U]))));
        tracep->fullBit(oldp+996,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [6U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+997,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [6U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+998,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [6U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+999,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                   [6U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+1000,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1001,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1002,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1003,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1004,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [6U]))));
        tracep->fullBit(oldp+1005,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1006,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1007,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1008,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1009,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1010,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1011,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1012,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1013,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [7U]))));
        tracep->fullBit(oldp+1014,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1015,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1016,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1017,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1018,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1019,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1020,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1021,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1022,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [8U]))));
        tracep->fullBit(oldp+1023,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1024,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1025,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1026,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1027,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1028,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1029,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1030,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1031,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [9U]))));
        tracep->fullBit(oldp+1032,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1033,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1034,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1035,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1036,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1037,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1038,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1039,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1040,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+1041,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1042,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1043,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1044,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1045,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [0xbU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1046,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xbU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1047,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [0xbU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1048,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xbU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1049,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [0xbU]))));
        tracep->fullBit(oldp+1050,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1051,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xcU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1052,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xcU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1053,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xcU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1054,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [0xcU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1055,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xcU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1056,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [0xcU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1057,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xcU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1058,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [0xcU]))));
        tracep->fullBit(oldp+1059,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xdU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1060,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xdU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1061,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xdU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1062,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xdU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1063,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [0xdU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1064,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xdU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1065,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [0xdU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1066,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xdU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1067,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [0xdU]))));
        tracep->fullBit(oldp+1068,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q));
        tracep->fullBit(oldp+1069,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q));
        tracep->fullBit(oldp+1070,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q));
        tracep->fullBit(oldp+1071,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q));
        tracep->fullBit(oldp+1072,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q));
        tracep->fullBit(oldp+1073,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q));
        tracep->fullBit(oldp+1074,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q));
        tracep->fullBit(oldp+1075,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q));
        tracep->fullBit(oldp+1076,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q));
        tracep->fullBit(oldp+1077,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q));
        tracep->fullBit(oldp+1078,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q));
        tracep->fullBit(oldp+1079,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q));
        tracep->fullBit(oldp+1080,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q));
        tracep->fullBit(oldp+1081,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q));
        tracep->fullBit(oldp+1082,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q));
        tracep->fullBit(oldp+1083,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q));
        tracep->fullBit(oldp+1084,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q));
        tracep->fullBit(oldp+1085,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q));
        tracep->fullBit(oldp+1086,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q));
        tracep->fullBit(oldp+1087,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q));
        tracep->fullBit(oldp+1088,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q));
        tracep->fullBit(oldp+1089,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q));
        tracep->fullBit(oldp+1090,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q));
        tracep->fullBit(oldp+1091,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q));
        tracep->fullBit(oldp+1092,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q));
        tracep->fullBit(oldp+1093,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q));
        tracep->fullBit(oldp+1094,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q));
        tracep->fullBit(oldp+1095,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q));
        tracep->fullBit(oldp+1096,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q));
        tracep->fullBit(oldp+1097,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q));
        tracep->fullBit(oldp+1098,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q));
        tracep->fullBit(oldp+1099,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__q));
        tracep->fullCData(oldp+1100,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullBit(oldp+1101,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1102,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1103,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1104,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1105,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1106,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1107,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1108,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1109,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                 [0U]))));
        tracep->fullBit(oldp+1110,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1111,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1112,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1113,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1114,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1115,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1116,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1117,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1118,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                 [1U]))));
        tracep->fullBit(oldp+1119,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1120,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1121,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1122,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1123,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1124,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1125,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1126,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1127,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+1128,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1129,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1130,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1131,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1132,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1133,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1134,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1135,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1136,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+1137,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1138,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1139,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1140,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1141,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1142,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1143,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1144,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1145,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+1146,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1147,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1148,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1149,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1150,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1151,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1152,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1153,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1154,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+1155,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hgrant),2);
        tracep->fullCData(oldp+1156,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+1157,((2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+1158,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+1159,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1160,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1161,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1162,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1163,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1164,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1165,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1166,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1167,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+1168,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1169,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1170,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1171,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1172,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1173,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1174,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1175,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1176,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+1177,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+1178,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+1179,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                     [0U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+1181,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1182,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1183,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1184,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1185,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1186,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1187,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1188,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1189,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+1190,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1191,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1192,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1193,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1194,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1195,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1196,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1197,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1198,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+1199,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+1200,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+1201,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                     [1U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+1203,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1204,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1205,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1206,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1207,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1208,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1209,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1210,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1211,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [0U][0U])));
        tracep->fullBit(oldp+1212,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1213,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1214,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1215,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1216,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1217,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1218,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1219,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1220,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [1U][0U])));
        tracep->fullBit(oldp+1221,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1222,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1223,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1224,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1225,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1226,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1227,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1228,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1229,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [2U][0U])));
        tracep->fullBit(oldp+1230,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1231,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1232,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1233,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1234,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1235,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1236,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1237,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1238,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [3U][0U])));
        tracep->fullBit(oldp+1239,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1240,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1241,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1242,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1243,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1244,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1245,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1246,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1247,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [4U][0U])));
        tracep->fullBit(oldp+1248,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1249,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1250,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1251,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1252,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1253,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1254,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1255,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1256,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [5U][0U])));
        tracep->fullBit(oldp+1257,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1258,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1259,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1260,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1261,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1262,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1263,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1264,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1265,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [6U][0U])));
        tracep->fullBit(oldp+1266,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1267,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1268,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1269,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1270,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1271,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1272,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1273,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1274,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [7U][0U])));
        tracep->fullBit(oldp+1275,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1276,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1277,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1278,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1279,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1280,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1281,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1282,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1283,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [8U][0U])));
        tracep->fullBit(oldp+1284,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1285,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1286,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1287,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1288,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1289,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1290,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1291,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1292,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                    [9U][0U])));
        tracep->fullBit(oldp+1293,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1294,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1295,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1296,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1297,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1298,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1299,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1300,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1301,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [0U][0U])));
        tracep->fullBit(oldp+1302,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1303,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1304,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1305,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1306,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1307,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1308,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1309,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1310,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [1U][0U])));
        tracep->fullBit(oldp+1311,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1312,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1313,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1314,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1315,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1316,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1317,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1318,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1319,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [2U][0U])));
        tracep->fullBit(oldp+1320,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1321,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1322,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1323,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1324,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1325,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1326,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1327,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1328,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [3U][0U])));
        tracep->fullBit(oldp+1329,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1330,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1331,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1332,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1333,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1334,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1335,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1336,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1337,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [4U][0U])));
        tracep->fullBit(oldp+1338,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1339,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1340,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1341,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1342,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1343,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1344,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1345,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1346,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [5U][0U])));
        tracep->fullBit(oldp+1347,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1348,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1349,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1350,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1351,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1352,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1353,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1354,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1355,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [6U][0U])));
        tracep->fullBit(oldp+1356,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1357,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1358,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1359,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1360,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1361,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1362,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1363,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1364,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [7U][0U])));
        tracep->fullBit(oldp+1365,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1366,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1367,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1368,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1369,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1370,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1371,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1372,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1373,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [8U][0U])));
        tracep->fullBit(oldp+1374,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1375,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1376,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1377,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1378,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1379,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1380,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1381,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1382,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [9U][0U])));
        tracep->fullBit(oldp+1383,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                          [0xaU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1384,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [0xaU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1385,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [0xaU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1386,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                            [0xaU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1387,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [0xaU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1388,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [0xaU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [0xaU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+1389,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                               [0xaU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                 [0xaU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1390,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                       [0xaU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [0xaU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+1391,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                    [0xaU][0U])));
        tracep->fullBit(oldp+1392,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1393,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1394,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1395,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1396,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1397,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1398,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1399,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1400,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h))));
        tracep->fullCData(oldp+1401,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),3);
        tracep->fullIData(oldp+1402,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding),17);
        tracep->fullCData(oldp+1403,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding),4);
        tracep->fullBit(oldp+1404,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q));
        tracep->fullBit(oldp+1405,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q));
        tracep->fullBit(oldp+1406,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q));
        tracep->fullBit(oldp+1407,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q));
        tracep->fullBit(oldp+1408,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q));
        tracep->fullBit(oldp+1409,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q));
        tracep->fullBit(oldp+1410,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q));
        tracep->fullBit(oldp+1411,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q));
        tracep->fullBit(oldp+1412,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q));
        tracep->fullBit(oldp+1413,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q));
        tracep->fullBit(oldp+1414,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q));
        tracep->fullBit(oldp+1415,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q));
        tracep->fullBit(oldp+1416,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q));
        tracep->fullBit(oldp+1417,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q));
        tracep->fullBit(oldp+1418,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q));
        tracep->fullBit(oldp+1419,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q));
        tracep->fullBit(oldp+1420,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q));
        tracep->fullBit(oldp+1421,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q));
        tracep->fullCData(oldp+1422,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q),3);
        tracep->fullCData(oldp+1423,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q),3);
        tracep->fullCData(oldp+1424,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q),3);
        tracep->fullCData(oldp+1425,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q),3);
        tracep->fullCData(oldp+1426,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q),3);
        tracep->fullCData(oldp+1427,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q),3);
        tracep->fullCData(oldp+1428,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q),3);
        tracep->fullCData(oldp+1429,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q),3);
        tracep->fullCData(oldp+1430,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q),3);
        tracep->fullCData(oldp+1431,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q),3);
        tracep->fullCData(oldp+1432,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q),3);
        tracep->fullCData(oldp+1433,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q),3);
        tracep->fullCData(oldp+1434,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q),3);
        tracep->fullCData(oldp+1435,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q),3);
        tracep->fullCData(oldp+1436,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q),3);
        tracep->fullCData(oldp+1437,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q),3);
        tracep->fullCData(oldp+1438,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q),3);
        tracep->fullCData(oldp+1439,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q),3);
        tracep->fullCData(oldp+1440,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q),3);
        tracep->fullCData(oldp+1441,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q),3);
        tracep->fullCData(oldp+1442,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q),3);
        tracep->fullCData(oldp+1443,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q),3);
        tracep->fullCData(oldp+1444,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q),3);
        tracep->fullCData(oldp+1445,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q),3);
        tracep->fullCData(oldp+1446,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q),3);
        tracep->fullCData(oldp+1447,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q),3);
        tracep->fullCData(oldp+1448,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q),3);
        tracep->fullCData(oldp+1449,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q),3);
        tracep->fullCData(oldp+1450,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q),3);
        tracep->fullCData(oldp+1451,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q),3);
        tracep->fullCData(oldp+1452,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q),3);
        tracep->fullCData(oldp+1453,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q),3);
        tracep->fullBit(oldp+1454,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q));
        tracep->fullBit(oldp+1455,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q));
        tracep->fullBit(oldp+1456,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q));
        tracep->fullBit(oldp+1457,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q));
        tracep->fullBit(oldp+1458,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q));
        tracep->fullBit(oldp+1459,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q));
        tracep->fullBit(oldp+1460,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q));
        tracep->fullBit(oldp+1461,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q));
        tracep->fullBit(oldp+1462,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q));
        tracep->fullBit(oldp+1463,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q));
        tracep->fullBit(oldp+1464,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q));
        tracep->fullBit(oldp+1465,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q));
        tracep->fullBit(oldp+1466,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q));
        tracep->fullBit(oldp+1467,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q));
        tracep->fullCData(oldp+1468,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q),3);
        tracep->fullBit(oldp+1469,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q));
        tracep->fullBit(oldp+1470,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
        tracep->fullIData(oldp+1471,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
        tracep->fullBit(oldp+1472,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error));
        tracep->fullCData(oldp+1473,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
        tracep->fullCData(oldp+1474,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
        tracep->fullCData(oldp+1475,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
        tracep->fullBit(oldp+1476,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1477,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1478,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1479,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1480,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1481,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1482,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1483,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1484,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+1485,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+1486,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+1487,((0x7fU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                       >> 0x24U)))),8);
        tracep->fullBit(oldp+1488,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h))));
        tracep->fullBit(oldp+1489,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+1490,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullCData(oldp+1492,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullBit(oldp+1493,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U])));
        tracep->fullBit(oldp+1494,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1495,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1496,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1497,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1498,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+1499,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+1500,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+1501,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+1502,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+1503,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+1504,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+1505,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+1506,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+1507,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+1508,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+1509,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+1510,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+1511,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+1512,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+1513,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+1514,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U])));
        tracep->fullBit(oldp+1515,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 1U))));
        tracep->fullBit(oldp+1516,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 2U))));
        tracep->fullBit(oldp+1517,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 3U))));
        tracep->fullBit(oldp+1518,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 4U))));
        tracep->fullBit(oldp+1519,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 5U))));
        tracep->fullBit(oldp+1520,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 6U))));
        tracep->fullBit(oldp+1521,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 7U))));
        tracep->fullBit(oldp+1522,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 8U))));
        tracep->fullBit(oldp+1523,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 9U))));
        tracep->fullBit(oldp+1524,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1525,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 0xbU))));
        tracep->fullCData(oldp+1526,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                             << 0x17U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                               >> 9U)))),3);
        tracep->fullCData(oldp+1527,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                             << 0x1aU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                               >> 6U)))),3);
        tracep->fullCData(oldp+1528,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                             << 0x1dU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                               >> 3U)))),3);
        tracep->fullCData(oldp+1529,((7U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U])),3);
        tracep->fullCData(oldp+1530,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 3U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x1dU)))),3);
        tracep->fullCData(oldp+1531,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 6U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x1aU)))),3);
        tracep->fullCData(oldp+1532,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 9U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x17U)))),3);
        tracep->fullCData(oldp+1533,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0xcU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x14U)))),3);
        tracep->fullCData(oldp+1534,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0xfU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x11U)))),3);
        tracep->fullCData(oldp+1535,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x12U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0xeU)))),3);
        tracep->fullCData(oldp+1536,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x15U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0xbU)))),3);
        tracep->fullCData(oldp+1537,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x18U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 8U)))),3);
        tracep->fullCData(oldp+1538,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x1bU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 5U)))),3);
        tracep->fullCData(oldp+1539,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x1eU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 2U)))),3);
        tracep->fullCData(oldp+1540,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 1U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x1fU)))),3);
        tracep->fullCData(oldp+1541,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 4U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x1cU)))),3);
        tracep->fullCData(oldp+1542,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 7U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x19U)))),3);
        tracep->fullCData(oldp+1543,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0xaU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x16U)))),3);
        tracep->fullCData(oldp+1544,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0xdU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x13U)))),3);
        tracep->fullCData(oldp+1545,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x10U)))),3);
        tracep->fullCData(oldp+1546,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x13U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0xdU)))),3);
        tracep->fullCData(oldp+1547,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x16U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0xaU)))),3);
        tracep->fullCData(oldp+1548,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x19U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 7U)))),3);
        tracep->fullCData(oldp+1549,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x1cU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 4U)))),3);
        tracep->fullCData(oldp+1550,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x1fU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 1U)))),3);
        tracep->fullCData(oldp+1551,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 2U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x1eU)))),3);
        tracep->fullCData(oldp+1552,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 5U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x1bU)))),3);
        tracep->fullCData(oldp+1553,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 8U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x18U)))),3);
        tracep->fullCData(oldp+1554,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0xbU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x15U)))),3);
        tracep->fullCData(oldp+1555,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0xeU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x12U)))),3);
        tracep->fullCData(oldp+1556,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0x11U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0xfU)))),3);
        tracep->fullCData(oldp+1557,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0x14U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0xcU)))),3);
        tracep->fullBit(oldp+1558,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1559,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1560,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1561,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1562,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+1563,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+1564,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+1565,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+1566,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+1567,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+1568,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+1569,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+1570,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+1571,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+1572,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+1573,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+1574,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+1575,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+1576,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+1577,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+1578,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U])));
        tracep->fullBit(oldp+1579,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 1U))));
        tracep->fullBit(oldp+1580,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 2U))));
        tracep->fullBit(oldp+1581,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 3U))));
        tracep->fullBit(oldp+1582,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 4U))));
        tracep->fullBit(oldp+1583,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 5U))));
        tracep->fullBit(oldp+1584,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 6U))));
        tracep->fullBit(oldp+1585,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 7U))));
        tracep->fullBit(oldp+1586,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 8U))));
        tracep->fullBit(oldp+1587,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 9U))));
        tracep->fullBit(oldp+1588,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1589,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 0xbU))));
        tracep->fullCData(oldp+1590,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                             << 0x17U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                               >> 9U)))),3);
        tracep->fullCData(oldp+1591,((0x3fU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                                << 0x1dU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                                  >> 3U)))),6);
        tracep->fullBit(oldp+1592,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 2U))));
        tracep->fullBit(oldp+1593,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 1U))));
        tracep->fullBit(oldp+1594,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U])));
        tracep->fullCData(oldp+1595,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__dev_select_outstanding),2);
        tracep->fullCData(oldp+1596,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_opcode),3);
        tracep->fullCData(oldp+1597,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_source),8);
        tracep->fullCData(oldp+1598,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_size),2);
        tracep->fullCData(oldp+1599,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
        tracep->fullBit(oldp+1600,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+1601,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
        tracep->fullCData(oldp+1602,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_opcode),3);
        tracep->fullCData(oldp+1603,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_source),8);
        tracep->fullCData(oldp+1604,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_size),2);
        tracep->fullBit(oldp+1605,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1606,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1607,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1608,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1609,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1610,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1611,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1612,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1613,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1614,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1615,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1616,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1617,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1618,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1619,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+1620,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+1621,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+1622,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+1623,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+1624,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+1625,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+1626,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullBit(oldp+1627,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__instr_valid));
        tracep->fullIData(oldp+1628,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__tlul_data),32);
        tracep->fullCData(oldp+1629,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__intr_interface__DOT__genblk2__DOT__source_q),8);
        tracep->fullBit(oldp+1630,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__intr_interface__DOT__genblk2__DOT__source_q));
        tracep->fullCData(oldp+1631,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q),5);
        tracep->fullSData(oldp+1632,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage),13);
        tracep->fullCData(oldp+1633,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage),5);
        tracep->fullBit(oldp+1634,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rvalid_o));
        tracep->fullIData(oldp+1635,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rdata_o),32);
        tracep->fullSData(oldp+1636,((0x1fffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage))),13);
        tracep->fullSData(oldp+1637,((0x1fffU & (IData)(
                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                         >> 0xdU)))),13);
        tracep->fullSData(oldp+1638,((0x1fffU & (IData)(
                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                         >> 0x1aU)))),13);
        tracep->fullSData(oldp+1639,((0x1fffU & (IData)(
                                                        (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                         >> 0x27U)))),13);
        tracep->fullIData(oldp+1640,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q),32);
        tracep->fullSData(oldp+1641,((0x1fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage)),13);
        tracep->fullSData(oldp+1642,((0x1fffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 0xdU))),13);
        tracep->fullCData(oldp+1643,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullCData(oldp+1644,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+1645,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+1646,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+1647,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+1648,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+1649,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullCData(oldp+1650,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+1651,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+1652,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+1653,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+1654,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+1655,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullCData(oldp+1656,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+1657,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+1658,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+1659,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+1660,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullBit(oldp+1661,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_req_pending));
        tracep->fullBit(oldp+1662,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_req_pending));
        tracep->fullBit(oldp+1663,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending));
        tracep->fullBit(oldp+1664,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1665,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1666,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1667,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1668,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1669,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1670,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1671,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1672,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o))));
        tracep->fullCData(oldp+1673,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__dev_select_outstanding),4);
        tracep->fullCData(oldp+1674,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_opcode),3);
        tracep->fullCData(oldp+1675,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_source),8);
        tracep->fullCData(oldp+1676,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_size),2);
        tracep->fullBit(oldp+1677,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe));
        tracep->fullBit(oldp+1678,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe));
        tracep->fullBit(oldp+1679,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe));
        tracep->fullBit(oldp+1680,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe));
        tracep->fullBit(oldp+1681,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe));
        tracep->fullBit(oldp+1682,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe));
        tracep->fullBit(oldp+1683,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe));
        tracep->fullBit(oldp+1684,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe));
        tracep->fullBit(oldp+1685,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe));
        tracep->fullBit(oldp+1686,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe));
        tracep->fullBit(oldp+1687,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe));
        tracep->fullBit(oldp+1688,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q));
        tracep->fullCData(oldp+1689,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                               >> 0x18U))),8);
        tracep->fullIData(oldp+1690,((0xffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q)),24);
        tracep->fullIData(oldp+1691,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[0U]),32);
        tracep->fullIData(oldp+1692,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[1U]),32);
        tracep->fullIData(oldp+1693,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[2U]),32);
        tracep->fullIData(oldp+1694,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[3U]),32);
        tracep->fullIData(oldp+1695,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[4U]),32);
        tracep->fullIData(oldp+1696,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[5U]),32);
        tracep->fullIData(oldp+1697,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[6U]),32);
        tracep->fullIData(oldp+1698,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[7U]),32);
        tracep->fullIData(oldp+1699,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q)),32);
        tracep->fullIData(oldp+1700,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q 
                                              >> 0x20U))),32);
        tracep->fullIData(oldp+1701,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q)),32);
        tracep->fullBit(oldp+1702,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                          >> 0x14U))));
        tracep->fullBit(oldp+1703,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                          >> 0x10U))));
        tracep->fullCData(oldp+1704,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x11U))),3);
        tracep->fullBit(oldp+1705,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                          >> 0xfU))));
        tracep->fullIData(oldp+1706,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q)),32);
        tracep->fullBit(oldp+1707,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))));
        tracep->fullCData(oldp+1708,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q),3);
        tracep->fullSData(oldp+1709,((0xffffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q 
                                                 >> 0x10U))),16);
        tracep->fullCData(oldp+1710,((0xfU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q 
                                              >> 0xcU))),4);
        tracep->fullSData(oldp+1711,((0xfffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q)),12);
        tracep->fullCData(oldp+1712,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x1dU))),3);
        tracep->fullCData(oldp+1713,((0x3fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                               >> 0x17U))),6);
        tracep->fullBit(oldp+1714,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                          >> 0x16U))));
        tracep->fullBit(oldp+1715,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                          >> 0x15U))));
        tracep->fullBit(oldp+1716,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                          >> 0x14U))));
        tracep->fullBit(oldp+1717,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                          >> 0x10U))));
        tracep->fullBit(oldp+1718,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                          >> 0xfU))));
        tracep->fullCData(oldp+1719,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+1720,((0x7fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                               >> 5U))),7);
        tracep->fullBit(oldp+1721,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                          >> 4U))));
        tracep->fullBit(oldp+1722,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                          >> 3U))));
        tracep->fullBit(oldp+1723,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                          >> 2U))));
        tracep->fullBit(oldp+1724,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                          >> 1U))));
        tracep->fullBit(oldp+1725,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q)));
        tracep->fullQData(oldp+1726,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q),64);
        tracep->fullQData(oldp+1728,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q),64);
        tracep->fullCData(oldp+1730,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q),3);
        tracep->fullQData(oldp+1731,((((QData)((IData)(
                                                       vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[0U])))),64);
        tracep->fullQData(oldp+1733,((((QData)((IData)(
                                                       vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[2U])))),64);
        tracep->fullQData(oldp+1735,((((QData)((IData)(
                                                       vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[5U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[4U])))),64);
        tracep->fullQData(oldp+1737,((((QData)((IData)(
                                                       vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[7U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[6U])))),64);
        tracep->fullBit(oldp+1739,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                          >> 0x17U))));
        tracep->fullCData(oldp+1740,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                            >> 0x14U))),3);
        tracep->fullBit(oldp+1741,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                          >> 0x13U))));
        tracep->fullBit(oldp+1742,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                          >> 0x12U))));
        tracep->fullBit(oldp+1743,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                          >> 0x11U))));
        tracep->fullBit(oldp+1744,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                          >> 0x10U))));
        tracep->fullSData(oldp+1745,((0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q)),16);
        tracep->fullBit(oldp+1746,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1747,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1748,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1749,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1750,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1751,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1752,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1753,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1754,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[0U])));
        tracep->fullBit(oldp+1755,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__req));
        tracep->fullBit(oldp+1756,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we));
        tracep->fullCData(oldp+1757,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be),4);
        tracep->fullCData(oldp+1758,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be_idx),2);
        tracep->fullCData(oldp+1759,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we)
                                       ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be)
                                       : 0xfU)),4);
        tracep->fullBit(oldp+1760,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+1761,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[0U])));
        tracep->fullBit(oldp+1762,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1763,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1764,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1765,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1766,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1767,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1768,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1769,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1770,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U])));
        tracep->fullBit(oldp+1771,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we));
        tracep->fullQData(oldp+1772,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex[0]),34);
        tracep->fullQData(oldp+1774,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex[1]),34);
        tracep->fullBit(oldp+1776,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__icache_inval));
        tracep->fullIData(oldp+1777,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
        tracep->fullBit(oldp+1778,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a));
        tracep->fullBit(oldp+1779,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b));
        tracep->fullCData(oldp+1780,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator),2);
        tracep->fullCData(oldp+1781,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
        tracep->fullBit(oldp+1782,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_access));
        tracep->fullCData(oldp+1783,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type),2);
        tracep->fullBit(oldp+1784,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext));
        tracep->fullQData(oldp+1785,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[0]),34);
        tracep->fullQData(oldp+1787,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[1]),34);
        tracep->fullBit(oldp+1789,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
        tracep->fullBit(oldp+1790,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn));
        tracep->fullBit(oldp+1791,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec));
        tracep->fullBit(oldp+1792,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec));
        tracep->fullBit(oldp+1793,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec));
        tracep->fullBit(oldp+1794,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec));
        tracep->fullBit(oldp+1795,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec));
        tracep->fullBit(oldp+1796,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec));
        tracep->fullBit(oldp+1797,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec));
        tracep->fullBit(oldp+1798,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel));
        tracep->fullBit(oldp+1799,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
        tracep->fullQData(oldp+1800,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0]),34);
        tracep->fullQData(oldp+1802,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1]),34);
        tracep->fullBit(oldp+1804,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec));
        tracep->fullBit(oldp+1805,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
        tracep->fullCData(oldp+1806,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
        tracep->fullCData(oldp+1807,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
        tracep->fullQData(oldp+1808,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[0]),34);
        tracep->fullQData(oldp+1810,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[1]),34);
        tracep->fullQData(oldp+1812,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
        tracep->fullIData(oldp+1814,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[0]),32);
        tracep->fullIData(oldp+1815,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[1]),32);
        tracep->fullIData(oldp+1816,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[0]),32);
        tracep->fullIData(oldp+1817,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[1]),32);
        tracep->fullIData(oldp+1818,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0]),32);
        tracep->fullIData(oldp+1819,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1]),32);
        tracep->fullQData(oldp+1820,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[0]),34);
        tracep->fullQData(oldp+1822,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[1]),34);
        tracep->fullBit(oldp+1824,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode))));
        tracep->fullIData(oldp+1825,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                             [1U])),32);
        tracep->fullCData(oldp+1826,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
        tracep->fullCData(oldp+1827,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                    [1U] 
                                                    >> 0x20U)))),2);
        tracep->fullCData(oldp+1828,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
        tracep->fullIData(oldp+1829,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0U]),32);
        tracep->fullIData(oldp+1830,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1U]),32);
        tracep->fullIData(oldp+1831,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2U]),32);
        tracep->fullIData(oldp+1832,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3U]),32);
        tracep->fullIData(oldp+1833,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4U]),32);
        tracep->fullIData(oldp+1834,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5U]),32);
        tracep->fullIData(oldp+1835,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6U]),32);
        tracep->fullIData(oldp+1836,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7U]),32);
        tracep->fullIData(oldp+1837,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8U]),32);
        tracep->fullIData(oldp+1838,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9U]),32);
        tracep->fullIData(oldp+1839,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xaU]),32);
        tracep->fullIData(oldp+1840,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xbU]),32);
        tracep->fullIData(oldp+1841,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xcU]),32);
        tracep->fullIData(oldp+1842,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xdU]),32);
        tracep->fullIData(oldp+1843,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xeU]),32);
        tracep->fullIData(oldp+1844,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xfU]),32);
        tracep->fullIData(oldp+1845,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x10U]),32);
        tracep->fullIData(oldp+1846,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x11U]),32);
        tracep->fullIData(oldp+1847,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x12U]),32);
        tracep->fullIData(oldp+1848,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x13U]),32);
        tracep->fullIData(oldp+1849,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x14U]),32);
        tracep->fullIData(oldp+1850,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x15U]),32);
        tracep->fullIData(oldp+1851,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x16U]),32);
        tracep->fullIData(oldp+1852,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x17U]),32);
        tracep->fullIData(oldp+1853,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x18U]),32);
        tracep->fullIData(oldp+1854,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x19U]),32);
        tracep->fullIData(oldp+1855,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1aU]),32);
        tracep->fullIData(oldp+1856,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1bU]),32);
        tracep->fullIData(oldp+1857,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1cU]),32);
        tracep->fullIData(oldp+1858,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1dU]),32);
        tracep->fullIData(oldp+1859,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1eU]),32);
        tracep->fullIData(oldp+1860,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1fU]),32);
        tracep->fullIData(oldp+1861,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0U]),32);
        tracep->fullIData(oldp+1862,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[1U]),32);
        tracep->fullIData(oldp+1863,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[2U]),32);
        tracep->fullIData(oldp+1864,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[3U]),32);
        tracep->fullIData(oldp+1865,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[4U]),32);
        tracep->fullIData(oldp+1866,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[5U]),32);
        tracep->fullIData(oldp+1867,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[6U]),32);
        tracep->fullIData(oldp+1868,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[7U]),32);
        tracep->fullIData(oldp+1869,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[8U]),32);
        tracep->fullIData(oldp+1870,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[9U]),32);
        tracep->fullIData(oldp+1871,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xaU]),32);
        tracep->fullIData(oldp+1872,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xbU]),32);
        tracep->fullIData(oldp+1873,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xcU]),32);
        tracep->fullIData(oldp+1874,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xdU]),32);
        tracep->fullIData(oldp+1875,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xeU]),32);
        tracep->fullIData(oldp+1876,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xfU]),32);
        tracep->fullIData(oldp+1877,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x10U]),32);
        tracep->fullIData(oldp+1878,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x11U]),32);
        tracep->fullIData(oldp+1879,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x12U]),32);
        tracep->fullIData(oldp+1880,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x13U]),32);
        tracep->fullIData(oldp+1881,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x14U]),32);
        tracep->fullIData(oldp+1882,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x15U]),32);
        tracep->fullIData(oldp+1883,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x16U]),32);
        tracep->fullIData(oldp+1884,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x17U]),32);
        tracep->fullIData(oldp+1885,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x18U]),32);
        tracep->fullIData(oldp+1886,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x19U]),32);
        tracep->fullIData(oldp+1887,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1aU]),32);
        tracep->fullIData(oldp+1888,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1bU]),32);
        tracep->fullIData(oldp+1889,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1cU]),32);
        tracep->fullIData(oldp+1890,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1dU]),32);
        tracep->fullIData(oldp+1891,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1eU]),32);
        tracep->fullBit(oldp+1892,(vlTOPp->Azadi_top_verilator__DOT__cio_jtag_tck));
        tracep->fullBit(oldp+1893,(vlTOPp->Azadi_top_verilator__DOT__cio_jtag_tdi));
        tracep->fullBit(oldp+1894,(vlTOPp->Azadi_top_verilator__DOT__cio_jtag_tms));
        tracep->fullBit(oldp+1895,(vlTOPp->Azadi_top_verilator__DOT__cio_jtag_trst_n));
        tracep->fullBit(oldp+1896,(vlTOPp->Azadi_top_verilator__DOT__cio_jtag_srst_n));
        tracep->fullBit(oldp+1897,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req) 
                                          >> 3U))));
        tracep->fullBit(oldp+1898,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req) 
                                          >> 2U))));
        tracep->fullBit(oldp+1899,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req) 
                                          >> 1U))));
        tracep->fullBit(oldp+1900,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req))));
        tracep->fullBit(oldp+1901,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q));
        tracep->fullBit(oldp+1902,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q));
        tracep->fullBit(oldp+1903,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_q));
        tracep->fullCData(oldp+1904,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_q),2);
        tracep->fullCData(oldp+1905,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q),2);
        tracep->fullCData(oldp+1906,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q),2);
        tracep->fullCData(oldp+1907,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullCData(oldp+1908,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+1909,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+1910,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+1911,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+1912,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+1913,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_q),2);
        tracep->fullBit(oldp+1914,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req) 
                                          >> 2U))));
        tracep->fullBit(oldp+1915,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req))));
        tracep->fullCData(oldp+1916,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_sync),3);
        tracep->fullCData(oldp+1917,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync),3);
        tracep->fullBit(oldp+1918,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync) 
                                          >> 2U))));
        tracep->fullCData(oldp+1919,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync))),2);
        tracep->fullQData(oldp+1920,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[0]),34);
        tracep->fullQData(oldp+1922,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[1]),34);
        tracep->fullQData(oldp+1924,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[2]),34);
        tracep->fullQData(oldp+1926,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[3]),34);
        tracep->fullIData(oldp+1928,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__resp_queue_data),32);
        tracep->fullIData(oldp+1929,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum0),32);
        tracep->fullIData(oldp+1930,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum1),32);
        tracep->fullIData(oldp+1931,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum2),32);
        tracep->fullIData(oldp+1932,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum3),32);
        tracep->fullIData(oldp+1933,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted),32);
        tracep->fullIData(oldp+1934,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped0),32);
        tracep->fullIData(oldp+1935,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped1),32);
        tracep->fullIData(oldp+1936,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped2),32);
        tracep->fullIData(oldp+1937,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat1),32);
        tracep->fullIData(oldp+1938,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat2),32);
        tracep->fullIData(oldp+1939,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat3),32);
        tracep->fullSData(oldp+1940,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx0),15);
        tracep->fullSData(oldp+1941,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx1),10);
        tracep->fullCData(oldp+1942,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx2),5);
        tracep->fullSData(oldp+1943,((0x1ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                                >> 0x17U))),9);
        tracep->fullBit(oldp+1944,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x16U))));
        tracep->fullCData(oldp+1945,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                            >> 0x14U))),2);
        tracep->fullBit(oldp+1946,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x13U))));
        tracep->fullBit(oldp+1947,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x12U))));
        tracep->fullBit(oldp+1948,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x11U))));
        tracep->fullBit(oldp+1949,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x10U))));
        tracep->fullBit(oldp+1950,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1951,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1952,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1953,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1954,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xbU))));
        tracep->fullBit(oldp+1955,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1956,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 9U))));
        tracep->fullBit(oldp+1957,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 8U))));
        tracep->fullBit(oldp+1958,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 7U))));
        tracep->fullBit(oldp+1959,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 6U))));
        tracep->fullBit(oldp+1960,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 5U))));
        tracep->fullBit(oldp+1961,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 4U))));
        tracep->fullCData(oldp+1962,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus)),4);
        tracep->fullCData(oldp+1963,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                            >> 0x1dU))),3);
        tracep->fullCData(oldp+1964,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                               >> 0x18U))),5);
        tracep->fullSData(oldp+1965,((0x7ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                                >> 0xdU))),11);
        tracep->fullBit(oldp+1966,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1967,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                          >> 0xbU))));
        tracep->fullCData(oldp+1968,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                            >> 8U))),3);
        tracep->fullCData(oldp+1969,((0xfU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                              >> 4U))),4);
        tracep->fullCData(oldp+1970,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs)),4);
        tracep->fullBit(oldp+1971,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_d));
        tracep->fullBit(oldp+1972,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned))));
        tracep->fullCData(oldp+1973,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned),2);
        tracep->fullBit(oldp+1974,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+1975,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+1976,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+1977,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+1978,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+1979,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1aU))));
        tracep->fullSData(oldp+1980,((0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                                >> 0x10U))),10);
        tracep->fullSData(oldp+1981,((0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                                >> 6U))),10);
        tracep->fullCData(oldp+1982,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                            >> 4U))),2);
        tracep->fullBit(oldp+1983,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 3U))));
        tracep->fullBit(oldp+1984,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 2U))));
        tracep->fullBit(oldp+1985,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 1U))));
        tracep->fullBit(oldp+1986,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol)));
        tracep->fullCData(oldp+1987,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__autoexecdata_idx),5);
        tracep->fullBit(oldp+1988,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmdbusy));
        tracep->fullBit(oldp+1989,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sberror_valid));
        tracep->fullCData(oldp+1990,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sberror),3);
        tracep->fullBit(oldp+1991,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+1992,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->fullBit(oldp+1993,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+1994,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+1995,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n));
        tracep->fullCData(oldp+1996,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi),3);
        tracep->fullBit(oldp+1997,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                          >> 2U))));
        tracep->fullCData(oldp+1998,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi))),2);
        tracep->fullCData(oldp+1999,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_wptr__DOT__intq),3);
        tracep->fullCData(oldp+2000,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_sync),3);
        tracep->fullCData(oldp+2001,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__state_q),3);
        tracep->fullCData(oldp+2002,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__address_q),7);
        tracep->fullIData(oldp+2003,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__data_q),32);
        tracep->fullCData(oldp+2004,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_q),2);
        tracep->fullCData(oldp+2005,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_q),4);
        tracep->fullCData(oldp+2006,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync),3);
        tracep->fullBit(oldp+2007,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync) 
                                          >> 2U))));
        tracep->fullCData(oldp+2008,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync))),2);
        tracep->fullCData(oldp+2009,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync),3);
        tracep->fullIData(oldp+2010,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dmi_rsp 
                                              >> 2U))),32);
        tracep->fullCData(oldp+2011,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dmi_rsp))),2);
        tracep->fullQData(oldp+2012,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dmi_rsp),34);
        tracep->fullQData(oldp+2014,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[0]),41);
        tracep->fullQData(oldp+2016,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[1]),41);
        tracep->fullQData(oldp+2018,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[2]),41);
        tracep->fullQData(oldp+2020,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[3]),41);
        tracep->fullBit(oldp+2022,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset));
        tracep->fullBit(oldp+2023,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr));
        tracep->fullBit(oldp+2024,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr));
        tracep->fullBit(oldp+2025,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr));
        tracep->fullCData(oldp+2026,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d),4);
        tracep->fullBit(oldp+2027,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir));
        tracep->fullBit(oldp+2028,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir));
        tracep->fullBit(oldp+2029,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir));
        tracep->fullCData(oldp+2030,((0x7fU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req 
                                                       >> 0x22U)))),7);
        tracep->fullCData(oldp+2031,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req 
                                                    >> 0x20U)))),2);
        tracep->fullIData(oldp+2032,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req)),32);
        tracep->fullBit(oldp+2033,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req_valid));
        tracep->fullQData(oldp+2034,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req),41);
        tracep->fullCData(oldp+2036,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr),3);
        tracep->fullCData(oldp+2037,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_sync),3);
        tracep->fullBit(oldp+2038,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+2039,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr))),2);
        tracep->fullCData(oldp+2040,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi),3);
        tracep->fullBit(oldp+2041,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                          >> 2U))));
        tracep->fullCData(oldp+2042,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi))),2);
        tracep->fullCData(oldp+2043,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_wptr__DOT__intq),3);
        tracep->fullBit(oldp+2044,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0x10U))));
        tracep->fullBit(oldp+2045,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q))));
        tracep->fullBit(oldp+2046,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)))));
        tracep->fullQData(oldp+2047,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q),41);
        tracep->fullCData(oldp+2049,((0x7fU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q 
                                                       >> 0x22U)))),7);
        tracep->fullIData(oldp+2050,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q 
                                              >> 2U))),32);
        tracep->fullCData(oldp+2051,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q))),2);
        tracep->fullCData(oldp+2052,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q),5);
        tracep->fullCData(oldp+2053,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q),5);
        tracep->fullIData(oldp+2054,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q),32);
        tracep->fullSData(oldp+2055,((0x3fffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                                 >> 0x12U))),14);
        tracep->fullBit(oldp+2056,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0x11U))));
        tracep->fullBit(oldp+2057,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0x10U))));
        tracep->fullBit(oldp+2058,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0xfU))));
        tracep->fullCData(oldp+2059,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+2060,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                            >> 0xaU))),2);
        tracep->fullCData(oldp+2061,((0x3fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                               >> 4U))),6);
        tracep->fullCData(oldp+2062,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q)),4);
        tracep->fullBit(oldp+2063,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q));
        tracep->fullBit(oldp+2064,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk));
        tracep->fullCData(oldp+2065,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray),3);
        tracep->fullBit(oldp+2066,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_rsp) 
                                          >> 1U))));
        tracep->fullBit(oldp+2067,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_rsp) 
                                          >> 1U))));
        tracep->fullBit(oldp+2068,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_rsp))));
        tracep->fullBit(oldp+2069,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_rsp))));
        tracep->fullBit(oldp+2070,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_wptr));
        tracep->fullCData(oldp+2071,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_rptr__DOT__intq),3);
        tracep->fullCData(oldp+2072,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr),3);
        tracep->fullBit(oldp+2073,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+2074,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))),2);
        tracep->fullBit(oldp+2075,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni));
        tracep->fullCData(oldp+2076,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr),3);
        tracep->fullBit(oldp+2077,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+2078,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr))),2);
        tracep->fullBit(oldp+2079,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access));
        tracep->fullBit(oldp+2080,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select));
        tracep->fullBit(oldp+2081,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty)))));
        tracep->fullBit(oldp+2082,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select));
        tracep->fullBit(oldp+2083,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select));
        tracep->fullBit(oldp+2084,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty));
        tracep->fullCData(oldp+2085,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__state_d),3);
        tracep->fullCData(oldp+2086,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__address_d),7);
        tracep->fullIData(oldp+2087,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__data_d),32);
        tracep->fullBit(oldp+2088,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_dmi_busy));
        tracep->fullCData(oldp+2089,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_d),2);
        tracep->fullIData(oldp+2090,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d),32);
        tracep->fullSData(oldp+2091,((0x3fffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                                 >> 0x12U))),14);
        tracep->fullBit(oldp+2092,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                          >> 0x11U))));
        tracep->fullBit(oldp+2093,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                          >> 0x10U))));
        tracep->fullBit(oldp+2094,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                          >> 0xfU))));
        tracep->fullCData(oldp+2095,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+2096,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                            >> 0xaU))),2);
        tracep->fullCData(oldp+2097,((0x3fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                               >> 4U))),6);
        tracep->fullCData(oldp+2098,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d)),4);
        tracep->fullBit(oldp+2099,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d));
        tracep->fullBit(oldp+2100,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk)))));
        tracep->fullCData(oldp+2101,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray),3);
        tracep->fullBit(oldp+2102,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk));
        tracep->fullCData(oldp+2103,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr),3);
        tracep->fullBit(oldp+2104,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+2105,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr))),2);
        tracep->fullBit(oldp+2106,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr));
        tracep->fullCData(oldp+2107,((0x7fU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                       >> 0x22U)))),7);
        tracep->fullCData(oldp+2108,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                    >> 0x20U)))),2);
        tracep->fullIData(oldp+2109,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o)),32);
        tracep->fullQData(oldp+2110,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o),41);
        tracep->fullBit(oldp+2112,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbaddress_write_valid));
        tracep->fullBit(oldp+2113,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbdata_read_valid));
        tracep->fullBit(oldp+2114,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbdata_write_valid));
        tracep->fullCData(oldp+2115,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d 
                                               >> 0x18U))),8);
        tracep->fullIData(oldp+2116,((0xffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d)),24);
        tracep->fullCData(oldp+2117,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                            >> 0x1dU))),3);
        tracep->fullCData(oldp+2118,((0x3fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                               >> 0x17U))),6);
        tracep->fullBit(oldp+2119,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0x16U))));
        tracep->fullBit(oldp+2120,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0x15U))));
        tracep->fullBit(oldp+2121,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0x14U))));
        tracep->fullCData(oldp+2122,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                            >> 0x11U))),3);
        tracep->fullBit(oldp+2123,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0x10U))));
        tracep->fullBit(oldp+2124,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0xfU))));
        tracep->fullCData(oldp+2125,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+2126,((0x7fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                               >> 5U))),7);
        tracep->fullBit(oldp+2127,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 4U))));
        tracep->fullBit(oldp+2128,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 3U))));
        tracep->fullBit(oldp+2129,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 2U))));
        tracep->fullBit(oldp+2130,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 1U))));
        tracep->fullBit(oldp+2131,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d)));
        tracep->fullIData(oldp+2132,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[0U]),32);
        tracep->fullIData(oldp+2133,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[1U]),32);
        tracep->fullIData(oldp+2134,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[2U]),32);
        tracep->fullIData(oldp+2135,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[3U]),32);
        tracep->fullIData(oldp+2136,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[4U]),32);
        tracep->fullIData(oldp+2137,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[5U]),32);
        tracep->fullIData(oldp+2138,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[6U]),32);
        tracep->fullIData(oldp+2139,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[7U]),32);
        tracep->fullCData(oldp+2140,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                            >> 0x1dU))),3);
        tracep->fullCData(oldp+2141,((0x3fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                               >> 0x17U))),6);
        tracep->fullBit(oldp+2142,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0x16U))));
        tracep->fullBit(oldp+2143,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0x15U))));
        tracep->fullBit(oldp+2144,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0x14U))));
        tracep->fullCData(oldp+2145,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                            >> 0x11U))),3);
        tracep->fullBit(oldp+2146,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0x10U))));
        tracep->fullBit(oldp+2147,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0xfU))));
        tracep->fullCData(oldp+2148,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+2149,((0x7fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                               >> 5U))),7);
        tracep->fullBit(oldp+2150,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 4U))));
        tracep->fullBit(oldp+2151,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 3U))));
        tracep->fullBit(oldp+2152,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 2U))));
        tracep->fullBit(oldp+2153,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 1U))));
        tracep->fullBit(oldp+2154,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs)));
        tracep->fullBit(oldp+2155,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req));
        tracep->fullCData(oldp+2156,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
        tracep->fullCData(oldp+2157,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
        tracep->fullBit(oldp+2158,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel));
        tracep->fullBit(oldp+2159,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
        tracep->fullIData(oldp+2160,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b),32);
        tracep->fullQData(oldp+2161,((0x1ffffffffULL 
                                      & (~ ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                            << 1U)))),33);
        tracep->fullCData(oldp+2163,((0x3fU & ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)))),6);
        tracep->fullCData(oldp+2164,(((0x10U & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                                >> 0x18U))))) 
                                                << 4U)) 
                                      | (0xfU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                 >> 0x18U)))),5);
        tracep->fullCData(oldp+2165,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                               >> 0x10U))),5);
        tracep->fullBit(oldp+2166,((1U & (((IData)(0x20U) 
                                           - (0x1fU 
                                              & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                          >> 5U))));
        tracep->fullBit(oldp+2167,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2168,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2169,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2170,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2171,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2172,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2173,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2174,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2175,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[0U])));
        tracep->fullCData(oldp+2176,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be),4);
        tracep->fullIData(oldp+2177,((0xfffffffcU & 
                                      ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                >> 3U)) 
                                       << 2U))),32);
        tracep->fullIData(oldp+2178,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                              >> 1U))),32);
        tracep->fullQData(oldp+2179,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
        tracep->fullBit(oldp+2181,((0U == (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                   >> 1U)))));
        tracep->fullCData(oldp+2182,(((2U & ((IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 0x21U)) 
                                             << 1U)) 
                                      | (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))),2);
        tracep->fullCData(oldp+2183,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                    >> 1U)))),2);
        tracep->fullBit(oldp+2184,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+2185,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[0U])));
        tracep->fullBit(oldp+2186,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2187,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2188,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2189,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2190,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2191,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2192,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2193,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2194,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U])));
        tracep->fullCData(oldp+2195,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+2196,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+2197,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullBit(oldp+2198,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2199,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2200,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2201,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2202,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2203,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2204,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2205,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2206,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [0U][0U])));
        tracep->fullBit(oldp+2207,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2208,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2209,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2210,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2211,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2212,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2213,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2214,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2215,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [1U][0U])));
        tracep->fullBit(oldp+2216,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2217,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2218,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2219,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2220,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2221,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2222,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2223,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2224,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [2U][0U])));
        tracep->fullBit(oldp+2225,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2226,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2227,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2228,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2229,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2230,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2231,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2232,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2233,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [3U][0U])));
        tracep->fullBit(oldp+2234,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2235,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2236,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2237,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2238,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2239,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2240,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2241,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2242,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [4U][0U])));
        tracep->fullBit(oldp+2243,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2244,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2245,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2246,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2247,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2248,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2249,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2250,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2251,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [5U][0U])));
        tracep->fullBit(oldp+2252,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2253,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2254,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2255,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2256,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2257,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2258,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2259,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2260,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [6U][0U])));
        tracep->fullBit(oldp+2261,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2262,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2263,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2264,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2265,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2266,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2267,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2268,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2269,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [7U][0U])));
        tracep->fullBit(oldp+2270,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2271,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2272,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2273,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2274,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2275,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2276,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2277,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2278,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [8U][0U])));
        tracep->fullBit(oldp+2279,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2280,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2281,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2282,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2283,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2284,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2285,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2286,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2287,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [9U][0U])));
        tracep->fullCData(oldp+2288,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
        tracep->fullBit(oldp+2289,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__hold_all_requests));
        tracep->fullBit(oldp+2290,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2291,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2292,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2293,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2294,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2295,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2296,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2297,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2298,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [0U][0U])));
        tracep->fullBit(oldp+2299,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2300,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2301,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2302,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2303,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2304,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2305,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2306,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2307,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [1U][0U])));
        tracep->fullBit(oldp+2308,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2309,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2310,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2311,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2312,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2313,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2314,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2315,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2316,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [2U][0U])));
        tracep->fullBit(oldp+2317,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2318,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2319,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2320,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2321,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2322,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2323,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2324,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2325,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [3U][0U])));
        tracep->fullBit(oldp+2326,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2327,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2328,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2329,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2330,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2331,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2332,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2333,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2334,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [4U][0U])));
        tracep->fullBit(oldp+2335,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2336,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2337,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2338,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2339,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2340,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2341,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2342,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2343,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [5U][0U])));
        tracep->fullBit(oldp+2344,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2345,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2346,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2347,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2348,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2349,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2350,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2351,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2352,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [6U][0U])));
        tracep->fullBit(oldp+2353,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2354,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2355,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2356,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2357,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2358,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2359,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2360,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2361,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [7U][0U])));
        tracep->fullBit(oldp+2362,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2363,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2364,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2365,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2366,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2367,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2368,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2369,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2370,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [8U][0U])));
        tracep->fullBit(oldp+2371,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2372,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2373,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2374,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2375,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2376,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2377,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2378,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2379,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [9U][0U])));
        tracep->fullBit(oldp+2380,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [0xaU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2381,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2382,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2383,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2384,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2385,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [0xaU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0xaU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+2386,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [0xaU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [0xaU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2387,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [0xaU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0xaU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+2388,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [0xaU][0U])));
        tracep->fullWData(oldp+2389,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
        tracep->fullBit(oldp+2392,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [0xaU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2393,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2394,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2395,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2396,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2397,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [0xaU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0xaU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+2398,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [0xaU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [0xaU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2399,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [0xaU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0xaU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+2400,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [0xaU][0U])));
        tracep->fullBit(oldp+2401,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2402,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2403,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2404,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2405,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2406,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2407,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2408,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2409,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [0U][0U])));
        tracep->fullBit(oldp+2410,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2411,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2412,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2413,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2414,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2415,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2416,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2417,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2418,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2419,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [0U][2U] 
                                          >> 0x15U))));
        __Vtemp1745[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [0U][0U]);
        __Vtemp1745[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [0U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0U][1U]));
        __Vtemp1745[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0U][2U]));
        tracep->fullWData(oldp+2420,(__Vtemp1745),85);
        tracep->fullBit(oldp+2423,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [0U][0U])));
        tracep->fullBit(oldp+2424,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2425,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2426,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2427,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2428,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2429,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2430,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2431,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2432,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [1U][0U])));
        tracep->fullBit(oldp+2433,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2434,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2435,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2436,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2437,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2438,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2439,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2440,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2441,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2442,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [1U][2U] 
                                          >> 0x15U))));
        __Vtemp1761[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [1U][0U]);
        __Vtemp1761[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [1U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [1U][1U]));
        __Vtemp1761[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [1U][2U]));
        tracep->fullWData(oldp+2443,(__Vtemp1761),85);
        tracep->fullBit(oldp+2446,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [1U][0U])));
        tracep->fullBit(oldp+2447,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2448,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2449,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2450,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2451,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2452,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2453,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2454,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2455,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [2U][0U])));
        tracep->fullBit(oldp+2456,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2457,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2458,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2459,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2460,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2461,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2462,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2463,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2464,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2465,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [2U][2U] 
                                          >> 0x15U))));
        __Vtemp1777[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [2U][0U]);
        __Vtemp1777[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [2U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [2U][1U]));
        __Vtemp1777[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [2U][2U]));
        tracep->fullWData(oldp+2466,(__Vtemp1777),85);
        tracep->fullBit(oldp+2469,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [2U][0U])));
        tracep->fullBit(oldp+2470,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2471,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2472,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2473,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2474,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2475,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2476,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2477,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2478,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [3U][0U])));
        tracep->fullBit(oldp+2479,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2480,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2481,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2482,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2483,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2484,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2485,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2486,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2487,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2488,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [3U][2U] 
                                          >> 0x15U))));
        __Vtemp1793[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [3U][0U]);
        __Vtemp1793[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [3U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [3U][1U]));
        __Vtemp1793[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [3U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [3U][2U]));
        tracep->fullWData(oldp+2489,(__Vtemp1793),85);
        tracep->fullBit(oldp+2492,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [3U][0U])));
        tracep->fullBit(oldp+2493,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2494,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2495,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2496,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2497,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2498,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2499,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2500,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2501,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [4U][0U])));
        tracep->fullBit(oldp+2502,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2503,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2504,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2505,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2506,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2507,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2508,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2509,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2510,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2511,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [4U][2U] 
                                          >> 0x15U))));
        __Vtemp1809[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [4U][0U]);
        __Vtemp1809[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [4U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [4U][1U]));
        __Vtemp1809[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [4U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [4U][2U]));
        tracep->fullWData(oldp+2512,(__Vtemp1809),85);
        tracep->fullBit(oldp+2515,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [4U][0U])));
        tracep->fullBit(oldp+2516,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2517,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2518,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2519,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2520,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2521,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2522,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2523,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2524,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [5U][0U])));
        tracep->fullBit(oldp+2525,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2526,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2527,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2528,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2529,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2530,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2531,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2532,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2533,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2534,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [5U][2U] 
                                          >> 0x15U))));
        __Vtemp1825[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [5U][0U]);
        __Vtemp1825[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [5U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [5U][1U]));
        __Vtemp1825[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [5U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [5U][2U]));
        tracep->fullWData(oldp+2535,(__Vtemp1825),85);
        tracep->fullBit(oldp+2538,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [5U][0U])));
        tracep->fullBit(oldp+2539,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2540,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2541,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2542,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2543,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2544,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2545,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2546,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2547,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [6U][0U])));
        tracep->fullBit(oldp+2548,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2549,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2550,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2551,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2552,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2553,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2554,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2555,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2556,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2557,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [6U][2U] 
                                          >> 0x15U))));
        __Vtemp1841[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [6U][0U]);
        __Vtemp1841[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [6U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [6U][1U]));
        __Vtemp1841[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [6U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [6U][2U]));
        tracep->fullWData(oldp+2558,(__Vtemp1841),85);
        tracep->fullBit(oldp+2561,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [6U][0U])));
        tracep->fullBit(oldp+2562,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2563,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2564,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2565,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2566,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2567,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2568,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2569,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2570,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [7U][0U])));
        tracep->fullBit(oldp+2571,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2572,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2573,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2574,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2575,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2576,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2577,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2578,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2579,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2580,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [7U][2U] 
                                          >> 0x15U))));
        __Vtemp1857[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [7U][0U]);
        __Vtemp1857[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [7U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [7U][1U]));
        __Vtemp1857[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [7U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [7U][2U]));
        tracep->fullWData(oldp+2581,(__Vtemp1857),85);
        tracep->fullBit(oldp+2584,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [7U][0U])));
        tracep->fullBit(oldp+2585,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2586,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2587,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2588,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2589,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2590,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2591,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2592,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2593,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [8U][0U])));
        tracep->fullBit(oldp+2594,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2595,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2596,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2597,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2598,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2599,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2600,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2601,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2602,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2603,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [8U][2U] 
                                          >> 0x15U))));
        __Vtemp1873[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [8U][0U]);
        __Vtemp1873[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [8U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [8U][1U]));
        __Vtemp1873[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [8U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [8U][2U]));
        tracep->fullWData(oldp+2604,(__Vtemp1873),85);
        tracep->fullBit(oldp+2607,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [8U][0U])));
        tracep->fullBit(oldp+2608,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2609,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2610,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2611,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2612,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2613,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2614,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2615,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2616,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [9U][0U])));
        tracep->fullBit(oldp+2617,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2618,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2619,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2620,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2621,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2622,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2623,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2624,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2625,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2626,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [9U][2U] 
                                          >> 0x15U))));
        __Vtemp1889[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [9U][0U]);
        __Vtemp1889[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [9U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [9U][1U]));
        __Vtemp1889[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [9U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [9U][2U]));
        tracep->fullWData(oldp+2627,(__Vtemp1889),85);
        tracep->fullBit(oldp+2630,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [9U][0U])));
        tracep->fullCData(oldp+2631,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_2),4);
        tracep->fullBit(oldp+2632,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2633,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2634,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2635,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2636,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2637,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2638,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2639,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2640,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [0U][0U])));
        tracep->fullBit(oldp+2641,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2642,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2643,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2644,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2645,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2646,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2647,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2648,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2649,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [1U][0U])));
        tracep->fullBit(oldp+2650,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2651,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2652,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2653,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2654,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2655,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2656,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2657,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2658,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [2U][0U])));
        tracep->fullBit(oldp+2659,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2660,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2661,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2662,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2663,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2664,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2665,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2666,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2667,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [3U][0U])));
        tracep->fullBit(oldp+2668,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2669,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2670,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2671,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2672,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2673,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2674,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2675,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2676,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [4U][0U])));
        tracep->fullBit(oldp+2677,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2678,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2679,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2680,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2681,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2682,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2683,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2684,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2685,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [5U][0U])));
        tracep->fullBit(oldp+2686,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2687,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2688,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2689,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2690,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2691,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2692,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2693,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2694,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [6U][0U])));
        tracep->fullBit(oldp+2695,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2696,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2697,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2698,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2699,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2700,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2701,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2702,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2703,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [7U][0U])));
        tracep->fullBit(oldp+2704,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2705,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2706,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2707,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2708,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2709,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2710,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2711,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2712,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [8U][0U])));
        tracep->fullBit(oldp+2713,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2714,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2715,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2716,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2717,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2718,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2719,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2720,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2721,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [9U][0U])));
        tracep->fullBit(oldp+2722,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [0xaU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2723,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [0xaU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2724,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [0xaU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2725,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [0xaU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2726,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [0xaU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2727,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [0xaU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [0xaU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+2728,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [0xaU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [0xaU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2729,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [0xaU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [0xaU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+2730,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [0xaU][0U])));
        tracep->fullCData(oldp+2731,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
        tracep->fullBit(oldp+2732,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__hold_all_requests));
        tracep->fullBit(oldp+2733,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2734,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2735,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2736,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2737,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2738,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2739,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2740,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2741,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0U][0U])));
        tracep->fullBit(oldp+2742,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2743,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2744,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2745,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2746,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2747,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2748,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2749,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2750,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [1U][0U])));
        tracep->fullBit(oldp+2751,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2752,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2753,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2754,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2755,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2756,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2757,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2758,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2759,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [2U][0U])));
        tracep->fullBit(oldp+2760,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2761,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2762,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2763,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2764,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2765,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2766,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2767,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2768,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [3U][0U])));
        tracep->fullBit(oldp+2769,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2770,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2771,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2772,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2773,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2774,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2775,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2776,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2777,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [4U][0U])));
        tracep->fullBit(oldp+2778,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2779,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2780,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2781,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2782,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2783,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2784,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2785,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2786,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [5U][0U])));
        tracep->fullBit(oldp+2787,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2788,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2789,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2790,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2791,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2792,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2793,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2794,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2795,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [6U][0U])));
        tracep->fullBit(oldp+2796,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2797,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2798,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2799,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2800,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2801,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2802,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2803,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2804,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [7U][0U])));
        tracep->fullBit(oldp+2805,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2806,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2807,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2808,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2809,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2810,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2811,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2812,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2813,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [8U][0U])));
        tracep->fullBit(oldp+2814,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2815,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2816,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2817,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2818,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2819,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2820,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2821,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2822,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [9U][0U])));
        tracep->fullBit(oldp+2823,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0xaU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2824,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2825,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2826,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2827,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2828,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xaU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xaU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+2829,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xaU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [0xaU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2830,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xaU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xaU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+2831,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0xaU][0U])));
        tracep->fullBit(oldp+2832,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0xbU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2833,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xbU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2834,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xbU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2835,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xbU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2836,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xbU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2837,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xbU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xbU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+2838,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xbU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [0xbU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2839,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xbU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xbU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+2840,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0xbU][0U])));
        tracep->fullWData(oldp+2841,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
        tracep->fullBit(oldp+2844,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0xbU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2845,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xbU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2846,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xbU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2847,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xbU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2848,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xbU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2849,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xbU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xbU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+2850,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xbU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [0xbU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2851,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xbU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xbU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+2852,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0xbU][0U])));
        tracep->fullBit(oldp+2853,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2854,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2855,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2856,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2857,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2858,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2859,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2860,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2861,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0U][0U])));
        tracep->fullBit(oldp+2862,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2863,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2864,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2865,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2866,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2867,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2868,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2869,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2870,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2871,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0U][2U] 
                                          >> 0x15U))));
        __Vtemp2121[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [0U][0U]);
        __Vtemp2121[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [0U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][1U]));
        __Vtemp2121[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][2U]));
        tracep->fullWData(oldp+2872,(__Vtemp2121),85);
        tracep->fullBit(oldp+2875,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0U][0U])));
        tracep->fullBit(oldp+2876,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2877,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2878,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2879,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2880,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2881,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2882,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2883,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2884,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [1U][0U])));
        tracep->fullBit(oldp+2885,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2886,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2887,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2888,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2889,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2890,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2891,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2892,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2893,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2894,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [1U][2U] 
                                          >> 0x15U))));
        __Vtemp2137[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [1U][0U]);
        __Vtemp2137[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [1U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][1U]));
        __Vtemp2137[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][2U]));
        tracep->fullWData(oldp+2895,(__Vtemp2137),85);
        tracep->fullBit(oldp+2898,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [1U][0U])));
        tracep->fullBit(oldp+2899,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2900,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2901,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2902,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2903,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2904,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2905,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2906,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2907,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [2U][0U])));
        tracep->fullBit(oldp+2908,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2909,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2910,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2911,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2912,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2913,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2914,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2915,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2916,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2917,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [2U][2U] 
                                          >> 0x15U))));
        __Vtemp2153[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [2U][0U]);
        __Vtemp2153[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [2U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][1U]));
        __Vtemp2153[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][2U]));
        tracep->fullWData(oldp+2918,(__Vtemp2153),85);
        tracep->fullBit(oldp+2921,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [2U][0U])));
        tracep->fullBit(oldp+2922,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2923,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2924,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2925,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2926,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2927,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2928,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2929,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2930,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [3U][0U])));
        tracep->fullBit(oldp+2931,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2932,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2933,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2934,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2935,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2936,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2937,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2938,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2939,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2940,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [3U][2U] 
                                          >> 0x15U))));
        __Vtemp2169[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [3U][0U]);
        __Vtemp2169[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [3U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][1U]));
        __Vtemp2169[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [3U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][2U]));
        tracep->fullWData(oldp+2941,(__Vtemp2169),85);
        tracep->fullBit(oldp+2944,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [3U][0U])));
        tracep->fullBit(oldp+2945,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2946,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2947,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2948,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2949,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2950,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2951,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2952,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2953,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [4U][0U])));
        tracep->fullBit(oldp+2954,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2955,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2956,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2957,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2958,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2959,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2960,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2961,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2962,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2963,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [4U][2U] 
                                          >> 0x15U))));
        __Vtemp2185[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [4U][0U]);
        __Vtemp2185[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [4U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][1U]));
        __Vtemp2185[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [4U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][2U]));
        tracep->fullWData(oldp+2964,(__Vtemp2185),85);
        tracep->fullBit(oldp+2967,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [4U][0U])));
        tracep->fullBit(oldp+2968,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2969,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2970,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2971,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2972,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2973,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2974,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2975,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2976,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [5U][0U])));
        tracep->fullBit(oldp+2977,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2978,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2979,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2980,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2981,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2982,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2983,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2984,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2985,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2986,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [5U][2U] 
                                          >> 0x15U))));
        __Vtemp2201[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [5U][0U]);
        __Vtemp2201[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [5U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][1U]));
        __Vtemp2201[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [5U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][2U]));
        tracep->fullWData(oldp+2987,(__Vtemp2201),85);
        tracep->fullBit(oldp+2990,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [5U][0U])));
        tracep->fullBit(oldp+2991,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2992,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2993,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2994,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2995,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2996,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2997,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2998,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2999,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [6U][0U])));
        tracep->fullBit(oldp+3000,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3001,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3002,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3003,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3004,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3005,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3006,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3007,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3008,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+3009,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [6U][2U] 
                                          >> 0x15U))));
        __Vtemp2217[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [6U][0U]);
        __Vtemp2217[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [6U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][1U]));
        __Vtemp2217[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [6U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][2U]));
        tracep->fullWData(oldp+3010,(__Vtemp2217),85);
        tracep->fullBit(oldp+3013,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [6U][0U])));
        tracep->fullBit(oldp+3014,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3015,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3016,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3017,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3018,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3019,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3020,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3021,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3022,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [7U][0U])));
        tracep->fullBit(oldp+3023,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3024,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3025,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3026,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3027,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3028,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3029,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3030,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3031,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+3032,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [7U][2U] 
                                          >> 0x15U))));
        __Vtemp2233[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [7U][0U]);
        __Vtemp2233[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [7U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][1U]));
        __Vtemp2233[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [7U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][2U]));
        tracep->fullWData(oldp+3033,(__Vtemp2233),85);
        tracep->fullBit(oldp+3036,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [7U][0U])));
        tracep->fullBit(oldp+3037,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3038,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3039,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3040,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3041,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3042,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3043,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3044,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3045,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [8U][0U])));
        tracep->fullBit(oldp+3046,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3047,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3048,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3049,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3050,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3051,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3052,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3053,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3054,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+3055,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [8U][2U] 
                                          >> 0x15U))));
        __Vtemp2249[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [8U][0U]);
        __Vtemp2249[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [8U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][1U]));
        __Vtemp2249[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [8U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][2U]));
        tracep->fullWData(oldp+3056,(__Vtemp2249),85);
        tracep->fullBit(oldp+3059,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [8U][0U])));
        tracep->fullBit(oldp+3060,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3061,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3062,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3063,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3064,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3065,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3066,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3067,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3068,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [9U][0U])));
        tracep->fullBit(oldp+3069,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3070,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3071,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3072,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3073,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3074,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3075,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3076,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3077,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+3078,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [9U][2U] 
                                          >> 0x15U))));
        __Vtemp2265[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [9U][0U]);
        __Vtemp2265[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [9U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [9U][1U]));
        __Vtemp2265[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [9U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [9U][2U]));
        tracep->fullWData(oldp+3079,(__Vtemp2265),85);
        tracep->fullBit(oldp+3082,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [9U][0U])));
        tracep->fullBit(oldp+3083,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0xaU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3084,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3085,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3086,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3087,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3088,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xaU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xaU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+3089,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xaU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [0xaU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3090,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xaU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xaU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+3091,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0xaU][0U])));
        tracep->fullBit(oldp+3092,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3093,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3094,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3095,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3096,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3097,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3098,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3099,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3100,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+3101,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0xaU][2U] 
                                          >> 0x15U))));
        __Vtemp2281[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [0xaU][0U]);
        __Vtemp2281[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [0xaU][1U]) | (0xfffffffeU 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                           [0xaU][1U]));
        __Vtemp2281[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [0xaU][2U]) | (0x1ffffeU 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                           [0xaU][2U]));
        tracep->fullWData(oldp+3102,(__Vtemp2281),85);
        tracep->fullBit(oldp+3105,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0xaU][0U])));
        tracep->fullBit(oldp+3106,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3107,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3108,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3109,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3110,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3111,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3112,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3113,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3114,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[0U])));
        tracep->fullBit(oldp+3115,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3116,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3117,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3118,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3119,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3120,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3121,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3122,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3123,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[0U])));
        tracep->fullBit(oldp+3124,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3125,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3126,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3127,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3128,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3129,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3130,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3131,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3132,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                    [0U][0U])));
        tracep->fullBit(oldp+3133,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3134,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3135,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3136,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3137,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3138,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3139,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3140,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3141,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                    [1U][0U])));
        tracep->fullBit(oldp+3142,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3143,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3144,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3145,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3146,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3147,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3148,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3149,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3150,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                 [0U]))));
        tracep->fullBit(oldp+3151,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3152,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3153,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3154,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3155,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3156,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3157,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3158,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3159,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                 [1U]))));
        tracep->fullBit(oldp+3160,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3161,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3162,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3163,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3164,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3165,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3166,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3167,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3168,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                    [0U][0U])));
        tracep->fullBit(oldp+3169,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3170,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3171,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3172,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3173,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3174,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3175,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3176,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3177,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                    [1U][0U])));
        tracep->fullBit(oldp+3178,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3179,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3180,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3181,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3182,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3183,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3184,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3185,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3186,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                 [0U]))));
        tracep->fullBit(oldp+3187,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3188,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3189,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3190,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3191,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3192,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3193,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3194,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3195,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                 [1U]))));
        tracep->fullBit(oldp+3196,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3197,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3198,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3199,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3200,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3201,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3202,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3203,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3204,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+3205,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3206,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3207,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3208,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3209,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3210,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3211,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3212,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3213,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                    [1U][0U])));
        tracep->fullBit(oldp+3214,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3215,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3216,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3217,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3218,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3219,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3220,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3221,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3222,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+3223,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3224,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3225,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3226,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3227,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3228,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3229,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3230,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3231,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+3232,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3233,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3234,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3235,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3236,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3237,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3238,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3239,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3240,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+3241,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3242,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3243,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3244,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3245,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3246,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3247,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3248,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3249,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullBit(oldp+3250,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3251,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3252,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3253,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3254,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3255,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3256,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3257,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3258,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+3259,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3260,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3261,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3262,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3263,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3264,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3265,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3266,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3267,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+3268,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrequest),2);
        tracep->fullCData(oldp+3269,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hgrant),2);
        tracep->fullBit(oldp+3270,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3271,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3272,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3273,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3274,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3275,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3276,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3277,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3278,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+3279,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrequest))));
        tracep->fullBit(oldp+3280,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3281,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3282,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3283,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3284,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3285,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3286,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3287,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3288,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+3289,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+3290,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+3291,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3292,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3293,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3294,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3295,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3296,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3297,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3298,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3299,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+3300,((0xfeU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+3301,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+3302,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3303,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3304,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3305,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3306,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3307,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3308,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3309,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3310,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+3311,((1U | (0xfeU & 
                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+3312,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+3313,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2362[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[0U]);
        __Vtemp2362[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[1U]));
        __Vtemp2362[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+3314,(__Vtemp2362),85);
        tracep->fullBit(oldp+3317,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+3318,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+3321,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullBit(oldp+3324,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullWData(oldp+3325,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+3328,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+3329,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+3330,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+3331,((2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+3332,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+3333,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3334,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3335,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3336,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3337,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3338,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3339,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3340,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3341,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+3342,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3343,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3344,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3345,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3346,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3347,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3348,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3349,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3350,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                    [1U][0U])));
        tracep->fullBit(oldp+3351,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3352,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3353,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3354,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3355,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3356,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3357,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3358,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3359,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+3360,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3361,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3362,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3363,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3364,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3365,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3366,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3367,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3368,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+3369,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3370,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3371,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3372,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3373,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3374,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3375,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3376,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3377,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+3378,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3379,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3380,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3381,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3382,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3383,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3384,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3385,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3386,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullBit(oldp+3387,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3388,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3389,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3390,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3391,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3392,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3393,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3394,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3395,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+3396,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3397,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3398,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3399,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3400,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3401,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3402,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3403,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3404,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+3405,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrequest),2);
        tracep->fullCData(oldp+3406,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hgrant),2);
        tracep->fullBit(oldp+3407,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3408,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3409,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3410,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3411,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3412,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3413,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3414,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3415,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+3416,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrequest))));
        tracep->fullBit(oldp+3417,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3418,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3419,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3420,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3421,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3422,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3423,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3424,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3425,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+3426,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+3427,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+3428,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3429,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3430,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3431,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3432,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3433,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3434,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3435,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3436,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+3437,((0xfeU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+3438,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+3439,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3440,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3441,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3442,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3443,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3444,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3445,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3446,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3447,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+3448,((1U | (0xfeU & 
                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+3449,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+3450,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2406[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[0U]);
        __Vtemp2406[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[1U]));
        __Vtemp2406[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+3451,(__Vtemp2406),85);
        tracep->fullBit(oldp+3454,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+3455,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+3458,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullBit(oldp+3461,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullWData(oldp+3462,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+3465,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+3466,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+3467,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+3468,((2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+3469,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+3470,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3471,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3472,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3473,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3474,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3475,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3476,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3477,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3478,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+3479,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3480,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3481,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3482,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3483,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3484,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3485,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3486,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3487,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+3488,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3489,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3490,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3491,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3492,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3493,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3494,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3495,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3496,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+3497,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+3498,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                 [0U]))));
        __Vtemp2410[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2410[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2410[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+3499,(__Vtemp2410),85);
        tracep->fullBit(oldp+3502,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+3503,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+3504,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                     [0U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3506,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3507,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3508,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3509,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3510,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3511,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3512,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3513,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3514,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+3515,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3516,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3517,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3518,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3519,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3520,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3521,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3522,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3523,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+3524,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3525,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3526,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3527,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3528,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3529,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3530,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3531,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3532,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+3533,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+3534,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                 [1U]))));
        __Vtemp2414[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2414[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2414[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+3535,(__Vtemp2414),85);
        tracep->fullBit(oldp+3538,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+3539,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+3540,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                     [1U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3542,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3543,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3544,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3545,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3546,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3547,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3548,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3549,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3550,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+3551,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3552,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3553,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3554,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3555,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3556,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3557,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3558,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3559,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+3560,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3561,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3562,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3563,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3564,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3565,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3566,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3567,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3568,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+3569,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+3570,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                 [0U]))));
        __Vtemp2418[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2418[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2418[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+3571,(__Vtemp2418),85);
        tracep->fullBit(oldp+3574,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+3575,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+3576,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                     [0U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3578,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3579,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3580,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3581,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3582,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3583,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3584,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3585,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3586,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+3587,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3588,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3589,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3590,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3591,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3592,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3593,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3594,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3595,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+3596,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3597,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3598,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3599,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3600,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3601,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3602,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3603,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3604,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+3605,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+3606,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                 [1U]))));
        __Vtemp2422[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2422[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2422[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+3607,(__Vtemp2422),85);
        tracep->fullBit(oldp+3610,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+3611,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+3612,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                     [1U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3614,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3615,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3616,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3617,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3618,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3619,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3620,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3621,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3622,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[0U])));
        tracep->fullBit(oldp+3623,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3624,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3625,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3626,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3627,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3628,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+3629,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3630,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+3631,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[0U])));
        tracep->fullBit(oldp+3632,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3633,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3634,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3635,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3636,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3637,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3638,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3639,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3640,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                    [0U][0U])));
        tracep->fullBit(oldp+3641,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3642,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3643,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3644,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3645,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3646,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3647,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3648,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3649,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                    [1U][0U])));
        tracep->fullBit(oldp+3650,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3651,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3652,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3653,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3654,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3655,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3656,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3657,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3658,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                 [0U]))));
        tracep->fullBit(oldp+3659,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3660,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3661,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3662,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3663,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3664,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3665,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3666,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3667,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                 [1U]))));
        tracep->fullBit(oldp+3668,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3669,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3670,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3671,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3672,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3673,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3674,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3675,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3676,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                    [0U][0U])));
        tracep->fullBit(oldp+3677,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+3678,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+3679,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+3680,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+3681,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+3682,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+3683,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+3684,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+3685,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                    [1U][0U])));
    }
}
