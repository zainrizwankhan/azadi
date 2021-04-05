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
    WData/*95:0*/ __Vtemp1621[3];
    WData/*95:0*/ __Vtemp1637[3];
    WData/*95:0*/ __Vtemp1653[3];
    WData/*95:0*/ __Vtemp1669[3];
    WData/*95:0*/ __Vtemp1685[3];
    WData/*95:0*/ __Vtemp1701[3];
    WData/*95:0*/ __Vtemp1717[3];
    WData/*95:0*/ __Vtemp1733[3];
    WData/*95:0*/ __Vtemp1749[3];
    WData/*95:0*/ __Vtemp1765[3];
    WData/*95:0*/ __Vtemp1997[3];
    WData/*95:0*/ __Vtemp2013[3];
    WData/*95:0*/ __Vtemp2029[3];
    WData/*95:0*/ __Vtemp2045[3];
    WData/*95:0*/ __Vtemp2061[3];
    WData/*95:0*/ __Vtemp2077[3];
    WData/*95:0*/ __Vtemp2093[3];
    WData/*95:0*/ __Vtemp2109[3];
    WData/*95:0*/ __Vtemp2125[3];
    WData/*95:0*/ __Vtemp2141[3];
    WData/*95:0*/ __Vtemp2342[3];
    WData/*95:0*/ __Vtemp2346[3];
    WData/*95:0*/ __Vtemp2350[3];
    WData/*95:0*/ __Vtemp2354[3];
    WData/*95:0*/ __Vtemp2358[3];
    // Body
    {
        tracep->fullQData(oldp+1,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[0]),34);
        tracep->fullQData(oldp+3,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[1]),34);
        tracep->fullQData(oldp+5,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[2]),34);
        tracep->fullQData(oldp+7,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[3]),34);
        tracep->fullBit(oldp+9,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                       [0U] >> 5U))));
        tracep->fullCData(oldp+10,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                          [0U] >> 3U))),2);
        tracep->fullBit(oldp+11,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [0U] >> 2U))));
        tracep->fullBit(oldp+12,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [0U] >> 1U))));
        tracep->fullBit(oldp+13,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                  [0U])));
        tracep->fullBit(oldp+14,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [1U] >> 5U))));
        tracep->fullCData(oldp+15,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                          [1U] >> 3U))),2);
        tracep->fullBit(oldp+16,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [1U] >> 2U))));
        tracep->fullBit(oldp+17,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [1U] >> 1U))));
        tracep->fullBit(oldp+18,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                  [1U])));
        tracep->fullBit(oldp+19,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [2U] >> 5U))));
        tracep->fullCData(oldp+20,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                          [2U] >> 3U))),2);
        tracep->fullBit(oldp+21,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [2U] >> 2U))));
        tracep->fullBit(oldp+22,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [2U] >> 1U))));
        tracep->fullBit(oldp+23,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                  [2U])));
        tracep->fullBit(oldp+24,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [3U] >> 5U))));
        tracep->fullCData(oldp+25,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                          [3U] >> 3U))),2);
        tracep->fullBit(oldp+26,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [3U] >> 2U))));
        tracep->fullBit(oldp+27,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [3U] >> 1U))));
        tracep->fullBit(oldp+28,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                  [3U])));
        tracep->fullBit(oldp+29,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pmp_req_err[0]));
        tracep->fullBit(oldp+30,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pmp_req_err[1]));
        tracep->fullQData(oldp+31,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[0]),34);
        tracep->fullQData(oldp+33,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[1]),34);
        tracep->fullQData(oldp+35,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[2]),34);
        tracep->fullQData(oldp+37,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[3]),34);
        tracep->fullBit(oldp+39,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [0U] >> 5U))));
        tracep->fullCData(oldp+40,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                          [0U] >> 3U))),2);
        tracep->fullBit(oldp+41,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [0U] >> 2U))));
        tracep->fullBit(oldp+42,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [0U] >> 1U))));
        tracep->fullBit(oldp+43,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                  [0U])));
        tracep->fullBit(oldp+44,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [1U] >> 5U))));
        tracep->fullCData(oldp+45,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                          [1U] >> 3U))),2);
        tracep->fullBit(oldp+46,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [1U] >> 2U))));
        tracep->fullBit(oldp+47,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [1U] >> 1U))));
        tracep->fullBit(oldp+48,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                  [1U])));
        tracep->fullBit(oldp+49,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [2U] >> 5U))));
        tracep->fullCData(oldp+50,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                          [2U] >> 3U))),2);
        tracep->fullBit(oldp+51,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [2U] >> 2U))));
        tracep->fullBit(oldp+52,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [2U] >> 1U))));
        tracep->fullBit(oldp+53,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                  [2U])));
        tracep->fullBit(oldp+54,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [3U] >> 5U))));
        tracep->fullCData(oldp+55,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                          [3U] >> 3U))),2);
        tracep->fullBit(oldp+56,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [3U] >> 2U))));
        tracep->fullBit(oldp+57,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [3U] >> 1U))));
        tracep->fullBit(oldp+58,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                  [3U])));
        tracep->fullBit(oldp+59,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pmp_req_err
                                 [0U]));
        tracep->fullBit(oldp+60,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_alu));
        tracep->fullIData(oldp+61,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[0]),32);
        tracep->fullIData(oldp+62,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[1]),32);
        tracep->fullIData(oldp+63,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[0]),32);
        tracep->fullIData(oldp+64,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[1]),32);
        tracep->fullIData(oldp+65,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev),32);
        tracep->fullBit(oldp+66,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pmp_req_err
                                 [1U]));
        tracep->fullBit(oldp+67,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [0U] >> 5U))));
        tracep->fullCData(oldp+68,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                          [0U] >> 3U))),2);
        tracep->fullBit(oldp+69,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [0U] >> 2U))));
        tracep->fullBit(oldp+70,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [0U] >> 1U))));
        tracep->fullBit(oldp+71,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                  [0U])));
        tracep->fullBit(oldp+72,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [1U] >> 5U))));
        tracep->fullCData(oldp+73,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                          [1U] >> 3U))),2);
        tracep->fullBit(oldp+74,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [1U] >> 2U))));
        tracep->fullBit(oldp+75,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [1U] >> 1U))));
        tracep->fullBit(oldp+76,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                  [1U])));
        tracep->fullBit(oldp+77,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [2U] >> 5U))));
        tracep->fullCData(oldp+78,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                          [2U] >> 3U))),2);
        tracep->fullBit(oldp+79,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [2U] >> 2U))));
        tracep->fullBit(oldp+80,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [2U] >> 1U))));
        tracep->fullBit(oldp+81,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                  [2U])));
        tracep->fullBit(oldp+82,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [3U] >> 5U))));
        tracep->fullCData(oldp+83,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                          [3U] >> 3U))),2);
        tracep->fullBit(oldp+84,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [3U] >> 2U))));
        tracep->fullBit(oldp+85,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [3U] >> 1U))));
        tracep->fullBit(oldp+86,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                  [3U])));
        tracep->fullQData(oldp+87,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[0]),34);
        tracep->fullQData(oldp+89,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[1]),34);
        tracep->fullQData(oldp+91,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[2]),34);
        tracep->fullQData(oldp+93,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[3]),34);
        tracep->fullIData(oldp+95,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0]),32);
        tracep->fullIData(oldp+96,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1]),32);
        tracep->fullIData(oldp+97,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2]),32);
        tracep->fullIData(oldp+98,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3]),32);
        tracep->fullIData(oldp+99,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4]),32);
        tracep->fullIData(oldp+100,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5]),32);
        tracep->fullIData(oldp+101,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6]),32);
        tracep->fullIData(oldp+102,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7]),32);
        tracep->fullIData(oldp+103,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8]),32);
        tracep->fullIData(oldp+104,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9]),32);
        tracep->fullIData(oldp+105,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10]),32);
        tracep->fullIData(oldp+106,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11]),32);
        tracep->fullIData(oldp+107,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12]),32);
        tracep->fullIData(oldp+108,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13]),32);
        tracep->fullIData(oldp+109,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14]),32);
        tracep->fullIData(oldp+110,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15]),32);
        tracep->fullCData(oldp+111,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0]),8);
        tracep->fullCData(oldp+112,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1]),8);
        tracep->fullCData(oldp+113,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2]),8);
        tracep->fullCData(oldp+114,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3]),8);
        tracep->fullCData(oldp+115,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4]),8);
        tracep->fullCData(oldp+116,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5]),8);
        tracep->fullCData(oldp+117,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6]),8);
        tracep->fullCData(oldp+118,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7]),8);
        tracep->fullCData(oldp+119,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8]),8);
        tracep->fullCData(oldp+120,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9]),8);
        tracep->fullCData(oldp+121,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10]),8);
        tracep->fullCData(oldp+122,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11]),8);
        tracep->fullCData(oldp+123,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12]),8);
        tracep->fullCData(oldp+124,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13]),8);
        tracep->fullCData(oldp+125,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14]),8);
        tracep->fullCData(oldp+126,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15]),8);
        tracep->fullIData(oldp+127,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0]),32);
        tracep->fullIData(oldp+128,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[1]),32);
        tracep->fullIData(oldp+129,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[2]),32);
        tracep->fullIData(oldp+130,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[3]),32);
        tracep->fullIData(oldp+131,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[4]),32);
        tracep->fullIData(oldp+132,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[5]),32);
        tracep->fullIData(oldp+133,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[6]),32);
        tracep->fullIData(oldp+134,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[7]),32);
        tracep->fullIData(oldp+135,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[8]),32);
        tracep->fullIData(oldp+136,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[9]),32);
        tracep->fullIData(oldp+137,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[10]),32);
        tracep->fullIData(oldp+138,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[11]),32);
        tracep->fullIData(oldp+139,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[12]),32);
        tracep->fullIData(oldp+140,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[13]),32);
        tracep->fullIData(oldp+141,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[14]),32);
        tracep->fullIData(oldp+142,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[15]),32);
        tracep->fullIData(oldp+143,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[16]),32);
        tracep->fullIData(oldp+144,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[17]),32);
        tracep->fullIData(oldp+145,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[18]),32);
        tracep->fullIData(oldp+146,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[19]),32);
        tracep->fullIData(oldp+147,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[20]),32);
        tracep->fullIData(oldp+148,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[21]),32);
        tracep->fullIData(oldp+149,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[22]),32);
        tracep->fullIData(oldp+150,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[23]),32);
        tracep->fullIData(oldp+151,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[24]),32);
        tracep->fullIData(oldp+152,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[25]),32);
        tracep->fullIData(oldp+153,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[26]),32);
        tracep->fullIData(oldp+154,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[27]),32);
        tracep->fullIData(oldp+155,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[28]),32);
        tracep->fullIData(oldp+156,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[29]),32);
        tracep->fullIData(oldp+157,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[30]),32);
        tracep->fullIData(oldp+158,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[31]),32);
        tracep->fullCData(oldp+159,((7U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d) 
                                           >> 3U))),3);
        tracep->fullBit(oldp+160,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d) 
                                         >> 2U))));
        tracep->fullBit(oldp+161,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d) 
                                         >> 1U))));
        tracep->fullBit(oldp+162,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d))));
        tracep->fullCData(oldp+163,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d),6);
        tracep->fullCData(oldp+164,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                      >> 0x18U)))),8);
        tracep->fullCData(oldp+165,((0xfU & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+166,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                   >> 0x11U)))),3);
        tracep->fullBit(oldp+167,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                 >> 0x10U)))));
        tracep->fullCData(oldp+168,((0xfU & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                     >> 0xcU)))),4);
        tracep->fullSData(oldp+169,((0xfffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned))),12);
        tracep->fullCData(oldp+170,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                      >> 0x38U)))),8);
        tracep->fullCData(oldp+171,((0xfU & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                     >> 0x34U)))),4);
        tracep->fullCData(oldp+172,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                   >> 0x31U)))),3);
        tracep->fullBit(oldp+173,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                 >> 0x30U)))));
        tracep->fullCData(oldp+174,((0xfU & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                     >> 0x2cU)))),4);
        tracep->fullSData(oldp+175,((0xfffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                       >> 0x20U)))),12);
        tracep->fullBit(oldp+176,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+177,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+178,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+179,((3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+180,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+181,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+182,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+183,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+184,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o))));
        tracep->fullBit(oldp+185,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o))));
        tracep->fullCData(oldp+186,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hfifo_rspvalid),3);
        tracep->fullCData(oldp+187,((0x3fU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o 
                                                      >> 0x25U)))),8);
        tracep->fullQData(oldp+188,(vlTOPp->Azadi_top_verilator__DOT__u_jtagdpi__DOT__ctx),64);
        tracep->fullBit(oldp+190,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+191,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+192,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+193,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+194,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+195,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+196,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+197,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+198,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+199,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+200,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+201,((0x7fU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                      >> 0x24U)))),8);
        tracep->fullBit(oldp+202,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+203,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+204,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+205,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+206,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+207,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+208,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+209,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+210,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+211,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+212,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+213,((0x7fU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                      >> 0x24U)))),8);
        tracep->fullBit(oldp+214,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+215,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+216,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+217,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+218,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+219,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+220,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+221,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+222,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+223,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+224,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+225,((0x7fU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                      >> 0x24U)))),8);
        tracep->fullBit(oldp+226,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+227,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+228,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+229,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+230,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+231,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+232,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+233,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+234,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+235,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+236,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+237,((0x7fU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                      >> 0x24U)))),8);
        tracep->fullBit(oldp+238,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+239,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+240,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+241,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+242,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+243,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+244,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+245,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+246,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+247,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+248,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+249,((0x7fU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                      >> 0x24U)))),8);
        tracep->fullCData(oldp+250,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[0]),4);
        tracep->fullCData(oldp+251,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[1]),4);
        tracep->fullCData(oldp+252,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[2]),4);
        tracep->fullCData(oldp+253,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[3]),4);
        tracep->fullCData(oldp+254,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[4]),4);
        tracep->fullCData(oldp+255,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[5]),4);
        tracep->fullCData(oldp+256,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[6]),4);
        tracep->fullCData(oldp+257,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[7]),4);
        tracep->fullCData(oldp+258,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[8]),4);
        tracep->fullCData(oldp+259,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[9]),4);
        tracep->fullCData(oldp+260,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[10]),4);
        tracep->fullCData(oldp+261,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[11]),4);
        tracep->fullCData(oldp+262,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[12]),4);
        tracep->fullCData(oldp+263,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[13]),4);
        tracep->fullCData(oldp+264,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[14]),4);
        tracep->fullCData(oldp+265,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0]),4);
        tracep->fullCData(oldp+266,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[1]),4);
        tracep->fullCData(oldp+267,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[2]),4);
        tracep->fullCData(oldp+268,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[3]),4);
        tracep->fullCData(oldp+269,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[4]),4);
        tracep->fullCData(oldp+270,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[5]),4);
        tracep->fullCData(oldp+271,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[6]),4);
        tracep->fullCData(oldp+272,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[7]),4);
        tracep->fullCData(oldp+273,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[8]),4);
        tracep->fullCData(oldp+274,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[9]),4);
        tracep->fullCData(oldp+275,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[10]),4);
        tracep->fullCData(oldp+276,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[11]),4);
        tracep->fullCData(oldp+277,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[12]),4);
        tracep->fullCData(oldp+278,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[13]),4);
        tracep->fullCData(oldp+279,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[14]),4);
        tracep->fullCData(oldp+280,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[15]),4);
        tracep->fullCData(oldp+281,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[16]),4);
        tracep->fullCData(oldp+282,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[17]),4);
        tracep->fullCData(oldp+283,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[18]),4);
        tracep->fullCData(oldp+284,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[19]),4);
        tracep->fullCData(oldp+285,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[20]),4);
        tracep->fullCData(oldp+286,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[21]),4);
        tracep->fullCData(oldp+287,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[22]),4);
        tracep->fullCData(oldp+288,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[23]),4);
        tracep->fullCData(oldp+289,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[24]),4);
        tracep->fullCData(oldp+290,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[25]),4);
        tracep->fullCData(oldp+291,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[26]),4);
        tracep->fullCData(oldp+292,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[27]),4);
        tracep->fullCData(oldp+293,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[28]),4);
        tracep->fullCData(oldp+294,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[29]),4);
        tracep->fullCData(oldp+295,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[30]),4);
        tracep->fullCData(oldp+296,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[31]),4);
        tracep->fullCData(oldp+297,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[32]),4);
        tracep->fullCData(oldp+298,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[33]),4);
        tracep->fullCData(oldp+299,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[34]),4);
        tracep->fullCData(oldp+300,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[35]),4);
        tracep->fullCData(oldp+301,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[36]),4);
        tracep->fullCData(oldp+302,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[37]),4);
        tracep->fullIData(oldp+303,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id),32);
        tracep->fullBit(oldp+304,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_c_insn_id));
        tracep->fullSData(oldp+305,(((0x3e0U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                >> 0xaU)) 
                                     | (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                                 >> 7U)))),10);
        tracep->fullBit(oldp+306,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+307,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+308,((7U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+309,((3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+310,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+311,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+312,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                             >> 2U))),32);
        tracep->fullBit(oldp+313,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                 >> 1U)))));
        tracep->fullBit(oldp+314,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h))));
        tracep->fullCData(oldp+315,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding),4);
        tracep->fullBit(oldp+316,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q));
        tracep->fullBit(oldp+317,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q));
        tracep->fullBit(oldp+318,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q));
        tracep->fullBit(oldp+319,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q));
        tracep->fullBit(oldp+320,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q));
        tracep->fullBit(oldp+321,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q));
        tracep->fullBit(oldp+322,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q));
        tracep->fullBit(oldp+323,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q));
        tracep->fullBit(oldp+324,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q));
        tracep->fullBit(oldp+325,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q));
        tracep->fullBit(oldp+326,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q));
        tracep->fullBit(oldp+327,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q));
        tracep->fullBit(oldp+328,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q));
        tracep->fullBit(oldp+329,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q));
        tracep->fullBit(oldp+330,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q));
        tracep->fullBit(oldp+331,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q));
        tracep->fullBit(oldp+332,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q));
        tracep->fullCData(oldp+333,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q),3);
        tracep->fullCData(oldp+334,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q),3);
        tracep->fullCData(oldp+335,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q),3);
        tracep->fullCData(oldp+336,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q),3);
        tracep->fullCData(oldp+337,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q),3);
        tracep->fullCData(oldp+338,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q),3);
        tracep->fullCData(oldp+339,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q),3);
        tracep->fullCData(oldp+340,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q),3);
        tracep->fullCData(oldp+341,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q),3);
        tracep->fullCData(oldp+342,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q),3);
        tracep->fullCData(oldp+343,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q),3);
        tracep->fullCData(oldp+344,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q),3);
        tracep->fullCData(oldp+345,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q),3);
        tracep->fullCData(oldp+346,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q),3);
        tracep->fullCData(oldp+347,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q),3);
        tracep->fullCData(oldp+348,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q),3);
        tracep->fullCData(oldp+349,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q),3);
        tracep->fullCData(oldp+350,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q),3);
        tracep->fullCData(oldp+351,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q),3);
        tracep->fullBit(oldp+352,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q));
        tracep->fullCData(oldp+353,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q),3);
        tracep->fullBit(oldp+354,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
        tracep->fullIData(oldp+355,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
        tracep->fullBit(oldp+356,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error));
        tracep->fullCData(oldp+357,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
        tracep->fullCData(oldp+358,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
        tracep->fullCData(oldp+359,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
        tracep->fullBit(oldp+360,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+361,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+362,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+363,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+364,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+365,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+366,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+367,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+368,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+369,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+370,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+371,((0x7fU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                      >> 0x24U)))),8);
        tracep->fullBit(oldp+372,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h))));
        tracep->fullBit(oldp+373,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                 >> 0x33U)))));
        tracep->fullQData(oldp+374,((((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                  >> 0x22U))))) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
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
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     (2U 
                                                                      & ((IData)(
                                                                                (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                                >> 1U)) 
                                                                         << 1U))))))),51);
        tracep->fullCData(oldp+376,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullIData(oldp+377,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q),32);
        tracep->fullCData(oldp+378,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+379,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+380,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+381,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+382,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+383,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+384,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+385,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+386,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q));
        tracep->fullBit(oldp+387,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q));
        tracep->fullBit(oldp+388,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q));
        tracep->fullBit(oldp+389,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q));
        tracep->fullBit(oldp+390,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q));
        tracep->fullBit(oldp+391,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q));
        tracep->fullBit(oldp+392,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q));
        tracep->fullBit(oldp+393,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q));
        tracep->fullBit(oldp+394,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q));
        tracep->fullBit(oldp+395,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q));
        tracep->fullBit(oldp+396,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q));
        tracep->fullBit(oldp+397,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q));
        tracep->fullBit(oldp+398,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q));
        tracep->fullBit(oldp+399,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q));
        tracep->fullBit(oldp+400,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q));
        tracep->fullBit(oldp+401,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q));
        tracep->fullBit(oldp+402,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q));
        tracep->fullBit(oldp+403,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q));
        tracep->fullBit(oldp+404,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q));
        tracep->fullBit(oldp+405,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q));
        tracep->fullBit(oldp+406,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q));
        tracep->fullBit(oldp+407,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q));
        tracep->fullBit(oldp+408,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q));
        tracep->fullBit(oldp+409,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__q));
        tracep->fullCData(oldp+410,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullBit(oldp+411,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                 [0U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+412,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                   [0U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+413,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                   [0U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+414,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                   [0U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+415,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                      [0U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+416,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                 [0U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+417,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                             [0U] >> 2U))),32);
        tracep->fullBit(oldp+418,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                 [0U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+419,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                [0U]))));
        tracep->fullBit(oldp+420,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                 [1U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+421,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                   [1U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+422,((7U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                   [1U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+423,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                   [1U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+424,((0xffU & (IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                      [1U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+425,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                 [1U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+426,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                             [1U] >> 2U))),32);
        tracep->fullBit(oldp+427,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                 [1U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+428,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                                                [1U]))));
        tracep->fullBit(oldp+429,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                 [0U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+430,((7U & (IData)((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                   [0U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+431,((7U & (IData)((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                   [0U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+432,((3U & (IData)((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                   [0U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+433,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                      [0U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+434,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                 [0U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+435,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                             [0U] >> 2U))),32);
        tracep->fullBit(oldp+436,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                 [0U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+437,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                [0U]))));
        tracep->fullBit(oldp+438,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                 [1U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+439,((7U & (IData)((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                   [1U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+440,((7U & (IData)((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                   [1U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+441,((3U & (IData)((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                   [1U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+442,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                      [1U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+443,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                 [1U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+444,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                             [1U] >> 2U))),32);
        tracep->fullBit(oldp+445,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                 [1U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+446,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                                [1U]))));
        tracep->fullBit(oldp+447,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+448,((7U & (IData)((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                   [0U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+449,((7U & (IData)((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                   [0U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+450,((3U & (IData)((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                   [0U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+451,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+452,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+453,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                             [0U] >> 2U))),32);
        tracep->fullBit(oldp+454,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+455,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                [0U]))));
        tracep->fullBit(oldp+456,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+457,((7U & (IData)((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                   [1U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+458,((7U & (IData)((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                   [1U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+459,((3U & (IData)((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                   [1U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+460,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+461,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+462,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                             [1U] >> 2U))),32);
        tracep->fullBit(oldp+463,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+464,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                [1U]))));
        tracep->fullCData(oldp+465,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hgrant),2);
        tracep->fullBit(oldp+466,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullCData(oldp+467,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+468,((2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                           << 1U))),2);
        tracep->fullCData(oldp+469,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+470,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+471,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+472,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+473,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+474,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+475,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+476,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+477,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+478,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+479,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+480,((7U & (IData)((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                   [0U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+481,((7U & (IData)((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                   [0U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+482,((3U & (IData)((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                   [0U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+483,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                      [0U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+484,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+485,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                             [0U] >> 2U))),32);
        tracep->fullBit(oldp+486,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+487,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                [0U]))));
        tracep->fullBit(oldp+488,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                [0U]))));
        tracep->fullBit(oldp+489,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 0x33U)))));
        tracep->fullQData(oldp+490,((((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                  [0U] 
                                                                  >> 0x22U))))) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
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
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     (2U 
                                                                      & ((IData)(
                                                                                (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                                [0U] 
                                                                                >> 1U)) 
                                                                         << 1U))))))),51);
        tracep->fullBit(oldp+492,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+493,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+494,((7U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+495,((3U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+496,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+497,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+498,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                             >> 2U))),32);
        tracep->fullBit(oldp+499,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                 >> 1U)))));
        tracep->fullBit(oldp+500,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+501,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 0x33U)))));
        tracep->fullCData(oldp+502,((7U & (IData)((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                   [1U] 
                                                   >> 0x30U)))),3);
        tracep->fullCData(oldp+503,((7U & (IData)((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                   [1U] 
                                                   >> 0x2dU)))),3);
        tracep->fullCData(oldp+504,((3U & (IData)((
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                   [1U] 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+505,((0xffU & (IData)(
                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                      [1U] 
                                                      >> 0x23U)))),8);
        tracep->fullBit(oldp+506,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 0x22U)))));
        tracep->fullIData(oldp+507,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                             [1U] >> 2U))),32);
        tracep->fullBit(oldp+508,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 1U)))));
        tracep->fullBit(oldp+509,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                [1U]))));
        tracep->fullBit(oldp+510,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                [1U]))));
        tracep->fullBit(oldp+511,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 0x33U)))));
        tracep->fullQData(oldp+512,((((QData)((IData)(
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                  [1U] 
                                                                  >> 0x22U))))) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
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
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     (2U 
                                                                      & ((IData)(
                                                                                (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                                [1U] 
                                                                                >> 1U)) 
                                                                         << 1U))))))),51);
        tracep->fullBit(oldp+514,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [0U][2U] >> 0x15U))));
        tracep->fullCData(oldp+515,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [0U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+516,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [0U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+517,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [0U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+518,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [0U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+519,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [0U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+520,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [0U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                [0U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+521,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [0U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+522,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                   [0U][0U])));
        tracep->fullBit(oldp+523,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [1U][2U] >> 0x15U))));
        tracep->fullCData(oldp+524,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [1U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+525,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [1U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+526,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [1U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+527,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [1U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+528,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [1U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+529,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [1U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                [1U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+530,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [1U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+531,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                   [1U][0U])));
        tracep->fullBit(oldp+532,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [2U][2U] >> 0x15U))));
        tracep->fullCData(oldp+533,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [2U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+534,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [2U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+535,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [2U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+536,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [2U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+537,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [2U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+538,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [2U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                [2U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+539,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [2U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+540,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                   [2U][0U])));
        tracep->fullBit(oldp+541,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [3U][2U] >> 0x15U))));
        tracep->fullCData(oldp+542,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [3U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+543,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [3U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+544,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [3U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+545,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [3U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+546,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [3U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+547,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [3U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                [3U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+548,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [3U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+549,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                   [3U][0U])));
        tracep->fullBit(oldp+550,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [4U][2U] >> 0x15U))));
        tracep->fullCData(oldp+551,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [4U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+552,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [4U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+553,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [4U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+554,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [4U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+555,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [4U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+556,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [4U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                [4U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+557,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [4U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+558,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                   [4U][0U])));
        tracep->fullBit(oldp+559,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [5U][2U] >> 0x15U))));
        tracep->fullCData(oldp+560,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [5U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+561,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [5U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+562,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [5U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+563,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [5U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+564,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [5U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+565,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [5U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                [5U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+566,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [5U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+567,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                   [5U][0U])));
        tracep->fullBit(oldp+568,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [6U][2U] >> 0x15U))));
        tracep->fullCData(oldp+569,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [6U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+570,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [6U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+571,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [6U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+572,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [6U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+573,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [6U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+574,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [6U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                [6U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+575,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [6U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+576,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                   [6U][0U])));
        tracep->fullBit(oldp+577,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [7U][2U] >> 0x15U))));
        tracep->fullCData(oldp+578,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [7U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+579,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [7U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+580,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [7U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+581,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [7U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+582,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [7U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+583,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [7U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                [7U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+584,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [7U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+585,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                   [7U][0U])));
        tracep->fullBit(oldp+586,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [8U][2U] >> 0x15U))));
        tracep->fullCData(oldp+587,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [8U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+588,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [8U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+589,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [8U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+590,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [8U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+591,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [8U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+592,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [8U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                [8U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+593,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [8U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+594,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                   [8U][0U])));
        tracep->fullBit(oldp+595,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                         [9U][2U] >> 0x15U))));
        tracep->fullCData(oldp+596,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [9U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+597,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [9U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+598,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                           [9U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+599,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [9U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+600,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [9U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+601,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                              [9U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                                [9U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+602,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                      [9U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                        [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+603,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i
                                   [9U][0U])));
        tracep->fullBit(oldp+604,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [0U][2U] >> 0x15U))));
        tracep->fullCData(oldp+605,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [0U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+606,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [0U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+607,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [0U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+608,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [0U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+609,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [0U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+610,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [0U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                [0U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+611,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [0U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+612,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                   [0U][0U])));
        tracep->fullBit(oldp+613,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [1U][2U] >> 0x15U))));
        tracep->fullCData(oldp+614,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [1U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+615,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [1U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+616,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [1U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+617,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [1U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+618,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [1U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+619,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [1U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                [1U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+620,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [1U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+621,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                   [1U][0U])));
        tracep->fullBit(oldp+622,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [2U][2U] >> 0x15U))));
        tracep->fullCData(oldp+623,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [2U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+624,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [2U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+625,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [2U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+626,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [2U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+627,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [2U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+628,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [2U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                [2U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+629,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [2U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+630,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                   [2U][0U])));
        tracep->fullBit(oldp+631,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [3U][2U] >> 0x15U))));
        tracep->fullCData(oldp+632,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [3U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+633,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [3U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+634,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [3U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+635,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [3U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+636,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [3U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+637,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [3U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                [3U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+638,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [3U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+639,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                   [3U][0U])));
        tracep->fullBit(oldp+640,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [4U][2U] >> 0x15U))));
        tracep->fullCData(oldp+641,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [4U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+642,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [4U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+643,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [4U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+644,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [4U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+645,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [4U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+646,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [4U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                [4U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+647,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [4U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+648,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                   [4U][0U])));
        tracep->fullBit(oldp+649,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [5U][2U] >> 0x15U))));
        tracep->fullCData(oldp+650,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [5U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+651,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [5U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+652,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [5U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+653,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [5U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+654,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [5U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+655,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [5U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                [5U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+656,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [5U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+657,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                   [5U][0U])));
        tracep->fullBit(oldp+658,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [6U][2U] >> 0x15U))));
        tracep->fullCData(oldp+659,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [6U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+660,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [6U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+661,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [6U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+662,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [6U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+663,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [6U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+664,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [6U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                [6U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+665,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [6U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+666,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                   [6U][0U])));
        tracep->fullBit(oldp+667,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [7U][2U] >> 0x15U))));
        tracep->fullCData(oldp+668,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [7U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+669,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [7U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+670,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [7U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+671,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [7U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+672,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [7U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+673,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [7U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                [7U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+674,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [7U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+675,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                   [7U][0U])));
        tracep->fullBit(oldp+676,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [8U][2U] >> 0x15U))));
        tracep->fullCData(oldp+677,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [8U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+678,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [8U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+679,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [8U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+680,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [8U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+681,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [8U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+682,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [8U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                [8U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+683,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [8U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+684,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                   [8U][0U])));
        tracep->fullBit(oldp+685,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                         [9U][2U] >> 0x15U))));
        tracep->fullCData(oldp+686,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [9U][2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+687,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [9U][2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+688,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                           [9U][2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+689,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [9U][2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+690,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [9U][2U] << 0x1bU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+691,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                              [9U][2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                                [9U][1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+692,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                      [9U][1U] << 0x1fU) 
                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                        [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+693,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i
                                   [9U][0U])));
        tracep->fullBit(oldp+694,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q));
        tracep->fullBit(oldp+695,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q));
        tracep->fullBit(oldp+696,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q));
        tracep->fullBit(oldp+697,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q));
        tracep->fullBit(oldp+698,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q));
        tracep->fullBit(oldp+699,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q));
        tracep->fullCData(oldp+700,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q),3);
        tracep->fullCData(oldp+701,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q),3);
        tracep->fullCData(oldp+702,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q),3);
        tracep->fullCData(oldp+703,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q),3);
        tracep->fullCData(oldp+704,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q),3);
        tracep->fullCData(oldp+705,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q),3);
        tracep->fullCData(oldp+706,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q),3);
        tracep->fullCData(oldp+707,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q),3);
        tracep->fullCData(oldp+708,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q),3);
        tracep->fullCData(oldp+709,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q),3);
        tracep->fullCData(oldp+710,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q),3);
        tracep->fullCData(oldp+711,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q),3);
        tracep->fullBit(oldp+712,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q));
        tracep->fullBit(oldp+713,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q));
        tracep->fullBit(oldp+714,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q));
        tracep->fullBit(oldp+715,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q));
        tracep->fullBit(oldp+716,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q));
        tracep->fullBit(oldp+717,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q));
        tracep->fullBit(oldp+718,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q));
        tracep->fullBit(oldp+719,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q));
        tracep->fullBit(oldp+720,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q));
        tracep->fullBit(oldp+721,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q));
        tracep->fullBit(oldp+722,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q));
        tracep->fullBit(oldp+723,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q));
        tracep->fullBit(oldp+724,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q));
        tracep->fullBit(oldp+725,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q));
        tracep->fullBit(oldp+726,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q));
        tracep->fullBit(oldp+727,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q));
        tracep->fullBit(oldp+728,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q));
        tracep->fullBit(oldp+729,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_busy_q));
        tracep->fullCData(oldp+730,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__dev_select_outstanding),4);
        tracep->fullCData(oldp+731,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullCData(oldp+732,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+733,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                         >> 1U))));
        tracep->fullBit(oldp+734,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                         >> 1U))));
        tracep->fullBit(oldp+735,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+736,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+737,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__dev_select_outstanding),4);
        tracep->fullBit(oldp+738,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_data_in__DOT__qe));
        tracep->fullBit(oldp+739,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe));
        tracep->fullBit(oldp+740,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe));
        tracep->fullBit(oldp+741,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__qe));
        tracep->fullWData(oldp+742,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__reqfifo__DOT__gen_normal_fifo__DOT__storage),88);
        tracep->fullIData(oldp+745,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q),32);
        tracep->fullIData(oldp+746,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q),32);
        tracep->fullCData(oldp+747,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q),5);
        tracep->fullIData(oldp+748,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q),32);
        tracep->fullBit(oldp+749,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q));
        tracep->fullBit(oldp+750,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q));
        tracep->fullBit(oldp+751,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q));
        tracep->fullCData(oldp+752,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q),2);
        tracep->fullBit(oldp+753,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
        tracep->fullIData(oldp+754,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
        tracep->fullBit(oldp+755,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
        tracep->fullBit(oldp+756,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q));
        tracep->fullCData(oldp+757,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
        tracep->fullCData(oldp+758,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
        tracep->fullBit(oldp+759,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q));
        tracep->fullBit(oldp+760,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
        tracep->fullCData(oldp+761,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
        tracep->fullBit(oldp+762,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q));
        tracep->fullIData(oldp+763,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id),32);
        tracep->fullBit(oldp+764,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id));
        tracep->fullIData(oldp+765,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_id),32);
        tracep->fullCData(oldp+766,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+767,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+768,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 7U))),5);
        tracep->fullIData(oldp+769,(((0xfffff000U & 
                                      ((- (IData)((1U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                                     (0xfffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x14U)))),32);
        tracep->fullIData(oldp+770,(((0xfffff000U & 
                                      ((- (IData)((1U 
                                                   & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                                     ((0xfe0U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x14U)) 
                                      | (0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 7U))))),32);
        tracep->fullIData(oldp+771,(((0xffffe000U & 
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
        tracep->fullIData(oldp+772,((0xfffff000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)),32);
        tracep->fullIData(oldp+773,(((0xfff00000U & 
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
        tracep->fullIData(oldp+774,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0xfU))),32);
        tracep->fullCData(oldp+775,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x1bU))),5);
        tracep->fullBit(oldp+776,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle));
        tracep->fullBit(oldp+777,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req));
        tracep->fullBit(oldp+778,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_write_wb));
        tracep->fullQData(oldp+779,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[0]),34);
        tracep->fullQData(oldp+781,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[1]),34);
        tracep->fullBit(oldp+783,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we));
        tracep->fullQData(oldp+784,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex[0]),34);
        tracep->fullQData(oldp+786,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex[1]),34);
        tracep->fullBit(oldp+788,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__icache_inval));
        tracep->fullBit(oldp+789,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a));
        tracep->fullBit(oldp+790,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b));
        tracep->fullCData(oldp+791,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator),2);
        tracep->fullCData(oldp+792,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
        tracep->fullBit(oldp+793,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_access));
        tracep->fullCData(oldp+794,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type),2);
        tracep->fullBit(oldp+795,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext));
        tracep->fullCData(oldp+796,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)
                                      ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
                                          ? 1U : 0U)
                                      : 2U)),2);
        tracep->fullBit(oldp+797,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
        tracep->fullBit(oldp+798,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn));
        tracep->fullBit(oldp+799,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec));
        tracep->fullBit(oldp+800,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec));
        tracep->fullBit(oldp+801,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec));
        tracep->fullBit(oldp+802,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec));
        tracep->fullBit(oldp+803,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec));
        tracep->fullBit(oldp+804,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec));
        tracep->fullBit(oldp+805,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec));
        tracep->fullBit(oldp+806,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel));
        tracep->fullBit(oldp+807,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
        tracep->fullBit(oldp+808,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec));
        tracep->fullBit(oldp+809,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
        tracep->fullCData(oldp+810,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
        tracep->fullCData(oldp+811,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
        tracep->fullBit(oldp+812,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode))));
        tracep->fullQData(oldp+813,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[0]),34);
        tracep->fullQData(oldp+815,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[1]),34);
        tracep->fullQData(oldp+817,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[0]),34);
        tracep->fullQData(oldp+819,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[1]),34);
        tracep->fullIData(oldp+821,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                            [1U])),32);
        tracep->fullCData(oldp+822,((3U & (IData)((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                   [1U] 
                                                   >> 0x20U)))),2);
        tracep->fullCData(oldp+823,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullCData(oldp+824,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+825,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                         >> 1U))));
        tracep->fullBit(oldp+826,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                         >> 1U))));
        tracep->fullBit(oldp+827,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+828,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+829,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_opcode),3);
        tracep->fullCData(oldp+830,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_source),8);
        tracep->fullCData(oldp+831,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_size),2);
        tracep->fullCData(oldp+832,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_opcode),3);
        tracep->fullCData(oldp+833,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_source),8);
        tracep->fullCData(oldp+834,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_size),2);
        tracep->fullBit(oldp+835,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe));
        tracep->fullBit(oldp+836,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe));
        tracep->fullBit(oldp+837,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__qe));
        tracep->fullBit(oldp+838,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__qe));
        tracep->fullBit(oldp+839,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__qe));
        tracep->fullBit(oldp+840,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__qe));
        tracep->fullBit(oldp+841,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__qe));
        tracep->fullBit(oldp+842,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__qe));
        tracep->fullBit(oldp+843,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__qe));
        tracep->fullBit(oldp+844,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__qe));
        tracep->fullBit(oldp+845,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__qe));
        tracep->fullBit(oldp+846,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__qe));
        tracep->fullBit(oldp+847,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__qe));
        tracep->fullBit(oldp+848,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe));
        tracep->fullBit(oldp+849,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe));
        tracep->fullBit(oldp+850,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe));
        tracep->fullBit(oldp+851,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe));
        tracep->fullBit(oldp+852,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe));
        tracep->fullBit(oldp+853,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe));
        tracep->fullBit(oldp+854,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe));
        tracep->fullBit(oldp+855,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__qe));
        tracep->fullBit(oldp+856,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe));
        tracep->fullBit(oldp+857,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe));
        tracep->fullBit(oldp+858,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe));
        tracep->fullBit(oldp+859,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe));
        tracep->fullBit(oldp+860,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe));
        tracep->fullBit(oldp+861,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe));
        tracep->fullBit(oldp+862,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe));
        tracep->fullBit(oldp+863,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe));
        tracep->fullBit(oldp+864,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q));
        tracep->fullCData(oldp+865,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                              >> 0x18U))),8);
        tracep->fullIData(oldp+866,((0xffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q)),24);
        tracep->fullIData(oldp+867,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[0U]),32);
        tracep->fullIData(oldp+868,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[1U]),32);
        tracep->fullIData(oldp+869,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[2U]),32);
        tracep->fullIData(oldp+870,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[3U]),32);
        tracep->fullIData(oldp+871,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[4U]),32);
        tracep->fullIData(oldp+872,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[5U]),32);
        tracep->fullIData(oldp+873,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[6U]),32);
        tracep->fullIData(oldp+874,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[7U]),32);
        tracep->fullIData(oldp+875,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q)),32);
        tracep->fullIData(oldp+876,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q 
                                             >> 0x20U))),32);
        tracep->fullIData(oldp+877,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q)),32);
        tracep->fullBit(oldp+878,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0x14U))));
        tracep->fullBit(oldp+879,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0x10U))));
        tracep->fullCData(oldp+880,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                           >> 0x11U))),3);
        tracep->fullBit(oldp+881,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0xfU))));
        tracep->fullIData(oldp+882,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q)),32);
        tracep->fullBit(oldp+883,((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))));
        tracep->fullCData(oldp+884,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q),3);
        tracep->fullSData(oldp+885,((0xffffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q 
                                                >> 0x10U))),16);
        tracep->fullCData(oldp+886,((0xfU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q 
                                             >> 0xcU))),4);
        tracep->fullSData(oldp+887,((0xfffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q)),12);
        tracep->fullCData(oldp+888,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                           >> 0x1dU))),3);
        tracep->fullCData(oldp+889,((0x3fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                              >> 0x17U))),6);
        tracep->fullBit(oldp+890,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0x16U))));
        tracep->fullBit(oldp+891,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0x15U))));
        tracep->fullBit(oldp+892,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0x14U))));
        tracep->fullCData(oldp+893,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                           >> 0x11U))),3);
        tracep->fullBit(oldp+894,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0x10U))));
        tracep->fullBit(oldp+895,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0xfU))));
        tracep->fullCData(oldp+896,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+897,((0x7fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                              >> 5U))),7);
        tracep->fullBit(oldp+898,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 4U))));
        tracep->fullBit(oldp+899,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 3U))));
        tracep->fullBit(oldp+900,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 2U))));
        tracep->fullBit(oldp+901,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 1U))));
        tracep->fullBit(oldp+902,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q)));
        tracep->fullQData(oldp+903,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q),64);
        tracep->fullQData(oldp+905,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q),64);
        tracep->fullCData(oldp+907,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q),3);
        tracep->fullQData(oldp+908,((((QData)((IData)(
                                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[0U])))),64);
        tracep->fullQData(oldp+910,((((QData)((IData)(
                                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[2U])))),64);
        tracep->fullQData(oldp+912,((((QData)((IData)(
                                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[4U])))),64);
        tracep->fullQData(oldp+914,((((QData)((IData)(
                                                      vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[6U])))),64);
        tracep->fullBit(oldp+916,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                         >> 0x17U))));
        tracep->fullCData(oldp+917,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                           >> 0x14U))),3);
        tracep->fullBit(oldp+918,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                         >> 0x13U))));
        tracep->fullBit(oldp+919,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                         >> 0x12U))));
        tracep->fullBit(oldp+920,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                         >> 0x11U))));
        tracep->fullBit(oldp+921,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                         >> 0x10U))));
        tracep->fullSData(oldp+922,((0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q)),16);
        tracep->fullBit(oldp+923,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__rspfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+924,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__rspfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+925,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_req_pending));
        tracep->fullBit(oldp+926,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_req_pending));
        tracep->fullBit(oldp+927,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__req));
        tracep->fullBit(oldp+928,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we));
        tracep->fullCData(oldp+929,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be),4);
        tracep->fullCData(oldp+930,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be_idx),2);
        tracep->fullCData(oldp+931,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we)
                                      ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be)
                                      : 0xfU)),4);
        tracep->fullBit(oldp+932,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+933,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+934,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+935,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+936,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+937,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                      << 0x1bU) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U] 
                                                   >> 5U))),32);
        tracep->fullCData(oldp+938,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+939,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[1U] 
                                      << 0x1fU) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U] 
                                                   >> 1U))),32);
        tracep->fullBit(oldp+940,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[0U])));
        tracep->fullBit(oldp+941,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+942,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+943,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+944,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+945,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+946,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                      << 0x1bU) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[1U] 
                                                   >> 5U))),32);
        tracep->fullCData(oldp+947,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+948,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[1U] 
                                      << 0x1fU) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[0U] 
                                                   >> 1U))),32);
        tracep->fullBit(oldp+949,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[0U])));
        tracep->fullBit(oldp+950,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[2U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+951,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[0U])));
        tracep->fullBit(oldp+952,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+953,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                           >> 0x12U))),3);
        tracep->fullCData(oldp+954,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                           >> 0xfU))),3);
        tracep->fullCData(oldp+955,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                           >> 0xdU))),2);
        tracep->fullCData(oldp+956,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                              >> 5U))),8);
        tracep->fullIData(oldp+957,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                      << 0x1bU) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U] 
                                                   >> 5U))),32);
        tracep->fullCData(oldp+958,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U] 
                                                >> 1U)))),4);
        tracep->fullIData(oldp+959,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[1U] 
                                      << 0x1fU) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U] 
                                                   >> 1U))),32);
        tracep->fullBit(oldp+960,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[0U])));
        tracep->fullIData(oldp+961,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0U]),32);
        tracep->fullIData(oldp+962,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1U]),32);
        tracep->fullIData(oldp+963,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2U]),32);
        tracep->fullIData(oldp+964,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3U]),32);
        tracep->fullIData(oldp+965,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4U]),32);
        tracep->fullIData(oldp+966,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5U]),32);
        tracep->fullIData(oldp+967,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6U]),32);
        tracep->fullIData(oldp+968,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7U]),32);
        tracep->fullIData(oldp+969,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8U]),32);
        tracep->fullIData(oldp+970,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9U]),32);
        tracep->fullIData(oldp+971,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xaU]),32);
        tracep->fullIData(oldp+972,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xbU]),32);
        tracep->fullIData(oldp+973,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xcU]),32);
        tracep->fullIData(oldp+974,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xdU]),32);
        tracep->fullIData(oldp+975,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xeU]),32);
        tracep->fullIData(oldp+976,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xfU]),32);
        tracep->fullIData(oldp+977,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x10U]),32);
        tracep->fullIData(oldp+978,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x11U]),32);
        tracep->fullIData(oldp+979,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x12U]),32);
        tracep->fullIData(oldp+980,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x13U]),32);
        tracep->fullIData(oldp+981,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x14U]),32);
        tracep->fullIData(oldp+982,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x15U]),32);
        tracep->fullIData(oldp+983,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x16U]),32);
        tracep->fullIData(oldp+984,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x17U]),32);
        tracep->fullIData(oldp+985,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x18U]),32);
        tracep->fullIData(oldp+986,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x19U]),32);
        tracep->fullIData(oldp+987,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1aU]),32);
        tracep->fullIData(oldp+988,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1bU]),32);
        tracep->fullIData(oldp+989,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1cU]),32);
        tracep->fullIData(oldp+990,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1dU]),32);
        tracep->fullIData(oldp+991,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1eU]),32);
        tracep->fullIData(oldp+992,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1fU]),32);
        tracep->fullIData(oldp+993,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0U]),32);
        tracep->fullIData(oldp+994,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[1U]),32);
        tracep->fullIData(oldp+995,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[2U]),32);
        tracep->fullIData(oldp+996,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[3U]),32);
        tracep->fullIData(oldp+997,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[4U]),32);
        tracep->fullIData(oldp+998,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[5U]),32);
        tracep->fullIData(oldp+999,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[6U]),32);
        tracep->fullIData(oldp+1000,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[7U]),32);
        tracep->fullIData(oldp+1001,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[8U]),32);
        tracep->fullIData(oldp+1002,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[9U]),32);
        tracep->fullIData(oldp+1003,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xaU]),32);
        tracep->fullIData(oldp+1004,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xbU]),32);
        tracep->fullIData(oldp+1005,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xcU]),32);
        tracep->fullIData(oldp+1006,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xdU]),32);
        tracep->fullIData(oldp+1007,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xeU]),32);
        tracep->fullIData(oldp+1008,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0xfU]),32);
        tracep->fullIData(oldp+1009,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x10U]),32);
        tracep->fullIData(oldp+1010,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x11U]),32);
        tracep->fullIData(oldp+1011,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x12U]),32);
        tracep->fullIData(oldp+1012,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x13U]),32);
        tracep->fullIData(oldp+1013,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x14U]),32);
        tracep->fullIData(oldp+1014,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x15U]),32);
        tracep->fullIData(oldp+1015,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x16U]),32);
        tracep->fullIData(oldp+1016,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x17U]),32);
        tracep->fullIData(oldp+1017,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x18U]),32);
        tracep->fullIData(oldp+1018,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x19U]),32);
        tracep->fullIData(oldp+1019,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1aU]),32);
        tracep->fullIData(oldp+1020,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1bU]),32);
        tracep->fullIData(oldp+1021,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1cU]),32);
        tracep->fullIData(oldp+1022,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1dU]),32);
        tracep->fullIData(oldp+1023,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[0x1eU]),32);
        tracep->fullCData(oldp+1024,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+1025,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+1026,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+1027,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+1028,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q),3);
        tracep->fullBit(oldp+1029,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_0__DOT__qe));
        tracep->fullBit(oldp+1030,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_1__DOT__qe));
        tracep->fullBit(oldp+1031,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_2__DOT__qe));
        tracep->fullBit(oldp+1032,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_3__DOT__qe));
        tracep->fullBit(oldp+1033,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_6__DOT__qe));
        tracep->fullBit(oldp+1034,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_7__DOT__qe));
        tracep->fullBit(oldp+1035,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_8__DOT__qe));
        tracep->fullBit(oldp+1036,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_9__DOT__qe));
        tracep->fullBit(oldp+1037,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_10__DOT__qe));
        tracep->fullBit(oldp+1038,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_11__DOT__qe));
        tracep->fullBit(oldp+1039,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_12__DOT__qe));
        tracep->fullBit(oldp+1040,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_13__DOT__qe));
        tracep->fullBit(oldp+1041,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_22__DOT__qe));
        tracep->fullBit(oldp+1042,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_23__DOT__qe));
        tracep->fullBit(oldp+1043,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_24__DOT__qe));
        tracep->fullBit(oldp+1044,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_25__DOT__qe));
        tracep->fullBit(oldp+1045,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_26__DOT__qe));
        tracep->fullBit(oldp+1046,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_27__DOT__qe));
        tracep->fullBit(oldp+1047,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_28__DOT__qe));
        tracep->fullBit(oldp+1048,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_29__DOT__qe));
        tracep->fullBit(oldp+1049,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_30__DOT__qe));
        tracep->fullBit(oldp+1050,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_31__DOT__qe));
        tracep->fullBit(oldp+1051,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio0__DOT__qe));
        tracep->fullBit(oldp+1052,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio1__DOT__qe));
        tracep->fullBit(oldp+1053,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio2__DOT__qe));
        tracep->fullBit(oldp+1054,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio3__DOT__qe));
        tracep->fullBit(oldp+1055,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio4__DOT__qe));
        tracep->fullBit(oldp+1056,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio5__DOT__qe));
        tracep->fullBit(oldp+1057,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio15__DOT__qe));
        tracep->fullBit(oldp+1058,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio16__DOT__qe));
        tracep->fullBit(oldp+1059,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio18__DOT__qe));
        tracep->fullBit(oldp+1060,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio19__DOT__qe));
        tracep->fullBit(oldp+1061,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio20__DOT__qe));
        tracep->fullBit(oldp+1062,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio21__DOT__qe));
        tracep->fullBit(oldp+1063,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio26__DOT__qe));
        tracep->fullBit(oldp+1064,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio27__DOT__qe));
        tracep->fullBit(oldp+1065,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio28__DOT__qe));
        tracep->fullBit(oldp+1066,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio29__DOT__qe));
        tracep->fullBit(oldp+1067,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio30__DOT__qe));
        tracep->fullBit(oldp+1068,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio31__DOT__qe));
        tracep->fullBit(oldp+1069,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_0__DOT__qe));
        tracep->fullBit(oldp+1070,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_1__DOT__qe));
        tracep->fullBit(oldp+1071,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__qe));
        tracep->fullBit(oldp+1072,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_27__DOT__qe));
        tracep->fullCData(oldp+1073,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullBit(oldp+1074,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U])));
        tracep->fullBit(oldp+1075,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1076,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1077,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1078,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1079,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+1080,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+1081,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+1082,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+1083,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+1084,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+1085,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+1086,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+1087,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+1088,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+1089,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+1090,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+1091,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+1092,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+1093,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+1094,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+1095,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U])));
        tracep->fullBit(oldp+1096,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 1U))));
        tracep->fullBit(oldp+1097,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 2U))));
        tracep->fullBit(oldp+1098,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 3U))));
        tracep->fullBit(oldp+1099,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 4U))));
        tracep->fullBit(oldp+1100,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 5U))));
        tracep->fullBit(oldp+1101,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 6U))));
        tracep->fullBit(oldp+1102,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 7U))));
        tracep->fullBit(oldp+1103,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 8U))));
        tracep->fullBit(oldp+1104,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 9U))));
        tracep->fullBit(oldp+1105,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1106,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                          >> 0xbU))));
        tracep->fullCData(oldp+1107,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                             << 0x17U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                               >> 9U)))),3);
        tracep->fullCData(oldp+1108,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                             << 0x1aU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                               >> 6U)))),3);
        tracep->fullCData(oldp+1109,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[5U] 
                                             << 0x1dU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                               >> 3U)))),3);
        tracep->fullCData(oldp+1110,((7U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U])),3);
        tracep->fullCData(oldp+1111,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 3U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x1dU)))),3);
        tracep->fullCData(oldp+1112,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 6U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x1aU)))),3);
        tracep->fullCData(oldp+1113,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 9U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x17U)))),3);
        tracep->fullCData(oldp+1114,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0xcU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x14U)))),3);
        tracep->fullCData(oldp+1115,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0xfU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0x11U)))),3);
        tracep->fullCData(oldp+1116,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x12U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0xeU)))),3);
        tracep->fullCData(oldp+1117,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x15U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 0xbU)))),3);
        tracep->fullCData(oldp+1118,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x18U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 8U)))),3);
        tracep->fullCData(oldp+1119,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x1bU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 5U)))),3);
        tracep->fullCData(oldp+1120,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[4U] 
                                             << 0x1eU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                               >> 2U)))),3);
        tracep->fullCData(oldp+1121,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 1U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x1fU)))),3);
        tracep->fullCData(oldp+1122,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 4U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x1cU)))),3);
        tracep->fullCData(oldp+1123,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 7U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x19U)))),3);
        tracep->fullCData(oldp+1124,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0xaU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x16U)))),3);
        tracep->fullCData(oldp+1125,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0xdU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x13U)))),3);
        tracep->fullCData(oldp+1126,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x10U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0x10U)))),3);
        tracep->fullCData(oldp+1127,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x13U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0xdU)))),3);
        tracep->fullCData(oldp+1128,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x16U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 0xaU)))),3);
        tracep->fullCData(oldp+1129,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x19U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 7U)))),3);
        tracep->fullCData(oldp+1130,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x1cU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 4U)))),3);
        tracep->fullCData(oldp+1131,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[3U] 
                                             << 0x1fU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                               >> 1U)))),3);
        tracep->fullCData(oldp+1132,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 2U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x1eU)))),3);
        tracep->fullCData(oldp+1133,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 5U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x1bU)))),3);
        tracep->fullCData(oldp+1134,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 8U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x18U)))),3);
        tracep->fullCData(oldp+1135,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0xbU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x15U)))),3);
        tracep->fullCData(oldp+1136,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0xeU) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0x12U)))),3);
        tracep->fullCData(oldp+1137,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0x11U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0xfU)))),3);
        tracep->fullCData(oldp+1138,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[2U] 
                                             << 0x14U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                               >> 0xcU)))),3);
        tracep->fullBit(oldp+1139,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1140,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1141,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1142,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1143,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+1144,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+1145,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+1146,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+1147,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+1148,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+1149,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+1150,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+1151,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+1152,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+1153,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+1154,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+1155,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+1156,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+1157,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+1158,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+1159,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U])));
        tracep->fullBit(oldp+1160,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 1U))));
        tracep->fullBit(oldp+1161,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 2U))));
        tracep->fullBit(oldp+1162,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 3U))));
        tracep->fullBit(oldp+1163,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 4U))));
        tracep->fullBit(oldp+1164,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 5U))));
        tracep->fullBit(oldp+1165,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 6U))));
        tracep->fullBit(oldp+1166,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 7U))));
        tracep->fullBit(oldp+1167,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 8U))));
        tracep->fullBit(oldp+1168,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 9U))));
        tracep->fullBit(oldp+1169,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1170,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                          >> 0xbU))));
        tracep->fullCData(oldp+1171,((7U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                             << 0x17U) 
                                            | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                               >> 9U)))),3);
        tracep->fullCData(oldp+1172,((0x3fU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[1U] 
                                                << 0x1dU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                                  >> 3U)))),6);
        tracep->fullBit(oldp+1173,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 2U))));
        tracep->fullBit(oldp+1174,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 1U))));
        tracep->fullBit(oldp+1175,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U])));
        tracep->fullBit(oldp+1176,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 1U))));
        tracep->fullBit(oldp+1177,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[0U] 
                                          >> 2U))));
        tracep->fullBit(oldp+1178,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err_plus2));
        tracep->fullIData(oldp+1179,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__stored_addr_q),32);
        tracep->fullIData(oldp+1180,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q),32);
        tracep->fullBit(oldp+1181,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                          >> 1U))));
        tracep->fullBit(oldp+1182,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                          >> 2U))));
        tracep->fullCData(oldp+1183,((7U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                            >> 3U))),3);
        tracep->fullBit(oldp+1184,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q))));
        tracep->fullBit(oldp+1185,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          >> 5U))));
        tracep->fullIData(oldp+1186,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
        tracep->fullIData(oldp+1187,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
        tracep->fullBit(oldp+1188,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
        tracep->fullCData(oldp+1189,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
        tracep->fullCData(oldp+1190,((3U & ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                             ? ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                >> 2U)
                                             : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
        tracep->fullCData(oldp+1191,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rs1_addr_q),5);
        tracep->fullCData(oldp+1192,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rs2_addr_q),5);
        tracep->fullIData(oldp+1193,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rs2_data_q),32);
        tracep->fullCData(oldp+1194,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rd_addr_q),5);
        tracep->fullIData(oldp+1195,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rd_wdata_q),32);
        tracep->fullIData(oldp+1196,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_mem_rdata_q),32);
        tracep->fullIData(oldp+1197,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs3_rdata[0]),32);
        tracep->fullIData(oldp+1198,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs3_rdata[1]),32);
        tracep->fullIData(oldp+1199,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_pc_rdata[0]),32);
        tracep->fullIData(oldp+1200,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_pc_rdata[1]),32);
        tracep->fullBit(oldp+1201,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q));
        tracep->fullCData(oldp+1202,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                            >> 1U))),2);
        tracep->fullCData(oldp+1203,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
        tracep->fullIData(oldp+1204,(((IData)(1U) << (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
        tracep->fullIData(oldp+1205,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
        tracep->fullCData(oldp+1206,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
        tracep->fullCData(oldp+1207,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q),2);
        tracep->fullBit(oldp+1208,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          >> 5U))));
        tracep->fullBit(oldp+1209,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          >> 4U))));
        tracep->fullCData(oldp+1210,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                            >> 2U))),2);
        tracep->fullBit(oldp+1211,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          >> 1U))));
        tracep->fullBit(oldp+1212,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
        tracep->fullBit(oldp+1213,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                          >> 0x11U))));
        tracep->fullBit(oldp+1214,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                          >> 0x10U))));
        tracep->fullBit(oldp+1215,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                          >> 0xfU))));
        tracep->fullSData(oldp+1216,((0x7fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q)),15);
        tracep->fullIData(oldp+1217,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
        tracep->fullCData(oldp+1218,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),6);
        tracep->fullIData(oldp+1219,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
        tracep->fullIData(oldp+1220,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
        tracep->fullIData(oldp+1221,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
        tracep->fullBit(oldp+1222,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q) 
                                          >> 2U))));
        tracep->fullCData(oldp+1223,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q))),2);
        tracep->fullIData(oldp+1224,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
        tracep->fullCData(oldp+1225,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),6);
        tracep->fullCData(oldp+1226,((7U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                            >> 3U))),3);
        tracep->fullBit(oldp+1227,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                          >> 2U))));
        tracep->fullBit(oldp+1228,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                          >> 1U))));
        tracep->fullBit(oldp+1229,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q))));
        tracep->fullCData(oldp+1230,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
        tracep->fullIData(oldp+1231,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
        tracep->fullCData(oldp+1232,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
        tracep->fullQData(oldp+1233,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
        tracep->fullQData(oldp+1235,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
        tracep->fullCData(oldp+1237,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q),6);
        tracep->fullCData(oldp+1238,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+1239,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+1240,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+1241,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+1242,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+1243,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+1244,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+1245,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+1246,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+1247,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q),5);
        tracep->fullQData(oldp+1248,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__rspfifo__DOT__gen_normal_fifo__DOT__storage),51);
        tracep->fullCData(oldp+1250,((0x1fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage))),5);
        tracep->fullCData(oldp+1251,((0x1fU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                               >> 5U))),5);
        tracep->fullQData(oldp+1252,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
        tracep->fullQData(oldp+1254,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                          << 0x1fU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                            >> 1U)))),33);
        tracep->fullBit(oldp+1256,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_q));
        tracep->fullSData(oldp+1257,((0xfffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_q))),12);
        tracep->fullBit(oldp+1258,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_q));
        tracep->fullSData(oldp+1259,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_q),14);
        tracep->fullCData(oldp+1260,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q0),8);
        tracep->fullCData(oldp+1261,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q1),8);
        tracep->fullCData(oldp+1262,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q2),8);
        tracep->fullCData(oldp+1263,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q3),8);
        tracep->fullCData(oldp+1264,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullCData(oldp+1265,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+1266,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+1267,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+1268,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+1269,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+1270,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+1271,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+1272,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+1273,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullBit(oldp+1274,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+1275,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+1276,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_q));
        tracep->fullBit(oldp+1277,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
        tracep->fullIData(oldp+1278,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
        tracep->fullBit(oldp+1279,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
        tracep->fullBit(oldp+1280,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 2U))));
        tracep->fullBit(oldp+1281,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1282,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1283,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_rvfi_wb_stage__DOT__rvfi_instr_new_wb_q));
        tracep->fullBit(oldp+1284,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_intr_q));
        tracep->fullBit(oldp+1285,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_set_trap_pc_q));
        tracep->fullIData(oldp+1286,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rs1_data_q),32);
        tracep->fullIData(oldp+1287,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_mem_wdata_q),32);
        tracep->fullIData(oldp+1288,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_mem_addr_q),32);
        tracep->fullCData(oldp+1289,((0xffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
        tracep->fullBit(oldp+1290,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_q));
        tracep->fullCData(oldp+1291,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q),2);
        tracep->fullCData(oldp+1292,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_q),2);
        tracep->fullCData(oldp+1293,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_q),2);
        tracep->fullBit(oldp+1294,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
        tracep->fullBit(oldp+1295,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
        tracep->fullBit(oldp+1296,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
        tracep->fullIData(oldp+1297,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
        tracep->fullBit(oldp+1298,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q));
        tracep->fullIData(oldp+1299,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q),24);
        tracep->fullBit(oldp+1300,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q));
        tracep->fullBit(oldp+1301,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q));
        tracep->fullCData(oldp+1302,((0xfU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                              >> 0x1cU))),4);
        tracep->fullSData(oldp+1303,((0xfffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                                >> 0x10U))),12);
        tracep->fullBit(oldp+1304,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1305,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1306,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1307,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1308,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 0xbU))));
        tracep->fullBit(oldp+1309,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1310,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 9U))));
        tracep->fullCData(oldp+1311,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                            >> 6U))),3);
        tracep->fullBit(oldp+1312,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 5U))));
        tracep->fullBit(oldp+1313,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 4U))));
        tracep->fullBit(oldp+1314,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 3U))));
        tracep->fullBit(oldp+1315,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                          >> 2U))));
        tracep->fullCData(oldp+1316,((3U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q)),2);
        tracep->fullIData(oldp+1317,((0xfffffff8U | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),32);
        tracep->fullCData(oldp+1318,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q),3);
        tracep->fullIData(oldp+1319,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
        tracep->fullBit(oldp+1320,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__reqfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+1321,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__reqfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+1322,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+1323,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->fullBit(oldp+1324,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+1325,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_DV));
        tracep->fullCData(oldp+1326,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte),8);
        tracep->fullIData(oldp+1327,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_cntrl_data),32);
        tracep->fullCData(oldp+1328,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs),2);
        tracep->fullCData(oldp+1329,((0xfU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                              >> 1U))),4);
        tracep->fullBit(oldp+1330,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
        tracep->fullCData(oldp+1331,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        tracep->fullBit(oldp+1332,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+1333,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+1334,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+1335,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+1336,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+1337,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+1338,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1339,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1340,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu))));
        tracep->fullBit(oldp+1341,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu))));
        tracep->fullBit(oldp+1342,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                  >> 0x33U)))));
        tracep->fullIData(oldp+1343,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                              >> 2U))),32);
        tracep->fullBit(oldp+1344,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                  >> 1U)))));
        tracep->fullSData(oldp+1345,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count),16);
        tracep->fullCData(oldp+1346,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index),3);
        tracep->fullCData(oldp+1347,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main),3);
        tracep->fullCData(oldp+1348,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_ns),2);
        tracep->fullBit(oldp+1349,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_d));
        tracep->fullBit(oldp+1350,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_d));
        tracep->fullCData(oldp+1351,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator),6);
        tracep->fullBit(oldp+1352,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__mult_sel_ex));
        tracep->fullBit(oldp+1353,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__div_sel_ex));
        tracep->fullCData(oldp+1354,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
        tracep->fullCData(oldp+1355,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
        tracep->fullBit(oldp+1356,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
        tracep->fullBit(oldp+1357,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
        tracep->fullCData(oldp+1358,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
        tracep->fullCData(oldp+1359,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
        tracep->fullCData(oldp+1360,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
        tracep->fullBit(oldp+1361,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel));
        tracep->fullBit(oldp+1362,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
        tracep->fullBit(oldp+1363,((8U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))));
        tracep->fullBit(oldp+1364,(((3U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                    | (6U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
        tracep->fullBit(oldp+1365,(((4U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                    | (7U == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
        tracep->fullIData(oldp+1366,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b),32);
        tracep->fullIData(oldp+1367,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[0]),32);
        tracep->fullIData(oldp+1368,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[1]),32);
        tracep->fullIData(oldp+1369,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a),32);
        tracep->fullIData(oldp+1370,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b),32);
        tracep->fullQData(oldp+1371,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
        tracep->fullQData(oldp+1373,((0x1ffffffffULL 
                                      & (~ ((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                            << 1U)))),33);
        tracep->fullCData(oldp+1375,((0x3fU & ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)))),6);
        tracep->fullCData(oldp+1376,(((0x10U & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                                >> 0x18U))))) 
                                                << 4U)) 
                                      | (0xfU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                 >> 0x18U)))),5);
        tracep->fullCData(oldp+1377,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                               >> 0x10U))),5);
        tracep->fullIData(oldp+1378,((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                      | vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
        tracep->fullIData(oldp+1379,((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                      & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
        tracep->fullIData(oldp+1380,((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                      ^ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
        tracep->fullBit(oldp+1381,((1U & (((IData)(0x20U) 
                                           - (0x1fU 
                                              & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                          >> 5U))));
        tracep->fullQData(oldp+1382,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
        tracep->fullIData(oldp+1384,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[0]),32);
        tracep->fullIData(oldp+1385,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[1]),32);
        tracep->fullIData(oldp+1386,((0xfffffffcU & 
                                      ((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                >> 3U)) 
                                       << 2U))),32);
        tracep->fullIData(oldp+1387,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                              >> 1U))),32);
        tracep->fullQData(oldp+1388,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
        tracep->fullBit(oldp+1390,((0U == (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                   >> 1U)))));
        tracep->fullCData(oldp+1391,(((2U & ((IData)(
                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 0x21U)) 
                                             << 1U)) 
                                      | (1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))),2);
        tracep->fullCData(oldp+1392,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                    >> 1U)))),2);
        tracep->fullBit(oldp+1393,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1394,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1395,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1396,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1397,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1398,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1399,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1400,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1401,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[0U])));
        tracep->fullBit(oldp+1402,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+1403,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[0U])));
        tracep->fullCData(oldp+1404,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_3),4);
        tracep->fullBit(oldp+1405,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1406,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1407,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1408,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1409,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1410,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1411,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1412,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1413,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [0U][0U])));
        tracep->fullBit(oldp+1414,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1415,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1416,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1417,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1418,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1419,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1420,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1421,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1422,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [1U][0U])));
        tracep->fullBit(oldp+1423,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1424,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1425,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1426,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1427,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1428,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1429,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1430,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1431,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [2U][0U])));
        tracep->fullBit(oldp+1432,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1433,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1434,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1435,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1436,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1437,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1438,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1439,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1440,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [3U][0U])));
        tracep->fullBit(oldp+1441,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1442,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1443,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1444,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1445,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1446,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1447,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1448,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1449,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [4U][0U])));
        tracep->fullBit(oldp+1450,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1451,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1452,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1453,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1454,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1455,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1456,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1457,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1458,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [5U][0U])));
        tracep->fullBit(oldp+1459,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1460,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1461,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1462,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1463,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1464,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1465,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1466,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1467,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [6U][0U])));
        tracep->fullBit(oldp+1468,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1469,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1470,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1471,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1472,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1473,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1474,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1475,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1476,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [7U][0U])));
        tracep->fullBit(oldp+1477,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1478,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1479,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1480,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1481,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1482,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1483,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1484,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1485,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [8U][0U])));
        tracep->fullBit(oldp+1486,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1487,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1488,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1489,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1490,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1491,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1492,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1493,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1494,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                                    [9U][0U])));
        tracep->fullCData(oldp+1495,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
        tracep->fullBit(oldp+1496,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__hold_all_requests));
        tracep->fullBit(oldp+1497,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1498,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1499,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1500,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1501,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1502,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1503,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1504,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1505,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [0U][0U])));
        tracep->fullBit(oldp+1506,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1507,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1508,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1509,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1510,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1511,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1512,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1513,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1514,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [1U][0U])));
        tracep->fullBit(oldp+1515,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1516,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1517,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1518,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1519,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1520,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1521,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1522,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1523,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [2U][0U])));
        tracep->fullBit(oldp+1524,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1525,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1526,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1527,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1528,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1529,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1530,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1531,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1532,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [3U][0U])));
        tracep->fullBit(oldp+1533,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1534,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1535,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1536,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1537,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1538,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1539,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1540,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1541,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [4U][0U])));
        tracep->fullBit(oldp+1542,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1543,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1544,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1545,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1546,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1547,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1548,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1549,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1550,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [5U][0U])));
        tracep->fullBit(oldp+1551,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1552,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1553,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1554,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1555,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1556,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1557,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1558,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1559,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [6U][0U])));
        tracep->fullBit(oldp+1560,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1561,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1562,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1563,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1564,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1565,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1566,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1567,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1568,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [7U][0U])));
        tracep->fullBit(oldp+1569,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1570,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1571,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1572,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1573,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1574,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1575,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1576,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1577,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [8U][0U])));
        tracep->fullBit(oldp+1578,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1579,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1580,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1581,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1582,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1583,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1584,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1585,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1586,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [9U][0U])));
        tracep->fullBit(oldp+1587,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [0xaU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1588,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1589,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1590,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1591,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1592,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [0xaU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0xaU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+1593,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [0xaU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [0xaU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1594,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [0xaU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0xaU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+1595,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [0xaU][0U])));
        tracep->fullWData(oldp+1596,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
        tracep->fullBit(oldp+1599,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [0xaU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1600,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1601,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1602,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1603,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1604,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [0xaU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0xaU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+1605,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [0xaU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [0xaU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1606,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [0xaU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0xaU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+1607,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [0xaU][0U])));
        tracep->fullBit(oldp+1608,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1609,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1610,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1611,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1612,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1613,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1614,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1615,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1616,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [0U][0U])));
        tracep->fullBit(oldp+1617,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1618,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1619,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1620,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1621,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1622,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1623,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1624,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1625,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+1626,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [0U][2U] 
                                          >> 0x15U))));
        __Vtemp1621[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [0U][0U]);
        __Vtemp1621[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [0U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0U][1U]));
        __Vtemp1621[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [0U][2U]));
        tracep->fullWData(oldp+1627,(__Vtemp1621),85);
        tracep->fullBit(oldp+1630,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [0U][0U])));
        tracep->fullBit(oldp+1631,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1632,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1633,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1634,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1635,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1636,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1637,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1638,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1639,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [1U][0U])));
        tracep->fullBit(oldp+1640,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1641,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1642,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1643,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1644,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1645,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1646,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1647,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1648,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+1649,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [1U][2U] 
                                          >> 0x15U))));
        __Vtemp1637[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [1U][0U]);
        __Vtemp1637[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [1U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [1U][1U]));
        __Vtemp1637[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [1U][2U]));
        tracep->fullWData(oldp+1650,(__Vtemp1637),85);
        tracep->fullBit(oldp+1653,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [1U][0U])));
        tracep->fullBit(oldp+1654,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1655,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1656,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1657,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1658,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1659,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1660,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1661,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1662,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [2U][0U])));
        tracep->fullBit(oldp+1663,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1664,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1665,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1666,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1667,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1668,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1669,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1670,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1671,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+1672,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [2U][2U] 
                                          >> 0x15U))));
        __Vtemp1653[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [2U][0U]);
        __Vtemp1653[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [2U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [2U][1U]));
        __Vtemp1653[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [2U][2U]));
        tracep->fullWData(oldp+1673,(__Vtemp1653),85);
        tracep->fullBit(oldp+1676,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [2U][0U])));
        tracep->fullBit(oldp+1677,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1678,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1679,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1680,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1681,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1682,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1683,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1684,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1685,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [3U][0U])));
        tracep->fullBit(oldp+1686,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1687,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1688,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1689,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1690,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1691,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1692,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1693,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1694,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+1695,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [3U][2U] 
                                          >> 0x15U))));
        __Vtemp1669[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [3U][0U]);
        __Vtemp1669[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [3U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [3U][1U]));
        __Vtemp1669[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [3U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [3U][2U]));
        tracep->fullWData(oldp+1696,(__Vtemp1669),85);
        tracep->fullBit(oldp+1699,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [3U][0U])));
        tracep->fullBit(oldp+1700,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1701,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1702,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1703,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1704,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1705,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1706,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1707,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1708,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [4U][0U])));
        tracep->fullBit(oldp+1709,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1710,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1711,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1712,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1713,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1714,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1715,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1716,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1717,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+1718,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [4U][2U] 
                                          >> 0x15U))));
        __Vtemp1685[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [4U][0U]);
        __Vtemp1685[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [4U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [4U][1U]));
        __Vtemp1685[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [4U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [4U][2U]));
        tracep->fullWData(oldp+1719,(__Vtemp1685),85);
        tracep->fullBit(oldp+1722,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [4U][0U])));
        tracep->fullBit(oldp+1723,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1724,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1725,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1726,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1727,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1728,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1729,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1730,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1731,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [5U][0U])));
        tracep->fullBit(oldp+1732,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1733,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1734,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1735,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1736,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1737,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1738,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1739,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1740,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+1741,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [5U][2U] 
                                          >> 0x15U))));
        __Vtemp1701[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [5U][0U]);
        __Vtemp1701[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [5U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [5U][1U]));
        __Vtemp1701[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [5U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [5U][2U]));
        tracep->fullWData(oldp+1742,(__Vtemp1701),85);
        tracep->fullBit(oldp+1745,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [5U][0U])));
        tracep->fullBit(oldp+1746,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1747,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1748,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1749,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1750,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1751,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1752,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1753,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1754,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [6U][0U])));
        tracep->fullBit(oldp+1755,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1756,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1757,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1758,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1759,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1760,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1761,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1762,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1763,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+1764,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [6U][2U] 
                                          >> 0x15U))));
        __Vtemp1717[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [6U][0U]);
        __Vtemp1717[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [6U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [6U][1U]));
        __Vtemp1717[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [6U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [6U][2U]));
        tracep->fullWData(oldp+1765,(__Vtemp1717),85);
        tracep->fullBit(oldp+1768,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [6U][0U])));
        tracep->fullBit(oldp+1769,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1770,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1771,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1772,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1773,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1774,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1775,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1776,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1777,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [7U][0U])));
        tracep->fullBit(oldp+1778,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1779,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1780,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1781,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1782,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1783,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1784,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1785,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1786,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+1787,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [7U][2U] 
                                          >> 0x15U))));
        __Vtemp1733[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [7U][0U]);
        __Vtemp1733[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [7U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [7U][1U]));
        __Vtemp1733[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [7U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [7U][2U]));
        tracep->fullWData(oldp+1788,(__Vtemp1733),85);
        tracep->fullBit(oldp+1791,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [7U][0U])));
        tracep->fullBit(oldp+1792,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1793,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1794,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1795,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1796,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1797,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1798,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1799,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1800,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [8U][0U])));
        tracep->fullBit(oldp+1801,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1802,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1803,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1804,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1805,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1806,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1807,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1808,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1809,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+1810,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [8U][2U] 
                                          >> 0x15U))));
        __Vtemp1749[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [8U][0U]);
        __Vtemp1749[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [8U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [8U][1U]));
        __Vtemp1749[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [8U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [8U][2U]));
        tracep->fullWData(oldp+1811,(__Vtemp1749),85);
        tracep->fullBit(oldp+1814,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [8U][0U])));
        tracep->fullBit(oldp+1815,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1816,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1817,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1818,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1819,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1820,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1821,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1822,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1823,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [9U][0U])));
        tracep->fullBit(oldp+1824,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1825,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1826,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1827,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1828,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1829,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+1830,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1831,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+1832,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+1833,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                          [9U][2U] 
                                          >> 0x15U))));
        __Vtemp1765[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                           [9U][0U]);
        __Vtemp1765[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [9U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [9U][1U]));
        __Vtemp1765[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                            [9U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                         [9U][2U]));
        tracep->fullWData(oldp+1834,(__Vtemp1765),85);
        tracep->fullBit(oldp+1837,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                    [9U][0U])));
        tracep->fullBit(oldp+1838,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1839,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1840,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1841,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1842,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1843,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1844,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1845,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1846,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                    [0U][0U])));
        tracep->fullBit(oldp+1847,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1848,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1849,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1850,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1851,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1852,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1853,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1854,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1855,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11
                                    [1U][0U])));
        tracep->fullCData(oldp+1856,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_2),4);
        tracep->fullBit(oldp+1857,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1858,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1859,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1860,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1861,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1862,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1863,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1864,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1865,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [0U][0U])));
        tracep->fullBit(oldp+1866,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1867,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1868,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1869,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1870,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1871,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1872,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1873,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1874,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [1U][0U])));
        tracep->fullBit(oldp+1875,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1876,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1877,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1878,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1879,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1880,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1881,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1882,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1883,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [2U][0U])));
        tracep->fullBit(oldp+1884,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1885,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1886,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1887,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1888,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1889,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1890,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1891,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1892,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [3U][0U])));
        tracep->fullBit(oldp+1893,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1894,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1895,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1896,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1897,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1898,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1899,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1900,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1901,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [4U][0U])));
        tracep->fullBit(oldp+1902,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1903,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1904,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1905,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1906,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1907,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1908,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1909,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1910,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [5U][0U])));
        tracep->fullBit(oldp+1911,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1912,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1913,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1914,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1915,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1916,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1917,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1918,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1919,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [6U][0U])));
        tracep->fullBit(oldp+1920,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1921,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1922,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1923,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1924,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1925,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1926,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1927,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1928,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [7U][0U])));
        tracep->fullBit(oldp+1929,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1930,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1931,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1932,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1933,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1934,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1935,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1936,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1937,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [8U][0U])));
        tracep->fullBit(oldp+1938,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1939,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1940,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1941,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1942,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1943,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1944,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1945,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1946,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                                    [9U][0U])));
        tracep->fullCData(oldp+1947,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellout__reqfifo__rdata_o[0U])),4);
        tracep->fullBit(oldp+1948,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__hold_all_requests));
        tracep->fullBit(oldp+1949,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1950,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1951,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1952,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1953,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1954,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1955,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1956,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1957,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0U][0U])));
        tracep->fullBit(oldp+1958,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1959,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1960,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1961,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1962,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1963,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1964,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1965,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1966,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [1U][0U])));
        tracep->fullBit(oldp+1967,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1968,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1969,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1970,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1971,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1972,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1973,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1974,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1975,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [2U][0U])));
        tracep->fullBit(oldp+1976,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1977,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1978,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1979,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1980,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1981,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1982,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1983,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1984,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [3U][0U])));
        tracep->fullBit(oldp+1985,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1986,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1987,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1988,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1989,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1990,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+1991,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+1992,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+1993,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [4U][0U])));
        tracep->fullBit(oldp+1994,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+1995,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+1996,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+1997,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+1998,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+1999,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2000,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2001,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2002,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [5U][0U])));
        tracep->fullBit(oldp+2003,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2004,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2005,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2006,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2007,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2008,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2009,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2010,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2011,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [6U][0U])));
        tracep->fullBit(oldp+2012,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2013,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2014,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2015,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2016,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2017,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2018,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2019,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2020,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [7U][0U])));
        tracep->fullBit(oldp+2021,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2022,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2023,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2024,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2025,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2026,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2027,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2028,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2029,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [8U][0U])));
        tracep->fullBit(oldp+2030,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2031,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2032,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2033,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2034,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2035,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2036,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2037,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2038,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [9U][0U])));
        tracep->fullBit(oldp+2039,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0xaU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2040,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2041,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2042,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2043,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2044,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xaU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xaU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+2045,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xaU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [0xaU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2046,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xaU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xaU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+2047,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0xaU][0U])));
        tracep->fullWData(oldp+2048,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
        tracep->fullBit(oldp+2051,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__reqfifo__DOT__gen_normal_fifo__DOT__empty)))));
        tracep->fullWData(oldp+2052,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellout__reqfifo__rdata_o),88);
        tracep->fullBit(oldp+2055,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__reqfifo__DOT__gen_normal_fifo__DOT__empty));
        tracep->fullBit(oldp+2056,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0xaU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2057,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2058,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2059,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2060,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2061,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xaU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xaU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+2062,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0xaU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [0xaU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2063,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0xaU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0xaU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+2064,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0xaU][0U])));
        tracep->fullBit(oldp+2065,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2066,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2067,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2068,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2069,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2070,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2071,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2072,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2073,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0U][0U])));
        tracep->fullBit(oldp+2074,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2075,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2076,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2077,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2078,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2079,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2080,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2081,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2082,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2083,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [0U][2U] 
                                          >> 0x15U))));
        __Vtemp1997[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [0U][0U]);
        __Vtemp1997[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [0U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][1U]));
        __Vtemp1997[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [0U][2U]));
        tracep->fullWData(oldp+2084,(__Vtemp1997),85);
        tracep->fullBit(oldp+2087,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [0U][0U])));
        tracep->fullBit(oldp+2088,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2089,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2090,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2091,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2092,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2093,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2094,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2095,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2096,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [1U][0U])));
        tracep->fullBit(oldp+2097,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2098,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2099,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2100,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2101,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2102,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2103,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2104,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2105,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2106,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [1U][2U] 
                                          >> 0x15U))));
        __Vtemp2013[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [1U][0U]);
        __Vtemp2013[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [1U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][1U]));
        __Vtemp2013[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [1U][2U]));
        tracep->fullWData(oldp+2107,(__Vtemp2013),85);
        tracep->fullBit(oldp+2110,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [1U][0U])));
        tracep->fullBit(oldp+2111,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2112,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2113,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2114,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2115,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2116,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2117,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2118,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2119,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [2U][0U])));
        tracep->fullBit(oldp+2120,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2121,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2122,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2123,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2124,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2125,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2126,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2127,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2128,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2129,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [2U][2U] 
                                          >> 0x15U))));
        __Vtemp2029[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [2U][0U]);
        __Vtemp2029[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [2U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][1U]));
        __Vtemp2029[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [2U][2U]));
        tracep->fullWData(oldp+2130,(__Vtemp2029),85);
        tracep->fullBit(oldp+2133,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [2U][0U])));
        tracep->fullBit(oldp+2134,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2135,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2136,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2137,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2138,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2139,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2140,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2141,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2142,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [3U][0U])));
        tracep->fullBit(oldp+2143,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2144,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2145,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2146,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2147,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2148,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2149,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2150,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2151,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2152,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [3U][2U] 
                                          >> 0x15U))));
        __Vtemp2045[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [3U][0U]);
        __Vtemp2045[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [3U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][1U]));
        __Vtemp2045[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [3U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [3U][2U]));
        tracep->fullWData(oldp+2153,(__Vtemp2045),85);
        tracep->fullBit(oldp+2156,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [3U][0U])));
        tracep->fullBit(oldp+2157,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2158,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2159,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2160,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2161,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2162,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2163,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2164,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2165,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [4U][0U])));
        tracep->fullBit(oldp+2166,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2167,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2168,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2169,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2170,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2171,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2172,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2173,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2174,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2175,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [4U][2U] 
                                          >> 0x15U))));
        __Vtemp2061[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [4U][0U]);
        __Vtemp2061[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [4U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][1U]));
        __Vtemp2061[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [4U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [4U][2U]));
        tracep->fullWData(oldp+2176,(__Vtemp2061),85);
        tracep->fullBit(oldp+2179,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [4U][0U])));
        tracep->fullBit(oldp+2180,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2181,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2182,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2183,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2184,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2185,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2186,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2187,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2188,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [5U][0U])));
        tracep->fullBit(oldp+2189,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2190,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2191,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2192,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2193,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2194,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2195,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2196,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2197,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2198,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [5U][2U] 
                                          >> 0x15U))));
        __Vtemp2077[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [5U][0U]);
        __Vtemp2077[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [5U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][1U]));
        __Vtemp2077[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [5U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [5U][2U]));
        tracep->fullWData(oldp+2199,(__Vtemp2077),85);
        tracep->fullBit(oldp+2202,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [5U][0U])));
        tracep->fullBit(oldp+2203,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2204,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2205,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2206,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2207,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2208,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2209,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2210,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2211,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [6U][0U])));
        tracep->fullBit(oldp+2212,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2213,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2214,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2215,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2216,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2217,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2218,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2219,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2220,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2221,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [6U][2U] 
                                          >> 0x15U))));
        __Vtemp2093[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [6U][0U]);
        __Vtemp2093[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [6U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][1U]));
        __Vtemp2093[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [6U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [6U][2U]));
        tracep->fullWData(oldp+2222,(__Vtemp2093),85);
        tracep->fullBit(oldp+2225,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [6U][0U])));
        tracep->fullBit(oldp+2226,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2227,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2228,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2229,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2230,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2231,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2232,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2233,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2234,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [7U][0U])));
        tracep->fullBit(oldp+2235,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2236,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2237,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2238,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2239,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2240,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2241,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2242,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2243,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2244,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [7U][2U] 
                                          >> 0x15U))));
        __Vtemp2109[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [7U][0U]);
        __Vtemp2109[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [7U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][1U]));
        __Vtemp2109[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [7U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [7U][2U]));
        tracep->fullWData(oldp+2245,(__Vtemp2109),85);
        tracep->fullBit(oldp+2248,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [7U][0U])));
        tracep->fullBit(oldp+2249,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2250,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2251,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2252,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2253,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2254,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2255,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2256,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2257,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [8U][0U])));
        tracep->fullBit(oldp+2258,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2259,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2260,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2261,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2262,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2263,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2264,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2265,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2266,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2267,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [8U][2U] 
                                          >> 0x15U))));
        __Vtemp2125[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [8U][0U]);
        __Vtemp2125[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [8U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][1U]));
        __Vtemp2125[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [8U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [8U][2U]));
        tracep->fullWData(oldp+2268,(__Vtemp2125),85);
        tracep->fullBit(oldp+2271,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [8U][0U])));
        tracep->fullBit(oldp+2272,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2273,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2274,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2275,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2276,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2277,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2278,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2279,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2280,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [9U][0U])));
        tracep->fullBit(oldp+2281,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2282,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2283,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2284,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2285,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2286,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2287,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2288,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2289,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o[0U])));
        tracep->fullBit(oldp+2290,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                          [9U][2U] 
                                          >> 0x15U))));
        __Vtemp2141[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                           [9U][0U]);
        __Vtemp2141[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [9U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [9U][1U]));
        __Vtemp2141[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                            [9U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                         [9U][2U]));
        tracep->fullWData(oldp+2291,(__Vtemp2141),85);
        tracep->fullBit(oldp+2294,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                    [9U][0U])));
        tracep->fullBit(oldp+2295,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2296,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2297,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2298,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2299,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2300,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2301,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2302,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2303,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U])));
        tracep->fullBit(oldp+2304,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2305,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2306,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2307,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2308,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2309,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2310,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2311,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2312,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                    [0U][0U])));
        tracep->fullBit(oldp+2313,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2314,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2315,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2316,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2317,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2318,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2319,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2320,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2321,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2
                                    [1U][0U])));
        tracep->fullBit(oldp+2322,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2323,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2324,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2325,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2326,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2327,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2328,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2329,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2330,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                    [0U][0U])));
        tracep->fullBit(oldp+2331,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2332,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2333,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2334,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2335,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2336,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2337,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2338,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2339,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5
                                    [1U][0U])));
        tracep->fullBit(oldp+2340,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2341,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2342,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2343,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2344,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2345,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2346,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2347,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2348,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                    [0U][0U])));
        tracep->fullBit(oldp+2349,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2350,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2351,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2352,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2353,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2354,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2355,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2356,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2357,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6
                                    [1U][0U])));
        tracep->fullBit(oldp+2358,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2359,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2360,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2361,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2362,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2363,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2364,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2365,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2366,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                    [0U][0U])));
        tracep->fullBit(oldp+2367,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2368,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2369,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2370,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2371,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2372,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2373,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2374,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2375,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7
                                    [1U][0U])));
        tracep->fullBit(oldp+2376,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2377,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2378,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2379,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2380,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2381,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2382,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2383,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2384,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                    [0U][0U])));
        tracep->fullBit(oldp+2385,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2386,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2387,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2388,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2389,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2390,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2391,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2392,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2393,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10
                                    [1U][0U])));
        tracep->fullSData(oldp+2394,((0x1fcU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[2U] 
                                                 << 0x1bU) 
                                                | (0x7fffffcU 
                                                   & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                      >> 5U))))),9);
        tracep->fullIData(oldp+2395,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullCData(oldp+2396,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullBit(oldp+2397,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 1U))));
        tracep->fullBit(oldp+2398,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 2U))));
        tracep->fullBit(oldp+2399,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 3U))));
        tracep->fullBit(oldp+2400,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 4U))));
        tracep->fullBit(oldp+2401,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 5U))));
        tracep->fullBit(oldp+2402,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 6U))));
        tracep->fullBit(oldp+2403,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 7U))));
        tracep->fullBit(oldp+2404,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 8U))));
        tracep->fullBit(oldp+2405,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 9U))));
        tracep->fullBit(oldp+2406,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+2407,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xbU))));
        tracep->fullBit(oldp+2408,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+2409,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+2410,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+2411,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+2412,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+2413,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+2414,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+2415,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+2416,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+2417,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+2418,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+2419,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+2420,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+2421,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+2422,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+2423,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+2424,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+2425,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+2426,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+2427,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+2428,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U])));
        tracep->fullCData(oldp+2429,((7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                             << 0x1fU) 
                                            | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                               >> 1U)))),3);
        tracep->fullCData(oldp+2430,((0x3fU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                  >> 1U)))),6);
        tracep->fullBit(oldp+2431,((((0U == (7U & (
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                     | (1U == (7U & 
                                               (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[2U] 
                                                >> 0x12U)))) 
                                    | (4U == (7U & 
                                              (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[2U] 
                                               >> 0x12U))))));
        tracep->fullBit(oldp+2432,((0U == (7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+2433,((1U == (7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+2434,((4U == (7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullCData(oldp+2435,((0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[2U] 
                                                      << 0x1bU) 
                                                     | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                        >> 5U)))))),4);
        tracep->fullBit(oldp+2436,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2437,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2438,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2439,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2440,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2441,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2442,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2443,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2444,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+2445,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2446,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2447,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2448,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2449,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2450,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2451,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2452,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2453,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                    [1U][0U])));
        tracep->fullBit(oldp+2454,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2455,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2456,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2457,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2458,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2459,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2460,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2461,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2462,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+2463,((0xfeU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+2464,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullCData(oldp+2465,((1U | (0xfeU & 
                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+2466,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+2467,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2468,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2469,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2470,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2471,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2472,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2473,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2474,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2475,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+2476,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2477,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2478,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2479,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2480,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2481,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2482,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2483,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2484,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                    [1U][0U])));
        tracep->fullBit(oldp+2485,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2486,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2487,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2488,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2489,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2490,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2491,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2492,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2493,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+2494,((0xfeU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+2495,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullCData(oldp+2496,((1U | (0xfeU & 
                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+2497,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+2498,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2499,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2500,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2501,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2502,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2503,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2504,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2505,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2506,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+2507,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2508,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2509,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2510,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2511,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2512,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2513,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2514,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2515,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                    [1U][0U])));
        tracep->fullCData(oldp+2516,((0xfeU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+2517,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullCData(oldp+2518,((1U | (0xfeU & 
                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+2519,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+2520,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2521,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2522,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2523,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2524,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2525,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2526,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2527,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2528,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+2529,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2530,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2531,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2532,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2533,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2534,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2535,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2536,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2537,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                    [1U][0U])));
        tracep->fullBit(oldp+2538,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2539,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2540,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2541,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2542,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2543,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2544,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2545,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2546,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+2547,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2548,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2549,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2550,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2551,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2552,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+2553,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2554,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+2555,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullCData(oldp+2556,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrequest),2);
        tracep->fullBit(oldp+2557,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2558,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2559,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2560,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2561,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2562,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2563,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2564,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2565,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+2566,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrequest))));
        tracep->fullBit(oldp+2567,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2568,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2569,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2570,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2571,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2572,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2573,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2574,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2575,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+2576,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+2577,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+2578,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2579,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2580,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2581,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2582,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2583,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2584,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2585,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2586,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+2587,((0xfeU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+2588,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+2589,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2590,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2591,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2592,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2593,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2594,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2595,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2596,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2597,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+2598,((1U | (0xfeU & 
                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+2599,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+2600,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2342[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[0U]);
        __Vtemp2342[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[1U]));
        __Vtemp2342[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+2601,(__Vtemp2342),85);
        tracep->fullBit(oldp+2604,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+2605,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+2608,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullWData(oldp+2611,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+2614,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+2615,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+2616,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+2617,((2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+2618,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+2619,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2620,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2621,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2622,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2623,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2624,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2625,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2626,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2627,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+2628,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2346[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2346[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2346[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+2629,(__Vtemp2346),85);
        tracep->fullBit(oldp+2632,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+2633,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2634,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2635,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2636,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2637,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2638,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2639,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2640,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2641,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+2642,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2350[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2350[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2350[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+2643,(__Vtemp2350),85);
        tracep->fullBit(oldp+2646,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+2647,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2648,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2649,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2650,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2651,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2652,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2653,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2654,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2655,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+2656,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2354[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2354[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2354[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+2657,(__Vtemp2354),85);
        tracep->fullBit(oldp+2660,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+2661,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+2662,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+2663,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+2664,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+2665,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+2666,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+2667,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+2668,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+2669,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+2670,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2358[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2358[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2358[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+2671,(__Vtemp2358),85);
        tracep->fullBit(oldp+2674,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+2675,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xdU))));
        tracep->fullBit(oldp+2676,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xeU))));
        tracep->fullBit(oldp+2677,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xfU))));
        tracep->fullBit(oldp+2678,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x10U))));
        tracep->fullCData(oldp+2679,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio22_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2680,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio23_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2681,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio24_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2682,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio25_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullBit(oldp+2683,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 6U))));
        tracep->fullBit(oldp+2684,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 7U))));
        tracep->fullBit(oldp+2685,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we)
                                           ? (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                              >> 8U)
                                           : (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d)))));
        tracep->fullBit(oldp+2686,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 9U))));
        tracep->fullBit(oldp+2687,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xaU))));
        tracep->fullBit(oldp+2688,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xbU))));
        tracep->fullBit(oldp+2689,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xcU))));
        tracep->fullBit(oldp+2690,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xdU))));
        tracep->fullBit(oldp+2691,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xeU))));
        tracep->fullBit(oldp+2692,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xfU))));
        tracep->fullBit(oldp+2693,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x10U))));
        tracep->fullBit(oldp+2694,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x11U))));
        tracep->fullBit(oldp+2695,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x12U))));
        tracep->fullBit(oldp+2696,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x13U))));
        tracep->fullBit(oldp+2697,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x14U))));
        tracep->fullBit(oldp+2698,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x15U))));
        tracep->fullBit(oldp+2699,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x16U))));
        tracep->fullBit(oldp+2700,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x17U))));
        tracep->fullBit(oldp+2701,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x18U))));
        tracep->fullBit(oldp+2702,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x19U))));
        tracep->fullBit(oldp+2703,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1aU))));
        tracep->fullBit(oldp+2704,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1bU))));
        tracep->fullBit(oldp+2705,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1cU))));
        tracep->fullBit(oldp+2706,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1dU))));
        tracep->fullBit(oldp+2707,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1eU))));
        tracep->fullCData(oldp+2708,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullBit(oldp+2709,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 1U))));
        tracep->fullBit(oldp+2710,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 2U))));
        tracep->fullBit(oldp+2711,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 3U))));
        tracep->fullBit(oldp+2712,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 4U))));
        tracep->fullBit(oldp+2713,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 5U))));
        tracep->fullBit(oldp+2714,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 6U))));
        tracep->fullBit(oldp+2715,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 7U))));
        tracep->fullBit(oldp+2716,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 8U))));
        tracep->fullBit(oldp+2717,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 9U))));
        tracep->fullBit(oldp+2718,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xaU))));
        tracep->fullBit(oldp+2719,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xbU))));
        tracep->fullBit(oldp+2720,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0xcU))));
        tracep->fullBit(oldp+2721,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x11U))));
        tracep->fullBit(oldp+2722,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x12U))));
        tracep->fullBit(oldp+2723,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x13U))));
        tracep->fullBit(oldp+2724,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x14U))));
        tracep->fullBit(oldp+2725,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x15U))));
        tracep->fullBit(oldp+2726,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x16U))));
        tracep->fullBit(oldp+2727,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x17U))));
        tracep->fullBit(oldp+2728,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x18U))));
        tracep->fullBit(oldp+2729,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x19U))));
        tracep->fullBit(oldp+2730,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1aU))));
        tracep->fullBit(oldp+2731,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1bU))));
        tracep->fullBit(oldp+2732,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1cU))));
        tracep->fullBit(oldp+2733,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1dU))));
        tracep->fullBit(oldp+2734,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1eU))));
        tracep->fullBit(oldp+2735,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1fU))));
        tracep->fullBit(oldp+2736,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we) 
                                    & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U])));
        tracep->fullCData(oldp+2737,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio0_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2738,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio1_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2739,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio2_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2740,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio3_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2741,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio4_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2742,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio5_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2743,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio6_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2744,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio8_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2745,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio9_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2746,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio10_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2747,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio11_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2748,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio12_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2749,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio13_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2750,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio14_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2751,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio15_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2752,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio16_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2753,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio17_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2754,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio18_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2755,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio19_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2756,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio20_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2757,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio21_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2758,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio26_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2759,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio27_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2760,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio28_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2761,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio29_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2762,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio30_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullCData(oldp+2763,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio31_we)
                                       ? (7U & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                                   >> 1U)))
                                       : 0U)),3);
        tracep->fullBit(oldp+2764,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 1U))));
        tracep->fullBit(oldp+2765,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 2U))));
        tracep->fullBit(oldp+2766,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 3U))));
        tracep->fullBit(oldp+2767,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 4U))));
        tracep->fullBit(oldp+2768,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 5U))));
        tracep->fullBit(oldp+2769,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 0x1fU))));
        tracep->fullBit(oldp+2770,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we) 
                                    & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[1U])));
        tracep->fullBit(oldp+2771,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__msip0_we) 
                                    & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_d_o[0U] 
                                       >> 1U))));
        tracep->fullBit(oldp+2772,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_we));
        tracep->fullBit(oldp+2773,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_re));
        tracep->fullBit(oldp+2774,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                      | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                     & (~ (IData)((0U 
                                                   != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) 
                                    | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__wr_err))));
        tracep->fullBit(oldp+2775,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                     | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)((0U 
                                                  != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__addr_hit))))));
        tracep->fullBit(oldp+2776,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__wr_err));
        tracep->fullBit(oldp+2777,((((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                              >> 9U)) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+2778,((((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                              >> 0x24U)) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+2779,(((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 0x24U)) 
                                    & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_re))));
        tracep->fullQData(oldp+2780,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__addr_hit),38);
        tracep->fullBit(oldp+2782,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
        tracep->fullBit(oldp+2783,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        tracep->fullBit(oldp+2784,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
        tracep->fullBit(oldp+2785,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
        tracep->fullBit(oldp+2786,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
        tracep->fullBit(oldp+2787,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
        tracep->fullBit(oldp+2788,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
        tracep->fullBit(oldp+2789,(vlTOPp->Azadi_top_verilator__DOT__cio_jtag_tck));
        tracep->fullBit(oldp+2790,(vlTOPp->Azadi_top_verilator__DOT__cio_jtag_tdi));
        tracep->fullBit(oldp+2791,(vlTOPp->Azadi_top_verilator__DOT__cio_jtag_tms));
        tracep->fullBit(oldp+2792,(vlTOPp->Azadi_top_verilator__DOT__cio_jtag_trst_n));
        tracep->fullBit(oldp+2793,(vlTOPp->Azadi_top_verilator__DOT__cio_jtag_srst_n));
        tracep->fullCData(oldp+2794,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_opcode),3);
        tracep->fullCData(oldp+2795,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_source),8);
        tracep->fullCData(oldp+2796,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_size),2);
        tracep->fullIData(oldp+2797,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q),32);
        tracep->fullIData(oldp+2798,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q),32);
        tracep->fullIData(oldp+2799,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q),32);
        tracep->fullIData(oldp+2800,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q),32);
        tracep->fullIData(oldp+2801,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q),32);
        tracep->fullCData(oldp+2802,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+2803,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+2804,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__q));
        tracep->fullBit(oldp+2805,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__q));
        tracep->fullBit(oldp+2806,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__q));
        tracep->fullBit(oldp+2807,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__q));
        tracep->fullBit(oldp+2808,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q));
        tracep->fullBit(oldp+2809,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q));
        tracep->fullBit(oldp+2810,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q));
        tracep->fullBit(oldp+2811,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q));
        tracep->fullBit(oldp+2812,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q));
        tracep->fullBit(oldp+2813,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q));
        tracep->fullBit(oldp+2814,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q));
        tracep->fullBit(oldp+2815,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q));
        tracep->fullBit(oldp+2816,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q));
        tracep->fullBit(oldp+2817,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q));
        tracep->fullBit(oldp+2818,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q));
        tracep->fullBit(oldp+2819,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q));
        tracep->fullBit(oldp+2820,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q));
        tracep->fullBit(oldp+2821,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q));
        tracep->fullBit(oldp+2822,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q));
        tracep->fullBit(oldp+2823,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q));
        tracep->fullBit(oldp+2824,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q));
        tracep->fullBit(oldp+2825,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q));
        tracep->fullBit(oldp+2826,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q));
        tracep->fullBit(oldp+2827,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q));
        tracep->fullBit(oldp+2828,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q));
        tracep->fullBit(oldp+2829,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q));
        tracep->fullBit(oldp+2830,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_5__DOT__qe));
        tracep->fullBit(oldp+2831,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__qe));
        tracep->fullBit(oldp+2832,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_23__DOT__qe));
        tracep->fullBit(oldp+2833,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_24__DOT__qe));
        tracep->fullBit(oldp+2834,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_25__DOT__qe));
        tracep->fullCData(oldp+2835,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullBit(oldp+2836,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req) 
                                          >> 3U))));
        tracep->fullBit(oldp+2837,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req) 
                                          >> 2U))));
        tracep->fullBit(oldp+2838,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req) 
                                          >> 1U))));
        tracep->fullBit(oldp+2839,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req))));
        tracep->fullBit(oldp+2840,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q));
        tracep->fullBit(oldp+2841,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q));
        tracep->fullBit(oldp+2842,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_q));
        tracep->fullCData(oldp+2843,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_q),2);
        tracep->fullCData(oldp+2844,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q),2);
        tracep->fullCData(oldp+2845,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q),2);
        tracep->fullCData(oldp+2846,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullCData(oldp+2847,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+2848,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+2849,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+2850,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+2851,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+2852,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_q),2);
        tracep->fullBit(oldp+2853,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req) 
                                          >> 2U))));
        tracep->fullBit(oldp+2854,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req))));
        tracep->fullCData(oldp+2855,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_sync),3);
        tracep->fullCData(oldp+2856,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync),3);
        tracep->fullBit(oldp+2857,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync) 
                                          >> 2U))));
        tracep->fullCData(oldp+2858,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync))),2);
        tracep->fullBit(oldp+2859,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmdbusy));
        tracep->fullBit(oldp+2860,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+2861,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+2862,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n));
        tracep->fullCData(oldp+2863,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi),3);
        tracep->fullBit(oldp+2864,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                          >> 2U))));
        tracep->fullCData(oldp+2865,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi))),2);
        tracep->fullCData(oldp+2866,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_wptr__DOT__intq),3);
        tracep->fullCData(oldp+2867,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_sync),3);
        tracep->fullCData(oldp+2868,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_q),4);
        tracep->fullCData(oldp+2869,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync),3);
        tracep->fullBit(oldp+2870,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync) 
                                          >> 2U))));
        tracep->fullCData(oldp+2871,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync))),2);
        tracep->fullCData(oldp+2872,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync),3);
        tracep->fullBit(oldp+2873,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+2874,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+2875,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+2876,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+2877,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+2878,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+2879,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+2880,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+2881,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o))));
        tracep->fullQData(oldp+2882,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[0]),41);
        tracep->fullQData(oldp+2884,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[1]),41);
        tracep->fullQData(oldp+2886,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[2]),41);
        tracep->fullQData(oldp+2888,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[3]),41);
        tracep->fullBit(oldp+2890,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset));
        tracep->fullBit(oldp+2891,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr));
        tracep->fullBit(oldp+2892,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr));
        tracep->fullBit(oldp+2893,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr));
        tracep->fullCData(oldp+2894,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d),4);
        tracep->fullBit(oldp+2895,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir));
        tracep->fullBit(oldp+2896,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir));
        tracep->fullBit(oldp+2897,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir));
        tracep->fullCData(oldp+2898,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr),3);
        tracep->fullCData(oldp+2899,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_sync),3);
        tracep->fullBit(oldp+2900,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+2901,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr))),2);
        tracep->fullCData(oldp+2902,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi),3);
        tracep->fullBit(oldp+2903,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                          >> 2U))));
        tracep->fullCData(oldp+2904,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi))),2);
        tracep->fullBit(oldp+2905,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0x10U))));
        tracep->fullBit(oldp+2906,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q))));
        tracep->fullBit(oldp+2907,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)))));
        tracep->fullQData(oldp+2908,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q),41);
        tracep->fullCData(oldp+2910,((0x7fU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q 
                                                       >> 0x22U)))),7);
        tracep->fullIData(oldp+2911,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q 
                                              >> 2U))),32);
        tracep->fullCData(oldp+2912,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q))),2);
        tracep->fullCData(oldp+2913,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q),5);
        tracep->fullCData(oldp+2914,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q),5);
        tracep->fullIData(oldp+2915,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q),32);
        tracep->fullSData(oldp+2916,((0x3fffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                                 >> 0x12U))),14);
        tracep->fullBit(oldp+2917,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0x11U))));
        tracep->fullBit(oldp+2918,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0x10U))));
        tracep->fullBit(oldp+2919,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0xfU))));
        tracep->fullCData(oldp+2920,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+2921,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                            >> 0xaU))),2);
        tracep->fullCData(oldp+2922,((0x3fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                               >> 4U))),6);
        tracep->fullCData(oldp+2923,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q)),4);
        tracep->fullBit(oldp+2924,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q));
        tracep->fullBit(oldp+2925,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk));
        tracep->fullCData(oldp+2926,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray),3);
        tracep->fullBit(oldp+2927,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_rsp) 
                                          >> 1U))));
        tracep->fullBit(oldp+2928,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_rsp) 
                                          >> 1U))));
        tracep->fullBit(oldp+2929,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_rsp))));
        tracep->fullBit(oldp+2930,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__jtag_rsp))));
        tracep->fullCData(oldp+2931,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_rptr__DOT__intq),3);
        tracep->fullCData(oldp+2932,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr),3);
        tracep->fullBit(oldp+2933,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+2934,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))),2);
        tracep->fullBit(oldp+2935,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access));
        tracep->fullBit(oldp+2936,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select));
        tracep->fullBit(oldp+2937,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty)))));
        tracep->fullBit(oldp+2938,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select));
        tracep->fullBit(oldp+2939,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select));
        tracep->fullBit(oldp+2940,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty));
        tracep->fullCData(oldp+2941,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr),3);
        tracep->fullCData(oldp+2942,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray),3);
        tracep->fullBit(oldp+2943,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+2944,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr))),2);
        tracep->fullCData(oldp+2945,((0x7fU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                       >> 0x22U)))),7);
        tracep->fullCData(oldp+2946,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                    >> 0x20U)))),2);
        tracep->fullIData(oldp+2947,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o)),32);
        tracep->fullCData(oldp+2948,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                    >> 0x20U)))),2);
        tracep->fullQData(oldp+2949,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o),41);
        tracep->fullBit(oldp+2951,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+2952,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+2953,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+2954,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+2955,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+2956,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+2957,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+2958,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+2959,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+2960,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+2961,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+2962,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+2963,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+2964,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+2965,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+2966,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+2967,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+2968,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+2969,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+2970,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+2971,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+2972,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+2973,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+2974,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+2975,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+2976,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+2977,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+2978,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+2979,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+2980,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+2981,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+2982,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+2983,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+2984,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+2985,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+2986,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+2987,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+2988,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+2989,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+2990,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+2991,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+2992,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+2993,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+2994,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+2995,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+2996,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+2997,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+2998,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+2999,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+3000,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+3001,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+3002,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+3003,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+3004,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+3005,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+3006,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+3007,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+3008,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+3009,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+3010,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+3011,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+3012,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+3013,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullCData(oldp+3014,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+3015,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+3016,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q));
        tracep->fullBit(oldp+3017,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio6__DOT__qe));
        tracep->fullBit(oldp+3018,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__qe));
        tracep->fullBit(oldp+3019,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio8__DOT__qe));
        tracep->fullBit(oldp+3020,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio9__DOT__qe));
        tracep->fullBit(oldp+3021,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio10__DOT__qe));
        tracep->fullBit(oldp+3022,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio11__DOT__qe));
        tracep->fullBit(oldp+3023,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_2__DOT__qe));
        tracep->fullBit(oldp+3024,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_3__DOT__qe));
        tracep->fullBit(oldp+3025,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_4__DOT__qe));
        tracep->fullBit(oldp+3026,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_6__DOT__qe));
        tracep->fullBit(oldp+3027,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_8__DOT__qe));
        tracep->fullBit(oldp+3028,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_9__DOT__qe));
        tracep->fullBit(oldp+3029,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_10__DOT__qe));
        tracep->fullBit(oldp+3030,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_11__DOT__qe));
        tracep->fullBit(oldp+3031,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_12__DOT__qe));
        tracep->fullBit(oldp+3032,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_13__DOT__qe));
        tracep->fullBit(oldp+3033,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_14__DOT__qe));
        tracep->fullBit(oldp+3034,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_17__DOT__qe));
        tracep->fullBit(oldp+3035,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_18__DOT__qe));
        tracep->fullBit(oldp+3036,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_28__DOT__qe));
        tracep->fullBit(oldp+3037,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_29__DOT__qe));
        tracep->fullBit(oldp+3038,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_30__DOT__qe));
        tracep->fullBit(oldp+3039,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_31__DOT__qe));
        tracep->fullBit(oldp+3040,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_msip0__DOT__qe));
        tracep->fullCData(oldp+3041,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+3042,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullBit(oldp+3043,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3044,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3045,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3046,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3047,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3048,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3049,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3050,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3051,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h))));
        tracep->fullIData(oldp+3052,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_gpio),32);
        tracep->fullBit(oldp+3053,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3054,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3055,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3056,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3057,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3058,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3059,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3060,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3061,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0U]))));
        tracep->fullBit(oldp+3062,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3063,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3064,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3065,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3066,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3067,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3068,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3069,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3070,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [1U]))));
        tracep->fullBit(oldp+3071,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3072,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3073,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3074,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3075,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3076,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3077,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3078,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3079,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [2U]))));
        tracep->fullBit(oldp+3080,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3081,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3082,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3083,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3084,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3085,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3086,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3087,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3088,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [3U]))));
        tracep->fullBit(oldp+3089,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3090,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3091,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3092,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3093,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3094,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3095,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3096,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3097,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [4U]))));
        tracep->fullBit(oldp+3098,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3099,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3100,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3101,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3102,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3103,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3104,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3105,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3106,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [5U]))));
        tracep->fullBit(oldp+3107,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3108,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3109,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3110,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3111,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3112,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3113,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3114,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3115,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [6U]))));
        tracep->fullBit(oldp+3116,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3117,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3118,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3119,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3120,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3121,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3122,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3123,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3124,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [7U]))));
        tracep->fullBit(oldp+3125,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3126,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3127,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3128,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3129,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3130,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3131,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3132,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3133,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [8U]))));
        tracep->fullBit(oldp+3134,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3135,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3136,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3137,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3138,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3139,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3140,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3141,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3142,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [9U]))));
        tracep->fullBit(oldp+3143,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3144,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3145,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3146,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3147,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3148,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3149,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3150,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3151,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0xaU]))));
        tracep->fullBit(oldp+3152,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3153,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0xbU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3154,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0xbU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3155,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0xbU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3156,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [0xbU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3157,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0xbU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3158,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [0xbU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3159,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0xbU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3160,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0xbU]))));
        tracep->fullBit(oldp+3161,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3162,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0xcU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3163,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0xcU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3164,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                    [0xcU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3165,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                       [0xcU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3166,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0xcU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3167,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                              [0xcU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3168,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                  [0xcU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3169,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                                 [0xcU]))));
        tracep->fullBit(oldp+3170,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3171,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3172,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3173,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3174,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3175,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3176,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3177,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3178,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0U]))));
        tracep->fullBit(oldp+3179,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3180,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3181,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3182,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3183,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3184,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3185,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3186,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3187,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [1U]))));
        tracep->fullBit(oldp+3188,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3189,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3190,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3191,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3192,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3193,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3194,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3195,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3196,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [2U]))));
        tracep->fullBit(oldp+3197,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3198,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3199,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3200,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3201,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3202,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3203,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3204,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3205,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [3U]))));
        tracep->fullBit(oldp+3206,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3207,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3208,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3209,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3210,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3211,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3212,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3213,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3214,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [4U]))));
        tracep->fullBit(oldp+3215,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3216,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3217,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3218,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3219,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3220,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3221,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3222,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3223,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [5U]))));
        tracep->fullBit(oldp+3224,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3225,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3226,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3227,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3228,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3229,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3230,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3231,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3232,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [6U]))));
        tracep->fullBit(oldp+3233,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3234,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3235,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3236,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3237,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3238,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3239,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3240,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3241,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [7U]))));
        tracep->fullBit(oldp+3242,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3243,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3244,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3245,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3246,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3247,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3248,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3249,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3250,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [8U]))));
        tracep->fullBit(oldp+3251,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3252,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3253,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3254,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3255,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3256,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3257,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3258,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3259,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [9U]))));
        tracep->fullBit(oldp+3260,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3261,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3262,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3263,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3264,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3265,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3266,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3267,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3268,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+3269,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3270,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xbU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3271,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xbU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3272,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xbU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3273,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [0xbU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3274,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xbU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3275,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [0xbU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3276,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xbU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3277,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xbU]))));
        tracep->fullBit(oldp+3278,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3279,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xcU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3280,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xcU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3281,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xcU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3282,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [0xcU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3283,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xcU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3284,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [0xcU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3285,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xcU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3286,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xcU]))));
        tracep->fullIData(oldp+3287,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_enable__q),32);
        tracep->fullIData(oldp+3288,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_data_in__DOT__q),32);
        tracep->fullBit(oldp+3289,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
        tracep->fullIData(oldp+3290,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
        tracep->fullBit(oldp+3291,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__error));
        tracep->fullCData(oldp+3292,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
        tracep->fullCData(oldp+3293,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
        tracep->fullCData(oldp+3294,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
        tracep->fullBit(oldp+3295,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_enable__DOT__qe));
        tracep->fullBit(oldp+3296,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe));
        tracep->fullBit(oldp+3297,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe));
        tracep->fullBit(oldp+3298,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe));
        tracep->fullBit(oldp+3299,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__qe));
        tracep->fullBit(oldp+3300,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__qe));
        tracep->fullCData(oldp+3301,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+3302,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+3303,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+3304,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+3305,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+3306,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+3307,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+3308,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+3309,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+3310,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+3311,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+3312,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+3313,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+3314,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+3315,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+3316,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q));
        tracep->fullIData(oldp+3317,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__ia),32);
        tracep->fullIData(oldp+3318,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__src_q),32);
        tracep->fullBit(oldp+3319,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q));
        tracep->fullBit(oldp+3320,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q));
        tracep->fullBit(oldp+3321,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q));
        tracep->fullBit(oldp+3322,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q));
        tracep->fullBit(oldp+3323,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q));
        tracep->fullBit(oldp+3324,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q));
        tracep->fullBit(oldp+3325,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_4__DOT__qe));
        tracep->fullBit(oldp+3326,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_5__DOT__qe));
        tracep->fullBit(oldp+3327,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_14__DOT__qe));
        tracep->fullBit(oldp+3328,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_15__DOT__qe));
        tracep->fullBit(oldp+3329,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_16__DOT__qe));
        tracep->fullBit(oldp+3330,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_17__DOT__qe));
        tracep->fullBit(oldp+3331,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_18__DOT__qe));
        tracep->fullBit(oldp+3332,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_19__DOT__qe));
        tracep->fullBit(oldp+3333,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_20__DOT__qe));
        tracep->fullBit(oldp+3334,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_21__DOT__qe));
        tracep->fullBit(oldp+3335,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio12__DOT__qe));
        tracep->fullBit(oldp+3336,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio13__DOT__qe));
        tracep->fullBit(oldp+3337,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio14__DOT__qe));
        tracep->fullBit(oldp+3338,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio17__DOT__qe));
        tracep->fullBit(oldp+3339,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio22__DOT__qe));
        tracep->fullBit(oldp+3340,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio23__DOT__qe));
        tracep->fullBit(oldp+3341,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio24__DOT__qe));
        tracep->fullBit(oldp+3342,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio25__DOT__qe));
        tracep->fullBit(oldp+3343,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_15__DOT__qe));
        tracep->fullBit(oldp+3344,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_16__DOT__qe));
        tracep->fullBit(oldp+3345,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_19__DOT__qe));
        tracep->fullBit(oldp+3346,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_20__DOT__qe));
        tracep->fullBit(oldp+3347,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_21__DOT__qe));
        tracep->fullBit(oldp+3348,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_22__DOT__qe));
        tracep->fullBit(oldp+3349,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_threshold0__DOT__qe));
        tracep->fullCData(oldp+3350,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q),6);
        tracep->fullBit(oldp+3351,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3352,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3353,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3354,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3355,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3356,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3357,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3358,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3359,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+3360,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3361,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3362,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3363,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3364,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3365,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3366,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3367,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3368,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0U]))));
        tracep->fullBit(oldp+3369,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0U]))));
        tracep->fullBit(oldp+3370,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3371,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3373,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3374,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3375,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3376,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3377,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3378,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3379,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3380,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3381,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+3382,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3383,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3384,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3385,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3386,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3387,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3388,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3389,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3390,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [1U]))));
        tracep->fullBit(oldp+3391,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [1U]))));
        tracep->fullBit(oldp+3392,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3393,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3395,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3396,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3397,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3398,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3399,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3400,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3401,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3402,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3403,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+3404,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3405,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3406,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3407,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3408,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3409,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3410,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3411,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3412,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [2U]))));
        tracep->fullBit(oldp+3413,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [2U]))));
        tracep->fullBit(oldp+3414,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3415,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [2U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [2U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3417,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3418,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3419,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3420,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3421,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3422,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3423,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3424,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3425,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+3426,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3427,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3428,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3429,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3430,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3431,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3432,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3433,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3434,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [3U]))));
        tracep->fullBit(oldp+3435,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [3U]))));
        tracep->fullBit(oldp+3436,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3437,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [3U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [3U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3439,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3440,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3441,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3442,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3443,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3444,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3445,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3446,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3447,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+3448,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3449,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3450,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3451,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3452,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3453,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3454,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3455,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3456,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [4U]))));
        tracep->fullBit(oldp+3457,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [4U]))));
        tracep->fullBit(oldp+3458,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3459,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [4U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [4U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3461,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3462,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3463,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3464,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3465,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3466,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3467,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3468,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3469,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+3470,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3471,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3472,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3473,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3474,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3475,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3476,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3477,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3478,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [5U]))));
        tracep->fullBit(oldp+3479,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [5U]))));
        tracep->fullBit(oldp+3480,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3481,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [5U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [5U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3483,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3484,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3485,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3486,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3487,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3488,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3489,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3490,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3491,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+3492,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3493,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3494,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3495,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3496,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3497,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3498,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3499,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3500,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [6U]))));
        tracep->fullBit(oldp+3501,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [6U]))));
        tracep->fullBit(oldp+3502,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3503,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [6U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [6U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3505,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3506,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3507,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3508,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3509,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3510,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3511,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3512,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3513,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+3514,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3515,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3516,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3517,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3518,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3519,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3520,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3521,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3522,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [7U]))));
        tracep->fullBit(oldp+3523,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [7U]))));
        tracep->fullBit(oldp+3524,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3525,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [7U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [7U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3527,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3528,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3529,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3530,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3531,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3532,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3533,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3534,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3535,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+3536,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3537,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3538,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3539,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3540,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3541,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3542,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3543,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3544,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [8U]))));
        tracep->fullBit(oldp+3545,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [8U]))));
        tracep->fullBit(oldp+3546,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3547,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [8U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [8U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3549,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3550,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3551,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3552,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3553,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3554,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3555,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3556,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3557,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+3558,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3559,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3560,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3561,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3562,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3563,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3564,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3565,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3566,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [9U]))));
        tracep->fullBit(oldp+3567,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [9U]))));
        tracep->fullBit(oldp+3568,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3569,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [9U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [9U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3571,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3572,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3573,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3574,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3575,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3576,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3577,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3578,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3579,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+3580,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3581,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3582,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3583,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3584,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3585,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3586,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3587,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3588,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+3589,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+3590,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3591,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0xaU] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [0xaU] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3593,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3594,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3595,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3596,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3597,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3598,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3599,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3600,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3601,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+3602,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3603,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xbU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3604,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xbU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3605,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xbU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3606,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [0xbU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3607,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xbU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3608,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [0xbU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3609,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xbU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3610,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xbU]))));
        tracep->fullBit(oldp+3611,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xbU]))));
        tracep->fullBit(oldp+3612,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3613,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0xbU] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [0xbU] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3615,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3616,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3617,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3618,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3619,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3620,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3621,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3622,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3623,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o))));
        tracep->fullBit(oldp+3624,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3625,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xcU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3626,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xcU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3627,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xcU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3628,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                       [0xcU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3629,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xcU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3630,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                              [0xcU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3631,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xcU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3632,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xcU]))));
        tracep->fullBit(oldp+3633,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                 [0xcU]))));
        tracep->fullBit(oldp+3634,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3635,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                   [0xcU] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
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
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                              [0xcU] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3637,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3638,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3639,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3640,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3641,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3642,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3643,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3644,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3645,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [0U]))));
        tracep->fullBit(oldp+3646,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3647,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3648,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3649,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3650,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3651,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3652,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3653,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3654,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [1U]))));
        tracep->fullBit(oldp+3655,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3656,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3657,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3658,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3659,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3660,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3661,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3662,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3663,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [2U]))));
        tracep->fullBit(oldp+3664,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3665,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3666,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3667,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3668,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3669,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3670,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3671,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3672,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [3U]))));
        tracep->fullBit(oldp+3673,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3674,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3675,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3676,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3677,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3678,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3679,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3680,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3681,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [4U]))));
        tracep->fullBit(oldp+3682,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3683,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3684,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3685,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3686,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3687,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3688,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3689,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3690,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [5U]))));
        tracep->fullBit(oldp+3691,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3692,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3693,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3694,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3695,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3696,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3697,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3698,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3699,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [6U]))));
        tracep->fullBit(oldp+3700,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3701,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3702,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3703,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3704,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3705,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3706,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3707,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3708,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [7U]))));
        tracep->fullBit(oldp+3709,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3710,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3711,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3712,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3713,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3714,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3715,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3716,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3717,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [8U]))));
        tracep->fullBit(oldp+3718,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3719,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3720,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3721,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3722,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3723,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3724,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3725,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3726,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [9U]))));
        tracep->fullBit(oldp+3727,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3728,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3729,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3730,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3731,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3732,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3733,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3734,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3735,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+3736,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3737,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3738,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3739,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3740,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [0xbU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3741,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xbU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3742,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [0xbU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3743,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xbU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3744,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [0xbU]))));
        tracep->fullBit(oldp+3745,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3746,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xcU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3747,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xcU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3748,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xcU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3749,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [0xcU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3750,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xcU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3751,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [0xcU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3752,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xcU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3753,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [0xcU]))));
        tracep->fullBit(oldp+3754,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xdU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3755,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xdU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3756,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xdU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3757,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                    [0xdU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3758,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                       [0xdU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3759,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xdU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3760,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                              [0xdU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3761,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                  [0xdU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3762,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                                 [0xdU]))));
        tracep->fullBit(oldp+3763,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q));
        tracep->fullBit(oldp+3764,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fetch_enable_q));
        tracep->fullBit(oldp+3765,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_state__DOT__qe));
        tracep->fullCData(oldp+3766,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+3767,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+3768,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+3769,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+3770,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+3771,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+3772,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+3773,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+3774,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+3775,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+3776,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullBit(oldp+3777,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__instr_valid));
        tracep->fullIData(oldp+3778,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__tlul_data),32);
        tracep->fullCData(oldp+3779,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q),8);
        tracep->fullBit(oldp+3780,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q));
        tracep->fullCData(oldp+3781,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage),5);
        tracep->fullQData(oldp+3782,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage),33);
        tracep->fullBit(oldp+3784,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rvalid_o));
        tracep->fullIData(oldp+3785,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rdata_o),32);
        tracep->fullSData(oldp+3786,((0x1fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage)),13);
        tracep->fullSData(oldp+3787,((0x1fffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 0xdU))),13);
        tracep->fullSData(oldp+3788,((0x1fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage)),13);
        tracep->fullSData(oldp+3789,((0x1fffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 0xdU))),13);
        tracep->fullCData(oldp+3790,((0x1fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage))),5);
        tracep->fullCData(oldp+3791,((0x1fU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                               >> 5U))),5);
        tracep->fullQData(oldp+3792,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
        tracep->fullQData(oldp+3794,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                          << 0x1fU) 
                                         | ((QData)((IData)(
                                                            vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                            >> 1U)))),33);
        tracep->fullBit(oldp+3796,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q));
        tracep->fullBit(oldp+3797,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__fwd_rom_q));
        tracep->fullCData(oldp+3798,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullCData(oldp+3799,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
        tracep->fullBit(oldp+3800,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+3801,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+3802,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+3803,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        tracep->fullCData(oldp+3804,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullBit(oldp+3805,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+3806,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+3807,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3808,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3809,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3810,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3811,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3812,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3813,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3814,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3815,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar))));
        tracep->fullIData(oldp+3816,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rdata_tlword),32);
        tracep->fullIData(oldp+3817,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                              >> 1U))),32);
        tracep->fullBit(oldp+3818,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
        tracep->fullIData(oldp+3819,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rdata_tlword),32);
        tracep->fullQData(oldp+3820,(((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rdata_tlword)) 
                                      << 1U)),33);
        tracep->fullQData(oldp+3822,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
        tracep->fullBit(oldp+3824,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM.__PVT__drsp_fifo_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+3825,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM.__PVT__drsp_fifo_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+3826,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM.__PVT__drsp_fifo_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+3827,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM.__PVT__drsp_fifo_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+3828,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM.__PVT__drsp_fifo_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+3829,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM.__PVT__drsp_fifo_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+3830,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM.__PVT__drsp_fifo_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+3831,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM.__PVT__drsp_fifo_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+3832,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+3833,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+3834,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+3835,((0x7fU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM.__PVT__drsp_fifo_o 
                                                       >> 0x24U)))),8);
        tracep->fullBit(oldp+3836,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar))));
        tracep->fullBit(oldp+3837,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+3838,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+3840,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullCData(oldp+3841,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+3842,((2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+3843,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullCData(oldp+3844,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullBit(oldp+3845,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+3846,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullCData(oldp+3847,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
    }
}
