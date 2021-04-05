// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VAzadi_top_verilator__Syms.h"


void VAzadi_top_verilator::traceFullSub1(void* userp, VerilatedFst* tracep) {
    VAzadi_top_verilator__Syms* __restrict vlSymsp = static_cast<VAzadi_top_verilator__Syms*>(userp);
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp2380[3];
    WData/*95:0*/ __Vtemp2402[3];
    WData/*95:0*/ __Vtemp2406[3];
    WData/*95:0*/ __Vtemp2410[3];
    WData/*95:0*/ __Vtemp2432[3];
    WData/*95:0*/ __Vtemp2476[3];
    WData/*95:0*/ __Vtemp2480[3];
    WData/*95:0*/ __Vtemp2484[3];
    WData/*95:0*/ __Vtemp2488[3];
    WData/*95:0*/ __Vtemp2492[3];
    WData/*95:0*/ __Vtemp2671[3];
    WData/*95:0*/ __Vtemp2675[3];
    WData/*95:0*/ __Vtemp2679[3];
    WData/*95:0*/ __Vtemp2694[3];
    WData/*95:0*/ __Vtemp2710[3];
    WData/*95:0*/ __Vtemp2726[3];
    WData/*95:0*/ __Vtemp2742[3];
    WData/*95:0*/ __Vtemp2758[3];
    WData/*95:0*/ __Vtemp2774[3];
    WData/*95:0*/ __Vtemp2790[3];
    WData/*95:0*/ __Vtemp2806[3];
    WData/*95:0*/ __Vtemp2822[3];
    WData/*95:0*/ __Vtemp2838[3];
    WData/*95:0*/ __Vtemp2854[3];
    WData/*95:0*/ __Vtemp2870[3];
    WData/*95:0*/ __Vtemp2886[3];
    WData/*95:0*/ __Vtemp2949[3];
    WData/*95:0*/ __Vtemp2953[3];
    WData/*95:0*/ __Vtemp2957[3];
    // Body
    {
        tracep->fullBit(oldp+3848,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+3849,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullCData(oldp+3850,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullBit(oldp+3851,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+3852,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+3853,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_q));
        tracep->fullCData(oldp+3854,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
        tracep->fullBit(oldp+3855,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
        tracep->fullBit(oldp+3856,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+3857,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->fullBit(oldp+3858,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+3859,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+3860,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+3861,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+3862,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->fullBit(oldp+3863,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+3864,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+3865,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+3866,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullCData(oldp+3867,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 0xbU))),2);
        tracep->fullBit(oldp+3868,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                          >> 0xaU))));
        tracep->fullCData(oldp+3869,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 8U))),2);
        tracep->fullCData(oldp+3870,((0xffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
        tracep->fullBit(oldp+3871,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid));
        tracep->fullCData(oldp+3872,((0xfU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                              >> 1U))),4);
        tracep->fullBit(oldp+3873,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
        tracep->fullSData(oldp+3874,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
        tracep->fullCData(oldp+3875,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        tracep->fullCData(oldp+3876,((0xfU & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                              >> 1U))),4);
        tracep->fullBit(oldp+3877,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
        tracep->fullCData(oldp+3878,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        tracep->fullBit(oldp+3879,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
        tracep->fullIData(oldp+3880,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask),32);
        tracep->fullBit(oldp+3881,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+3882,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        tracep->fullCData(oldp+3883,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3884,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3885,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3886,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3887,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3888,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3889,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3890,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3891,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3892,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3893,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3894,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3895,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3896,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3897,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3898,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3899,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3900,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3901,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3902,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3903,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3904,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3905,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3906,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3907,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3908,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3909,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3910,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3911,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3912,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3913,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3914,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3915,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3916,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3917,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3918,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3919,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3920,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3921,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3922,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3923,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3924,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3925,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3926,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3927,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3928,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3929,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3930,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3931,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3932,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3933,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3934,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3935,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3936,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3937,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3938,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3939,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3940,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3941,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3942,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3943,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3944,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3945,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+3946,((0xfU == (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+3947,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullBit(oldp+3948,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+3949,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullCData(oldp+3950,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
        tracep->fullBit(oldp+3951,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                          >> 1U))));
        tracep->fullBit(oldp+3952,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        tracep->fullBit(oldp+3953,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip 
                                          >> 0x11U))));
        tracep->fullBit(oldp+3954,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip 
                                          >> 0x10U))));
        tracep->fullBit(oldp+3955,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip 
                                          >> 0xfU))));
        tracep->fullSData(oldp+3956,((0x7fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip)),15);
        tracep->fullBit(oldp+3957,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+3958,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->fullBit(oldp+3959,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+3960,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+3961,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+3962,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+3963,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+3964,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+3965,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+3966,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_valid[0]));
        tracep->fullBit(oldp+3967,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_valid[1]));
        tracep->fullCData(oldp+3968,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs3_addr[0]),5);
        tracep->fullCData(oldp+3969,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs3_addr[1]),5);
        tracep->fullIData(oldp+3970,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_pc_wdata[0]),32);
        tracep->fullIData(oldp+3971,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_pc_wdata[1]),32);
        tracep->fullBit(oldp+3972,((0U != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)));
        tracep->fullBit(oldp+3973,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs 
                                          >> 0x11U))));
        tracep->fullBit(oldp+3974,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs 
                                          >> 0x10U))));
        tracep->fullBit(oldp+3975,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs 
                                          >> 0xfU))));
        tracep->fullSData(oldp+3976,((0x7fffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)),15);
        tracep->fullCData(oldp+3977,(((0x4000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs)
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
        tracep->fullBit(oldp+3978,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs 
                                          >> 0x10U))));
        tracep->fullCData(oldp+3979,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 0xbU))),2);
        tracep->fullBit(oldp+3980,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                          >> 0xaU))));
        tracep->fullCData(oldp+3981,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 8U))),2);
        tracep->fullCData(oldp+3982,((0xffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
        tracep->fullBit(oldp+3983,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid));
        tracep->fullSData(oldp+3984,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
        tracep->fullCData(oldp+3985,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id),2);
        tracep->fullBit(oldp+3986,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_req_int));
        tracep->fullBit(oldp+3987,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__outstanding_load_wb));
        tracep->fullCData(oldp+3988,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev),2);
        tracep->fullBit(oldp+3989,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
        tracep->fullBit(oldp+3990,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+3991,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        tracep->fullIData(oldp+3992,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rdata_tlword),32);
        tracep->fullBit(oldp+3993,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_valid));
        tracep->fullIData(oldp+3994,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rdata_tlword),32);
        tracep->fullQData(oldp+3995,(((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                      << 1U)),33);
        tracep->fullBit(oldp+3997,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_ld_hz));
        tracep->fullBit(oldp+3998,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec));
        tracep->fullBit(oldp+3999,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec));
        tracep->fullBit(oldp+4000,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
        tracep->fullBit(oldp+4001,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
        tracep->fullBit(oldp+4002,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
        tracep->fullBit(oldp+4003,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
        tracep->fullBit(oldp+4004,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
        tracep->fullIData(oldp+4005,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                              >> 1U))),32);
        tracep->fullBit(oldp+4006,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
        tracep->fullQData(oldp+4007,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
        tracep->fullBit(oldp+4009,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec));
        tracep->fullBit(oldp+4010,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
        tracep->fullBit(oldp+4011,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
        tracep->fullBit(oldp+4012,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
        tracep->fullBit(oldp+4013,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
        tracep->fullBit(oldp+4014,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
        tracep->fullBit(oldp+4015,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
        tracep->fullBit(oldp+4016,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4017,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4018,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4019,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4020,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4021,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4022,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4023,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4024,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar))));
        tracep->fullBit(oldp+4025,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4026,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4027,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4028,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4029,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4030,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4031,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4032,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4033,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+4034,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+4035,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+4036,((0x7fU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                                       >> 0x24U)))),8);
        tracep->fullBit(oldp+4037,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar))));
        tracep->fullBit(oldp+4038,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+4039,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+4041,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4042,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4043,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4044,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4045,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4046,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4047,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4048,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4049,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                 [0U]))));
        tracep->fullBit(oldp+4050,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4051,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4052,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4053,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4054,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4055,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4056,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4057,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4058,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                 [1U]))));
        tracep->fullBit(oldp+4059,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4060,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4061,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4062,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4063,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4064,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4065,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4066,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4067,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3
                                                 [2U]))));
        tracep->fullBit(oldp+4068,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4069,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4070,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4071,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4072,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4073,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4074,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4075,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4076,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                 [0U]))));
        tracep->fullBit(oldp+4077,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4078,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4079,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4080,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4081,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4082,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4083,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4084,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4085,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4
                                                 [1U]))));
        tracep->fullBit(oldp+4086,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4087,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4088,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4089,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4090,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4091,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4092,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4093,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4094,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+4095,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4096,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4097,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4098,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4099,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4100,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4101,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4102,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4103,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+4104,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4105,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4106,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4107,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4108,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4109,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4110,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4111,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4112,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o
                                                 [2U]))));
        tracep->fullBit(oldp+4113,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4114,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4115,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4116,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4117,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4118,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4119,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4120,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4121,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+4122,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4123,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4124,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4125,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4126,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4127,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4128,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4129,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4130,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+4131,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4132,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4133,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4134,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4135,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4136,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4137,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4138,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4139,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                 [2U]))));
        tracep->fullCData(oldp+4140,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hgrant),3);
        tracep->fullCData(oldp+4141,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o),2);
        tracep->fullCData(oldp+4142,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),3);
        tracep->fullCData(oldp+4143,((6U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),3);
        tracep->fullCData(oldp+4144,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),3);
        tracep->fullIData(oldp+4145,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i),32);
        tracep->fullBit(oldp+4146,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4147,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4148,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4149,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4150,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4151,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4152,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4153,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4154,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+4155,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4156,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4157,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4158,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4159,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4160,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4161,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4162,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4163,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+4164,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4165,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4166,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4167,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4168,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4169,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4170,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4171,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4172,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+4173,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4174,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4175,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4176,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4177,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4178,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4179,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4180,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4181,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+4182,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hgrant),2);
        tracep->fullBit(oldp+4183,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4184,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4185,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4186,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4187,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4188,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4189,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4190,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4191,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+4192,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4193,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4194,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4195,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4196,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4197,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4198,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4199,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4200,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+4201,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+4202,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+4203,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                     [0U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+4205,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4206,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4207,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4208,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4209,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4210,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4211,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4212,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4213,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+4214,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4215,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4216,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4217,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4218,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4219,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4220,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4221,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4222,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+4223,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+4224,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+4225,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                     [1U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+4227,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4228,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4229,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4230,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4231,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4232,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4233,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4234,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4235,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+4236,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4237,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4238,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4239,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4240,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4241,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4242,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4243,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4244,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+4245,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+4246,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+4247,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                     [0U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+4249,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4250,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4251,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4252,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4253,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4254,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4255,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4256,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4257,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+4258,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4259,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4260,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4261,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4262,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4263,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4264,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4265,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4266,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+4267,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+4268,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+4269,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                     [1U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+4271,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4272,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4273,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4274,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4275,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4276,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4277,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4278,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4279,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+4280,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4281,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4282,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4283,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4284,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4285,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4286,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4287,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4288,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                 [2U]))));
        tracep->fullBit(oldp+4289,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                 [2U]))));
        tracep->fullBit(oldp+4290,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+4291,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                   [2U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                      [2U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                     [2U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i
                                                                              [2U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+4293,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4294,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4295,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4296,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4297,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4298,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4299,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4300,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4301,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [0U]))));
        tracep->fullBit(oldp+4302,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4303,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4304,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4305,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4306,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4307,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4308,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4309,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4310,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [1U]))));
        tracep->fullBit(oldp+4311,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4312,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4313,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4314,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4315,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4316,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4317,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4318,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4319,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [2U]))));
        tracep->fullBit(oldp+4320,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4321,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4322,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4323,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4324,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4325,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4326,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4327,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4328,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [3U]))));
        tracep->fullBit(oldp+4329,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4330,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4331,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4332,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4333,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4334,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4335,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4336,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4337,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [4U]))));
        tracep->fullBit(oldp+4338,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4339,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4340,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4341,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4342,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4343,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4344,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4345,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4346,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [5U]))));
        tracep->fullBit(oldp+4347,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4348,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4349,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4350,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4351,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4352,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4353,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4354,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4355,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [6U]))));
        tracep->fullBit(oldp+4356,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4357,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4358,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4359,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4360,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4361,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4362,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4363,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4364,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [7U]))));
        tracep->fullBit(oldp+4365,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4366,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4367,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4368,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4369,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4370,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4371,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4372,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4373,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [8U]))));
        tracep->fullBit(oldp+4374,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4375,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4376,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4377,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4378,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4379,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4380,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4381,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4382,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o
                                                 [9U]))));
        tracep->fullBit(oldp+4383,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4384,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4385,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4386,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4387,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4388,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4389,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4390,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4391,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                 [0U]))));
        tracep->fullBit(oldp+4392,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4393,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4394,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4395,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4396,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4397,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4398,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4399,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4400,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                 [1U]))));
        tracep->fullBit(oldp+4401,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4402,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4403,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4404,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4405,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4406,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4407,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4408,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4409,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                 [2U]))));
        tracep->fullBit(oldp+4410,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4411,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4412,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4413,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4414,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4415,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4416,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4417,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4418,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                 [3U]))));
        tracep->fullBit(oldp+4419,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4420,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4421,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4422,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4423,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4424,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4425,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4426,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4427,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                 [4U]))));
        tracep->fullBit(oldp+4428,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4429,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4430,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4431,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4432,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4433,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4434,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4435,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4436,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                 [5U]))));
        tracep->fullBit(oldp+4437,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4438,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4439,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4440,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4441,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4442,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4443,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4444,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4445,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                 [6U]))));
        tracep->fullBit(oldp+4446,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4447,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4448,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4449,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4450,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4451,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4452,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4453,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4454,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                 [7U]))));
        tracep->fullBit(oldp+4455,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4456,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4457,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4458,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4459,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4460,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4461,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4462,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4463,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                 [8U]))));
        tracep->fullBit(oldp+4464,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4465,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4466,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4467,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4468,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4469,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4470,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4471,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4472,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o
                                                 [9U]))));
        tracep->fullBit(oldp+4473,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4474,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4475,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4476,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4477,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4478,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4479,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4480,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4481,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                 [0U]))));
        tracep->fullBit(oldp+4482,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4483,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4484,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4485,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4486,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4487,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4488,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4489,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4490,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                 [1U]))));
        tracep->fullBit(oldp+4491,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4492,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4493,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4494,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4495,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4496,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4497,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4498,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4499,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o
                                                 [2U]))));
        tracep->fullQData(oldp+4500,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux),64);
        tracep->fullBit(oldp+4502,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+4503,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
        tracep->fullBit(oldp+4504,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+4505,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
        tracep->fullBit(oldp+4506,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+4507,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+4508,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullBit(oldp+4509,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
        tracep->fullBit(oldp+4510,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
        tracep->fullCData(oldp+4511,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 0xbU))),2);
        tracep->fullBit(oldp+4512,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                          >> 0xaU))));
        tracep->fullCData(oldp+4513,((3U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 8U))),2);
        tracep->fullCData(oldp+4514,((0xffU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
        tracep->fullBit(oldp+4515,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid));
        tracep->fullSData(oldp+4516,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
        tracep->fullBit(oldp+4517,((1U & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
        tracep->fullIData(oldp+4518,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword),32);
        tracep->fullBit(oldp+4519,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid));
        tracep->fullIData(oldp+4520,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword),32);
        tracep->fullQData(oldp+4521,(((QData)((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword)) 
                                      << 1U)),33);
        tracep->fullBit(oldp+4523,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+4524,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        tracep->fullIData(oldp+4525,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                              >> 1U))),32);
        tracep->fullBit(oldp+4526,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
        tracep->fullQData(oldp+4527,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
        tracep->fullBit(oldp+4529,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4530,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4531,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4532,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4533,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4534,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4535,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4536,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4537,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom))));
        tracep->fullBit(oldp+4538,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4539,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4540,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4541,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4542,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4543,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4544,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4545,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4546,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o))));
        tracep->fullBit(oldp+4547,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o))));
        tracep->fullCData(oldp+4548,((0x7fU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                       >> 0x24U)))),8);
        tracep->fullBit(oldp+4549,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom))));
        tracep->fullBit(oldp+4550,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+4551,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+4553,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4554,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4555,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4556,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4557,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4558,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4559,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4560,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4561,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[0U])));
        tracep->fullBit(oldp+4562,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4563,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4564,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4565,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4566,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4567,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4568,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4569,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4570,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_d_o[0U])));
        tracep->fullBit(oldp+4571,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4572,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4573,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4574,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4575,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4576,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4577,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4578,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4579,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
                                                 [0U]))));
        tracep->fullBit(oldp+4580,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4581,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4582,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4583,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4584,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4585,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4586,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4587,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4588,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2
                                                 [1U]))));
        tracep->fullBit(oldp+4589,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4590,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4591,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4592,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4593,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4594,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4595,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4596,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4597,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                 [0U]))));
        tracep->fullBit(oldp+4598,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4599,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4600,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4601,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4602,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4603,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4604,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4605,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4606,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5
                                                 [1U]))));
        tracep->fullBit(oldp+4607,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4608,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4609,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4610,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4611,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4612,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4613,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4614,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4615,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
                                                 [0U]))));
        tracep->fullBit(oldp+4616,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4617,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4618,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4619,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4620,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4621,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4622,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4623,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4624,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10
                                                 [1U]))));
        tracep->fullBit(oldp+4625,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__req_i));
        tracep->fullSData(oldp+4626,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__addr_i),12);
        tracep->fullIData(oldp+4627,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
        tracep->fullIData(oldp+4628,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
        tracep->fullBit(oldp+4629,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__we_i));
        tracep->fullCData(oldp+4630,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_we),4);
        tracep->fullBit(oldp+4631,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_ack));
        tracep->fullCData(oldp+4632,(((4U != (7U & 
                                              (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                               >> 0x12U)))
                                       ? 0U : 1U)),2);
        tracep->fullBit(oldp+4633,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__tlul_error));
        tracep->fullCData(oldp+4634,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4635,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullBit(oldp+4636,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__req_i) 
                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__we_i)))));
        tracep->fullCData(oldp+4637,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4638,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
        tracep->fullIData(oldp+4639,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
        tracep->fullIData(oldp+4640,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i),32);
        tracep->fullBit(oldp+4641,((((0U == (7U & (
                                                   vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                     | (1U == (7U & 
                                               (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                >> 0x12U)))) 
                                    | (4U == (7U & 
                                              (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                               >> 0x12U))))));
        tracep->fullBit(oldp+4642,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk) 
                                     & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk)) 
                                    & (((4U == (7U 
                                                & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                       | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullBit(oldp+4643,((0U == (7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+4644,((1U == (7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+4645,((4U == (7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+4646,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk));
        tracep->fullBit(oldp+4647,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk));
        tracep->fullBit(oldp+4648,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk));
        tracep->fullCData(oldp+4649,((0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                      << 0x1bU) 
                                                     | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[1U] 
                                                        >> 5U)))))),4);
        tracep->fullSData(oldp+4650,(((((4U != (7U 
                                                & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U)))
                                         ? 0U : 1U) 
                                       << 0xbU) | (
                                                   ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__tlul_error) 
                                                    << 0xaU) 
                                                   | (0x3ffU 
                                                      & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                         >> 5U))))),13);
        tracep->fullBit(oldp+4651,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullCData(oldp+4652,((0x1eU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_d_o[1U])),5);
        tracep->fullBit(oldp+4653,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+4654,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4655,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4656,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4657,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4658,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4659,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4660,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4661,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4662,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+4663,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4664,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4665,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4666,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4667,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4668,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4669,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4670,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4671,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+4672,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4673,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4674,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4675,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4676,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4677,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4678,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4679,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4680,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+4681,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4682,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4683,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4684,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4685,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4686,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4687,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4688,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4689,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullBit(oldp+4690,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4691,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4692,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4693,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4694,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4695,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4696,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4697,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4698,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+4699,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4700,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4701,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4702,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4703,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4704,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4705,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4706,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4707,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+4708,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrequest),2);
        tracep->fullCData(oldp+4709,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hgrant),2);
        tracep->fullBit(oldp+4710,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4711,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4712,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4713,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4714,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4715,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4716,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4717,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4718,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+4719,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrequest))));
        tracep->fullBit(oldp+4720,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4721,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4722,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4723,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4724,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4725,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4726,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4727,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4728,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+4729,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+4730,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+4731,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4732,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4733,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4734,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4735,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4736,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4737,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4738,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4739,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+4740,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2380[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[0U]);
        __Vtemp2380[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[1U]));
        __Vtemp2380[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+4741,(__Vtemp2380),85);
        tracep->fullBit(oldp+4744,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+4745,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+4748,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullBit(oldp+4751,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullWData(oldp+4752,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+4755,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+4756,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+4757,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+4758,((2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+4759,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+4760,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4761,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4762,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4763,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4764,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4765,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4766,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4767,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4768,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+4769,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4770,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4771,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4772,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4773,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4774,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4775,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4776,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4777,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+4778,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4779,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4780,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4781,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4782,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4783,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4784,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4785,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4786,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+4787,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4788,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4789,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4790,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4791,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4792,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+4793,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4794,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+4795,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullBit(oldp+4796,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4797,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4798,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4799,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4800,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4801,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4802,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4803,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4804,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+4805,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4806,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4807,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4808,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4809,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4810,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4811,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4812,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4813,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+4814,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrequest),2);
        tracep->fullCData(oldp+4815,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hgrant),2);
        tracep->fullBit(oldp+4816,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4817,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4818,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4819,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4820,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4821,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4822,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4823,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4824,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+4825,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrequest))));
        tracep->fullBit(oldp+4826,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4827,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4828,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4829,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4830,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4831,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4832,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4833,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4834,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+4835,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+4836,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+4837,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4838,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4839,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4840,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4841,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4842,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4843,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4844,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4845,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+4846,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2402[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[0U]);
        __Vtemp2402[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[1U]));
        __Vtemp2402[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+4847,(__Vtemp2402),85);
        tracep->fullBit(oldp+4850,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+4851,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+4854,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullBit(oldp+4857,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullWData(oldp+4858,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+4861,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+4862,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+4863,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+4864,((2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+4865,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+4866,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4867,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4868,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4869,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4870,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4871,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4872,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4873,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4874,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+4875,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4876,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4877,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4878,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4879,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4880,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4881,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4882,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4883,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+4884,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4885,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4886,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4887,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4888,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4889,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4890,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4891,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4892,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+4893,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4894,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4895,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4896,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4897,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4898,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4899,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4900,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4901,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+4902,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hgrant),2);
        tracep->fullBit(oldp+4903,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullBit(oldp+4904,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4905,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4906,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4907,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4908,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4909,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4910,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4911,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4912,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+4913,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4914,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4915,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4916,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4917,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4918,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4919,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4920,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4921,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+4922,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+4923,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+4924,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                     [0U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+4926,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4927,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4928,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4929,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4930,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4931,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4932,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4933,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4934,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+4935,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4936,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4937,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4938,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4939,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4940,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4941,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4942,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4943,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+4944,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4945,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4946,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4947,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4948,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4949,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4950,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4951,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4952,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+4953,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+4954,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                 [1U]))));
        __Vtemp2406[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2406[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2406[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+4955,(__Vtemp2406),85);
        tracep->fullBit(oldp+4958,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+4959,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+4960,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                     [1U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+4962,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4963,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4964,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4965,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4966,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4967,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4968,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4969,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4970,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+4971,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4972,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4973,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4974,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4975,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4976,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4977,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4978,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4979,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+4980,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+4981,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+4982,((((QData)((IData)(
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
        tracep->fullBit(oldp+4984,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4985,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4986,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4987,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4988,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4989,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4990,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4991,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4992,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+4993,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4994,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4995,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4996,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4997,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4998,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4999,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5000,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5001,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+5002,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5003,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5004,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5005,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5006,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5007,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5008,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5009,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5010,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+5011,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+5012,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                 [1U]))));
        __Vtemp2410[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2410[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2410[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+5013,(__Vtemp2410),85);
        tracep->fullBit(oldp+5016,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+5017,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+5018,((((QData)((IData)(
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
        tracep->fullBit(oldp+5020,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5021,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5022,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5023,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5024,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5025,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5026,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5027,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5028,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+5029,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5030,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5031,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5032,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5033,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5034,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5035,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5036,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5037,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+5038,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+5039,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+5040,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                     [0U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5042,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5043,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5044,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5045,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5046,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5047,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5048,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5049,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5050,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+5051,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5052,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5053,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5054,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5055,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5056,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5057,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5058,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5059,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+5060,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+5061,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+5062,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                     [1U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5064,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5065,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5066,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5067,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5068,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5069,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5070,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5071,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5072,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_d_o[0U])));
        tracep->fullBit(oldp+5073,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5074,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5075,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5076,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5077,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5078,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5079,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5080,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5081,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_d_o[0U])));
        tracep->fullBit(oldp+5082,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5083,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5084,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5085,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5086,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5087,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5088,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5089,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5090,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                 [0U]))));
        tracep->fullBit(oldp+5091,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5092,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5093,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5094,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5095,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5096,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5097,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5098,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5099,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6
                                                 [1U]))));
        tracep->fullBit(oldp+5100,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5101,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5102,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5103,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5104,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5105,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5106,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5107,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5108,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
                                                 [0U]))));
        tracep->fullBit(oldp+5109,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5110,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5111,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5112,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5113,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5114,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5115,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5116,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5117,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7
                                                 [1U]))));
        tracep->fullBit(oldp+5118,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5119,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5120,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5121,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5122,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5123,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5124,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5125,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5126,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+5127,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5128,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5129,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5130,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5131,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5132,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5133,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5134,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5135,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+5136,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5137,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5138,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5139,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5140,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5141,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5142,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5143,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5144,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+5145,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5146,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5147,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5148,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5149,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5150,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5151,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5152,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5153,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullBit(oldp+5154,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5155,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5156,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5157,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5158,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5159,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5160,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5161,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5162,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+5163,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5164,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5165,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5166,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5167,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5168,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5169,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5170,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5171,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+5172,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrequest),2);
        tracep->fullCData(oldp+5173,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hgrant),2);
        tracep->fullBit(oldp+5174,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5175,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5176,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5177,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5178,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5179,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5180,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5181,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5182,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+5183,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrequest))));
        tracep->fullBit(oldp+5184,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5185,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5186,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5187,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5188,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5189,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5190,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5191,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5192,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+5193,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+5194,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+5195,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5196,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5197,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5198,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5199,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5200,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5201,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5202,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5203,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+5204,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5205,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5206,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5207,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5208,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5209,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5210,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5211,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5212,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+5213,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2432[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[0U]);
        __Vtemp2432[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[1U]));
        __Vtemp2432[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+5214,(__Vtemp2432),85);
        tracep->fullBit(oldp+5217,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+5218,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+5221,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullBit(oldp+5224,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullWData(oldp+5225,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+5228,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+5229,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+5230,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+5231,((2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+5232,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+5233,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5234,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5235,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5236,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5237,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5238,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5239,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5240,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5241,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+5242,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5243,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5244,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5245,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5246,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5247,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5248,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5249,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5250,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                    [1U][0U])));
        tracep->fullBit(oldp+5251,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5252,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5253,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5254,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5255,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5256,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5257,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5258,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5259,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+5260,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5261,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5262,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5263,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5264,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5265,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5266,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5267,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5268,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+5269,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5270,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5271,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5272,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5273,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5274,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5275,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5276,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5277,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+5278,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5279,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5280,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5281,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5282,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5283,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5284,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5285,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5286,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullBit(oldp+5287,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5288,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5289,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5290,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5291,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5292,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5293,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5294,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5295,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+5296,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5297,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5298,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5299,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5300,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5301,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5302,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5303,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5304,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+5305,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrequest),2);
        tracep->fullCData(oldp+5306,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hgrant),2);
        tracep->fullBit(oldp+5307,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5308,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5309,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5310,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5311,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5312,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5313,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5314,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5315,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+5316,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrequest))));
        tracep->fullBit(oldp+5317,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5318,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5319,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5320,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5321,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5322,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5323,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5324,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5325,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+5326,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+5327,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+5328,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5329,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5330,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5331,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5332,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5333,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5334,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5335,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5336,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+5337,((0xfeU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+5338,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+5339,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5340,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5341,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5342,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5343,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5344,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5345,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5346,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5347,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+5348,((1U | (0xfeU & 
                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+5349,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+5350,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2476[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[0U]);
        __Vtemp2476[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[1U]));
        __Vtemp2476[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+5351,(__Vtemp2476),85);
        tracep->fullBit(oldp+5354,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+5355,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+5358,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullBit(oldp+5361,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullWData(oldp+5362,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+5365,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+5366,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+5367,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+5368,((2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+5369,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+5370,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5371,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5372,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5373,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5374,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5375,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5376,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5377,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5378,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+5379,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5380,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5381,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5382,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5383,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5384,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5385,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5386,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5387,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+5388,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5389,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5390,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5391,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5392,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5393,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5394,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5395,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5396,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+5397,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+5398,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                 [0U]))));
        __Vtemp2480[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2480[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2480[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+5399,(__Vtemp2480),85);
        tracep->fullBit(oldp+5402,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+5403,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+5404,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                     [0U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5406,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5407,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5408,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5409,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5410,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5411,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5412,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5413,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5414,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+5415,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5416,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5417,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5418,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5419,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5420,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5421,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5422,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5423,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+5424,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5425,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5426,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5427,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5428,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5429,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5430,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5431,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5432,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+5433,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+5434,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                 [1U]))));
        __Vtemp2484[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2484[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2484[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+5435,(__Vtemp2484),85);
        tracep->fullBit(oldp+5438,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+5439,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+5440,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                     [1U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5442,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5443,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5444,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5445,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5446,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5447,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5448,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5449,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5450,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+5451,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5452,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5453,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5454,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5455,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5456,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5457,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5458,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5459,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+5460,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5461,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5462,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5463,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5464,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5465,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5466,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5467,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5468,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+5469,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+5470,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                 [0U]))));
        __Vtemp2488[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2488[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2488[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+5471,(__Vtemp2488),85);
        tracep->fullBit(oldp+5474,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+5475,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+5476,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                     [0U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5478,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5479,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5480,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5481,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5482,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5483,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5484,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5485,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5486,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+5487,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5488,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5489,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5490,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5491,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5492,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5493,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5494,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5495,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+5496,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+5497,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+5498,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+5499,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+5500,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+5501,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5502,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+5503,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+5504,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+5505,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+5506,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                 [1U]))));
        __Vtemp2492[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2492[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2492[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+5507,(__Vtemp2492),85);
        tracep->fullBit(oldp+5510,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+5511,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+5512,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                     [1U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+5514,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5515,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5516,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5517,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5518,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5519,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5520,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5521,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5522,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_d_o[0U])));
        tracep->fullCData(oldp+5523,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__dev_sel_s1n_14),4);
        tracep->fullCData(oldp+5524,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
        tracep->fullBit(oldp+5525,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5526,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5527,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5528,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5529,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5530,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_o[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5531,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_o[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5532,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_o[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5533,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_o[0U])));
        tracep->fullBit(oldp+5534,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__hold_all_requests));
        tracep->fullBit(oldp+5535,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5536,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5537,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5538,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5539,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5540,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5541,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5542,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5543,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [0U][0U])));
        tracep->fullBit(oldp+5544,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5545,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5546,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5547,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5548,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5549,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5550,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5551,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5552,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [1U][0U])));
        tracep->fullBit(oldp+5553,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5554,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5555,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5556,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5557,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5558,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5559,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5560,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5561,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [2U][0U])));
        tracep->fullBit(oldp+5562,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5563,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5564,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5565,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5566,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5567,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5568,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5569,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5570,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [3U][0U])));
        tracep->fullBit(oldp+5571,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5572,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5573,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5574,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5575,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5576,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5577,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5578,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5579,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [4U][0U])));
        tracep->fullBit(oldp+5580,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5581,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5582,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5583,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5584,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5585,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5586,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5587,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5588,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [5U][0U])));
        tracep->fullBit(oldp+5589,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5590,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5591,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5592,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5593,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5594,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5595,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5596,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5597,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [6U][0U])));
        tracep->fullBit(oldp+5598,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5599,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5600,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5601,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5602,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5603,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5604,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5605,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5606,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [7U][0U])));
        tracep->fullBit(oldp+5607,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5608,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5609,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5610,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5611,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5612,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5613,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5614,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5615,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [8U][0U])));
        tracep->fullBit(oldp+5616,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5617,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5618,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5619,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5620,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5621,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5622,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5623,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5624,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [9U][0U])));
        tracep->fullBit(oldp+5625,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [0xaU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5626,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5627,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5628,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5629,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5630,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xaU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0xaU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+5631,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xaU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [0xaU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5632,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xaU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0xaU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+5633,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [0xaU][0U])));
        tracep->fullBit(oldp+5634,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [0xbU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5635,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xbU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5636,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xbU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5637,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xbU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5638,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xbU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5639,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xbU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0xbU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+5640,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xbU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [0xbU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5641,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xbU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0xbU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+5642,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [0xbU][0U])));
        tracep->fullBit(oldp+5643,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [0xcU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5644,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xcU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5645,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xcU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5646,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xcU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5647,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xcU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5648,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xcU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0xcU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+5649,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xcU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [0xcU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5650,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xcU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0xcU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+5651,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [0xcU][0U])));
        tracep->fullBit(oldp+5652,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [0xdU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5653,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xdU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5654,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xdU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5655,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xdU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5656,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xdU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5657,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xdU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0xdU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+5658,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xdU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [0xdU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5659,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xdU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0xdU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+5660,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [0xdU][0U])));
        tracep->fullBit(oldp+5661,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullWData(oldp+5662,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
        tracep->fullBit(oldp+5665,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_d_o[0U])));
        tracep->fullBit(oldp+5666,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [0xdU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5667,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xdU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5668,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xdU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5669,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xdU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5670,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xdU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5671,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xdU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0xdU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+5672,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xdU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [0xdU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5673,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xdU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0xdU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+5674,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [0xdU][0U])));
        tracep->fullBit(oldp+5675,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5676,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5677,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5678,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5679,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5680,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5681,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5682,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5683,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+5684,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5685,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5686,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5687,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5688,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5689,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5690,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5691,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5692,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                    [1U][0U])));
        tracep->fullBit(oldp+5693,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5694,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5695,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5696,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5697,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5698,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5699,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5700,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5701,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+5702,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5703,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5704,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5705,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5706,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5707,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5708,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5709,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5710,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullCData(oldp+5711,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrequest),2);
        tracep->fullBit(oldp+5712,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5713,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5714,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5715,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5716,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5717,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5718,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5719,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5720,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+5721,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrequest))));
        tracep->fullBit(oldp+5722,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5723,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5724,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5725,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5726,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5727,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5728,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5729,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5730,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullBit(oldp+5731,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5732,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5733,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5734,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5735,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5736,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5737,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5738,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5739,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+5740,((0xfeU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+5741,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+5742,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5743,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5744,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5745,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5746,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5747,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5748,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5749,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5750,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+5751,((1U | (0xfeU & 
                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+5752,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+5753,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2671[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[0U]);
        __Vtemp2671[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[1U]));
        __Vtemp2671[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+5754,(__Vtemp2671),85);
        tracep->fullBit(oldp+5757,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+5758,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+5761,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullBit(oldp+5764,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullWData(oldp+5765,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+5768,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+5769,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+5770,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+5771,((2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+5772,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+5773,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5774,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5775,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5776,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5777,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5778,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5779,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5780,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5781,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+5782,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2675[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2675[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2675[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+5783,(__Vtemp2675),85);
        tracep->fullBit(oldp+5786,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+5787,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5788,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5789,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5790,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5791,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5792,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+5793,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5794,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+5795,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+5796,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2679[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2679[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2679[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+5797,(__Vtemp2679),85);
        tracep->fullBit(oldp+5800,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullBit(oldp+5801,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5802,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5803,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5804,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5805,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5806,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5807,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5808,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5809,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [0U][0U])));
        tracep->fullBit(oldp+5810,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [0U][2U] 
                                          >> 0x15U))));
        __Vtemp2694[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0U][0U]);
        __Vtemp2694[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [0U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0U][1U]));
        __Vtemp2694[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [0U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0U][2U]));
        tracep->fullWData(oldp+5811,(__Vtemp2694),85);
        tracep->fullBit(oldp+5814,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [0U][0U])));
        tracep->fullBit(oldp+5815,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5816,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5817,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5818,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5819,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5820,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5821,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5822,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5823,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [1U][0U])));
        tracep->fullBit(oldp+5824,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [1U][2U] 
                                          >> 0x15U))));
        __Vtemp2710[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [1U][0U]);
        __Vtemp2710[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [1U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [1U][1U]));
        __Vtemp2710[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [1U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [1U][2U]));
        tracep->fullWData(oldp+5825,(__Vtemp2710),85);
        tracep->fullBit(oldp+5828,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [1U][0U])));
        tracep->fullBit(oldp+5829,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5830,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5831,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5832,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5833,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5834,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5835,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5836,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5837,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [2U][0U])));
        tracep->fullBit(oldp+5838,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [2U][2U] 
                                          >> 0x15U))));
        __Vtemp2726[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [2U][0U]);
        __Vtemp2726[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [2U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [2U][1U]));
        __Vtemp2726[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [2U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [2U][2U]));
        tracep->fullWData(oldp+5839,(__Vtemp2726),85);
        tracep->fullBit(oldp+5842,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [2U][0U])));
        tracep->fullBit(oldp+5843,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5844,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5845,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5846,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5847,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5848,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5849,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5850,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5851,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [3U][0U])));
        tracep->fullBit(oldp+5852,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [3U][2U] 
                                          >> 0x15U))));
        __Vtemp2742[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [3U][0U]);
        __Vtemp2742[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [3U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [3U][1U]));
        __Vtemp2742[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [3U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [3U][2U]));
        tracep->fullWData(oldp+5853,(__Vtemp2742),85);
        tracep->fullBit(oldp+5856,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [3U][0U])));
        tracep->fullBit(oldp+5857,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5858,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5859,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5860,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5861,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5862,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5863,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5864,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5865,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [4U][0U])));
        tracep->fullBit(oldp+5866,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [4U][2U] 
                                          >> 0x15U))));
        __Vtemp2758[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [4U][0U]);
        __Vtemp2758[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [4U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [4U][1U]));
        __Vtemp2758[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [4U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [4U][2U]));
        tracep->fullWData(oldp+5867,(__Vtemp2758),85);
        tracep->fullBit(oldp+5870,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [4U][0U])));
        tracep->fullBit(oldp+5871,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5872,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5873,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5874,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5875,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5876,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5877,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5878,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5879,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [5U][0U])));
        tracep->fullBit(oldp+5880,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [5U][2U] 
                                          >> 0x15U))));
        __Vtemp2774[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [5U][0U]);
        __Vtemp2774[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [5U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [5U][1U]));
        __Vtemp2774[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [5U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [5U][2U]));
        tracep->fullWData(oldp+5881,(__Vtemp2774),85);
        tracep->fullBit(oldp+5884,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [5U][0U])));
        tracep->fullBit(oldp+5885,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5886,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5887,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5888,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5889,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5890,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5891,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5892,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5893,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [6U][0U])));
        tracep->fullBit(oldp+5894,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [6U][2U] 
                                          >> 0x15U))));
        __Vtemp2790[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [6U][0U]);
        __Vtemp2790[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [6U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [6U][1U]));
        __Vtemp2790[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [6U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [6U][2U]));
        tracep->fullWData(oldp+5895,(__Vtemp2790),85);
        tracep->fullBit(oldp+5898,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [6U][0U])));
        tracep->fullBit(oldp+5899,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5900,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5901,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5902,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5903,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5904,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5905,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5906,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5907,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [7U][0U])));
        tracep->fullBit(oldp+5908,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [7U][2U] 
                                          >> 0x15U))));
        __Vtemp2806[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [7U][0U]);
        __Vtemp2806[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [7U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [7U][1U]));
        __Vtemp2806[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [7U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [7U][2U]));
        tracep->fullWData(oldp+5909,(__Vtemp2806),85);
        tracep->fullBit(oldp+5912,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [7U][0U])));
        tracep->fullBit(oldp+5913,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5914,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5915,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5916,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5917,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5918,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5919,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5920,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5921,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [8U][0U])));
        tracep->fullBit(oldp+5922,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [8U][2U] 
                                          >> 0x15U))));
        __Vtemp2822[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [8U][0U]);
        __Vtemp2822[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [8U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [8U][1U]));
        __Vtemp2822[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [8U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [8U][2U]));
        tracep->fullWData(oldp+5923,(__Vtemp2822),85);
        tracep->fullBit(oldp+5926,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [8U][0U])));
        tracep->fullBit(oldp+5927,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5928,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5929,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5930,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5931,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5932,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+5933,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5934,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+5935,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [9U][0U])));
        tracep->fullBit(oldp+5936,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [9U][2U] 
                                          >> 0x15U))));
        __Vtemp2838[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [9U][0U]);
        __Vtemp2838[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [9U][1U]) | (0xfffffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [9U][1U]));
        __Vtemp2838[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [9U][2U]) | (0x1ffffeU 
                                         & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [9U][2U]));
        tracep->fullWData(oldp+5937,(__Vtemp2838),85);
        tracep->fullBit(oldp+5940,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [9U][0U])));
        tracep->fullBit(oldp+5941,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [0xaU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5942,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5943,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5944,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5945,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xaU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5946,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xaU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0xaU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+5947,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xaU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [0xaU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5948,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xaU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0xaU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+5949,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [0xaU][0U])));
        tracep->fullBit(oldp+5950,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [0xaU][2U] 
                                          >> 0x15U))));
        __Vtemp2854[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0xaU][0U]);
        __Vtemp2854[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [0xaU][1U]) | (0xfffffffeU 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                           [0xaU][1U]));
        __Vtemp2854[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [0xaU][2U]) | (0x1ffffeU 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                           [0xaU][2U]));
        tracep->fullWData(oldp+5951,(__Vtemp2854),85);
        tracep->fullBit(oldp+5954,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [0xaU][0U])));
        tracep->fullBit(oldp+5955,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [0xbU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5956,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xbU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5957,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xbU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5958,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xbU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5959,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xbU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5960,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xbU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0xbU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+5961,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xbU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [0xbU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5962,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xbU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0xbU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+5963,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [0xbU][0U])));
        tracep->fullBit(oldp+5964,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [0xbU][2U] 
                                          >> 0x15U))));
        __Vtemp2870[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0xbU][0U]);
        __Vtemp2870[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [0xbU][1U]) | (0xfffffffeU 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                           [0xbU][1U]));
        __Vtemp2870[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [0xbU][2U]) | (0x1ffffeU 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                           [0xbU][2U]));
        tracep->fullWData(oldp+5965,(__Vtemp2870),85);
        tracep->fullBit(oldp+5968,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [0xbU][0U])));
        tracep->fullBit(oldp+5969,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [0xcU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+5970,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xcU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+5971,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xcU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+5972,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                            [0xcU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+5973,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xcU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+5974,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xcU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0xcU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+5975,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xcU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                                 [0xcU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+5976,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xcU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                         [0xcU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+5977,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [0xcU][0U])));
        tracep->fullBit(oldp+5978,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                          [0xcU][2U] 
                                          >> 0x15U))));
        __Vtemp2886[0U] = (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                           [0xcU][0U]);
        __Vtemp2886[1U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [0xcU][1U]) | (0xfffffffeU 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                           [0xcU][1U]));
        __Vtemp2886[2U] = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                            [0xcU][2U]) | (0x1ffffeU 
                                           & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                           [0xcU][2U]));
        tracep->fullWData(oldp+5979,(__Vtemp2886),85);
        tracep->fullBit(oldp+5982,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                    [0xcU][0U])));
        tracep->fullIData(oldp+5983,((0xfffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__cio_gpio_q)),20);
        tracep->fullIData(oldp+5984,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__cio_gpio_q),32);
        tracep->fullIData(oldp+5985,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__cio_gpio_en_q),32);
        tracep->fullCData(oldp+5986,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__irq_id_o[0]),5);
        tracep->fullBit(oldp+5987,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 7U))));
        tracep->fullBit(oldp+5988,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 6U))));
        tracep->fullBit(oldp+5989,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 9U))));
        tracep->fullBit(oldp+5990,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 8U))));
        tracep->fullBit(oldp+5991,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xbU))));
        tracep->fullBit(oldp+5992,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+5993,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+5994,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+5995,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+5996,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+5997,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+5998,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+5999,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+6000,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+6001,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+6002,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+6003,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+6004,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+6005,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+6006,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+6007,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+6008,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+6009,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+6010,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+6011,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+6012,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+6013,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 1U))));
        tracep->fullBit(oldp+6014,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U])));
        tracep->fullBit(oldp+6015,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 3U))));
        tracep->fullBit(oldp+6016,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 2U))));
        tracep->fullBit(oldp+6017,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 5U))));
        tracep->fullBit(oldp+6018,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 4U))));
        tracep->fullBit(oldp+6019,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 7U))));
        tracep->fullBit(oldp+6020,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 6U))));
        tracep->fullBit(oldp+6021,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 9U))));
        tracep->fullBit(oldp+6022,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 8U))));
        tracep->fullBit(oldp+6023,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xbU))));
        tracep->fullBit(oldp+6024,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+6025,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+6026,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+6027,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+6028,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+6029,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+6030,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+6031,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+6032,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+6033,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+6034,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+6035,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+6036,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+6037,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+6038,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+6039,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+6040,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+6041,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+6042,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+6043,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+6044,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+6045,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 1U))));
        tracep->fullBit(oldp+6046,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[2U])));
        tracep->fullBit(oldp+6047,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 3U))));
        tracep->fullBit(oldp+6048,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 2U))));
        tracep->fullBit(oldp+6049,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 5U))));
        tracep->fullBit(oldp+6050,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 4U))));
        tracep->fullCData(oldp+6051,((0x3fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U])),6);
        tracep->fullIData(oldp+6052,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__ip),32);
        tracep->fullCData(oldp+6053,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__claim_id[0]),5);
        tracep->fullCData(oldp+6054,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__cc_id[0]),5);
        tracep->fullCData(oldp+6055,((0x3fU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U])),6);
        tracep->fullBit(oldp+6056,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 6U))));
        tracep->fullBit(oldp+6057,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 7U))));
        tracep->fullBit(oldp+6058,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 8U))));
        tracep->fullBit(oldp+6059,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 9U))));
        tracep->fullBit(oldp+6060,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+6061,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xbU))));
        tracep->fullBit(oldp+6062,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+6063,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+6064,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+6065,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+6066,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+6067,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+6068,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+6069,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+6070,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+6071,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+6072,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+6073,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+6074,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+6075,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+6076,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+6077,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+6078,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+6079,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+6080,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+6081,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[0U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+6082,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U])));
        tracep->fullBit(oldp+6083,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 1U))));
        tracep->fullBit(oldp+6084,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 2U))));
        tracep->fullBit(oldp+6085,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 3U))));
        tracep->fullBit(oldp+6086,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 4U))));
        tracep->fullBit(oldp+6087,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 5U))));
        tracep->fullBit(oldp+6088,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 6U))));
        tracep->fullBit(oldp+6089,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 7U))));
        tracep->fullBit(oldp+6090,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 8U))));
        tracep->fullBit(oldp+6091,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 9U))));
        tracep->fullBit(oldp+6092,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+6093,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xbU))));
        tracep->fullBit(oldp+6094,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+6095,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+6096,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+6097,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+6098,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+6099,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+6100,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+6101,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+6102,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+6103,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+6104,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+6105,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+6106,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+6107,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+6108,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+6109,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+6110,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+6111,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+6112,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+6113,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[1U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+6114,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[2U])));
        tracep->fullBit(oldp+6115,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 1U))));
        tracep->fullBit(oldp+6116,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 2U))));
        tracep->fullBit(oldp+6117,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 3U))));
        tracep->fullBit(oldp+6118,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 4U))));
        tracep->fullBit(oldp+6119,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[2U] 
                                          >> 5U))));
        tracep->fullIData(oldp+6120,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[7U] 
                                       << 0xaU) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U] 
                                                   >> 0x16U))),32);
        tracep->fullBit(oldp+6121,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U] 
                                          >> 0x15U))));
        tracep->fullIData(oldp+6122,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U] 
                                       << 0xbU) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[5U] 
                                                   >> 0x15U))),32);
        tracep->fullBit(oldp+6123,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[5U] 
                                          >> 0x14U))));
        tracep->fullIData(oldp+6124,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[5U] 
                                       << 0xcU) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[4U] 
                                                   >> 0x14U))),32);
        tracep->fullSData(oldp+6125,((0x3ffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[5U] 
                                                 << 0x16U) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[4U] 
                                                   >> 0xaU)))),10);
        tracep->fullSData(oldp+6126,((0x3ffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[4U])),10);
        tracep->fullSData(oldp+6127,((0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[3U] 
                                                    >> 0x10U)))),16);
        tracep->fullSData(oldp+6128,((0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[3U])),16);
        tracep->fullIData(oldp+6129,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[2U]),32);
        tracep->fullSData(oldp+6130,((0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[1U] 
                                                    >> 0x10U)))),16);
        tracep->fullSData(oldp+6131,((0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[1U])),16);
        tracep->fullSData(oldp+6132,((0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[0U] 
                                                    >> 0x10U)))),16);
        tracep->fullSData(oldp+6133,((0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[0U])),16);
        tracep->fullIData(oldp+6134,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[5U] 
                                       << 0xcU) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[4U] 
                                                   >> 0x14U))),32);
        tracep->fullSData(oldp+6135,((0x3ffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[5U] 
                                                 << 0x16U) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[4U] 
                                                   >> 0xaU)))),10);
        tracep->fullSData(oldp+6136,((0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[3U] 
                                                    >> 0x10U)))),16);
        tracep->fullIData(oldp+6137,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[2U]),32);
        tracep->fullSData(oldp+6138,((0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[1U] 
                                                    >> 0x10U)))),16);
        tracep->fullSData(oldp+6139,((0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[1U])),16);
        tracep->fullSData(oldp+6140,((0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[0U] 
                                                    >> 0x10U)))),16);
        tracep->fullSData(oldp+6141,((0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[0U])),16);
        tracep->fullBit(oldp+6142,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U] 
                                          >> 0x15U))));
        tracep->fullIData(oldp+6143,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[7U] 
                                       << 0xaU) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U] 
                                                   >> 0x16U))),32);
        tracep->fullBit(oldp+6144,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_state_we) 
                                          | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U] 
                                             >> 0x15U)))));
        tracep->fullBit(oldp+6145,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[5U] 
                                          >> 0x14U))));
        tracep->fullIData(oldp+6146,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[6U] 
                                       << 0xbU) | (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[5U] 
                                                   >> 0x15U))),32);
        tracep->fullSData(oldp+6147,((0x3ffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[5U] 
                                                 << 0x16U) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[4U] 
                                                   >> 0xaU)))),16);
        tracep->fullSData(oldp+6148,((0x3ffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[4U])),16);
        tracep->fullSData(oldp+6149,((0xffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[3U])),16);
        tracep->fullCData(oldp+6150,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_mux_id),3);
        tracep->fullBit(oldp+6151,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
        tracep->fullBit(oldp+6152,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
        tracep->fullCData(oldp+6153,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_cause),6);
        tracep->fullBit(oldp+6154,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
        tracep->fullIData(oldp+6155,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n),32);
        tracep->fullBit(oldp+6156,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)));
        tracep->fullBit(oldp+6157,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_cause) 
                                          >> 5U))));
        tracep->fullIData(oldp+6158,((0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)),32);
        tracep->fullIData(oldp+6159,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
        tracep->fullCData(oldp+6160,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt),6);
        tracep->fullIData(oldp+6161,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
        tracep->fullQData(oldp+6162,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext),33);
        tracep->fullBit(oldp+6164,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext));
        tracep->fullIData(oldp+6165,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
        tracep->fullIData(oldp+6166,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
        tracep->fullBit(oldp+6167,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
        tracep->fullIData(oldp+6168,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]),32);
        tracep->fullIData(oldp+6169,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]),32);
        tracep->fullIData(oldp+6170,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]),32);
        tracep->fullQData(oldp+6171,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_order[0]),64);
        tracep->fullQData(oldp+6173,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_order[1]),64);
        tracep->fullIData(oldp+6175,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_insn[0]),32);
        tracep->fullIData(oldp+6176,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_insn[1]),32);
        tracep->fullBit(oldp+6177,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_trap[0]));
        tracep->fullBit(oldp+6178,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_trap[1]));
        tracep->fullBit(oldp+6179,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_halt[0]));
        tracep->fullBit(oldp+6180,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_halt[1]));
        tracep->fullBit(oldp+6181,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_intr[0]));
        tracep->fullBit(oldp+6182,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_intr[1]));
        tracep->fullCData(oldp+6183,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_ixl[0]),2);
        tracep->fullCData(oldp+6184,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_ixl[1]),2);
        tracep->fullCData(oldp+6185,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs1_addr[0]),5);
        tracep->fullCData(oldp+6186,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs1_addr[1]),5);
        tracep->fullCData(oldp+6187,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs2_addr[0]),5);
        tracep->fullCData(oldp+6188,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs2_addr[1]),5);
        tracep->fullIData(oldp+6189,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs1_rdata[0]),32);
        tracep->fullIData(oldp+6190,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs1_rdata[1]),32);
        tracep->fullIData(oldp+6191,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs2_rdata[0]),32);
        tracep->fullIData(oldp+6192,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs2_rdata[1]),32);
        tracep->fullCData(oldp+6193,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rd_addr[0]),5);
        tracep->fullCData(oldp+6194,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rd_addr[1]),5);
        tracep->fullIData(oldp+6195,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rd_wdata[0]),32);
        tracep->fullIData(oldp+6196,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rd_wdata[1]),32);
        tracep->fullIData(oldp+6197,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_addr[0]),32);
        tracep->fullIData(oldp+6198,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_addr[1]),32);
        tracep->fullCData(oldp+6199,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_rmask[0]),4);
        tracep->fullCData(oldp+6200,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_rmask[1]),4);
        tracep->fullCData(oldp+6201,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_wmask[0]),4);
        tracep->fullCData(oldp+6202,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_wmask[1]),4);
        tracep->fullIData(oldp+6203,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_rdata[0]),32);
        tracep->fullIData(oldp+6204,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_rdata[1]),32);
        tracep->fullCData(oldp+6205,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_op),2);
        tracep->fullBit(oldp+6206,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_intr_d));
        tracep->fullCData(oldp+6207,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rs1_addr_d),5);
        tracep->fullCData(oldp+6208,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rs2_addr_d),5);
        tracep->fullCData(oldp+6209,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_mem_mask_int),4);
        tracep->fullCData(oldp+6210,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry),3);
        tracep->fullBit(oldp+6211,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
        tracep->fullBit(oldp+6212,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid));
        tracep->fullCData(oldp+6213,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d),2);
        tracep->fullSData(oldp+6214,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_addr),12);
        tracep->fullCData(oldp+6215,((0x1fU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_addr))),5);
        tracep->fullBit(oldp+6216,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr));
        tracep->fullCData(oldp+6217,((7U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                            >> 5U))),3);
        tracep->fullCData(oldp+6218,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__dev_select_outstanding),2);
        tracep->fullCData(oldp+6219,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_opcode),3);
        tracep->fullCData(oldp+6220,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_source),8);
        tracep->fullCData(oldp+6221,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_size),2);
        tracep->fullQData(oldp+6222,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[0]),34);
        tracep->fullQData(oldp+6224,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[1]),34);
        tracep->fullQData(oldp+6226,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[2]),34);
        tracep->fullQData(oldp+6228,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[3]),34);
        tracep->fullCData(oldp+6230,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__state_q),3);
        tracep->fullCData(oldp+6231,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__address_q),7);
        tracep->fullIData(oldp+6232,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__data_q),32);
        tracep->fullCData(oldp+6233,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_q),2);
        tracep->fullBit(oldp+6234,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6235,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6236,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6237,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6238,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6239,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6240,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6241,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6242,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o))));
        tracep->fullBit(oldp+6243,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6244,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6245,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6246,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6247,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6248,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6249,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6250,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6251,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o))));
        tracep->fullIData(oldp+6252,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dmi_rsp 
                                              >> 2U))),32);
        tracep->fullCData(oldp+6253,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dmi_rsp))),2);
        tracep->fullQData(oldp+6254,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dmi_rsp),34);
        tracep->fullCData(oldp+6256,((0x7fU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req 
                                                       >> 0x22U)))),7);
        tracep->fullCData(oldp+6257,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req 
                                                    >> 0x20U)))),2);
        tracep->fullIData(oldp+6258,((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req)),32);
        tracep->fullBit(oldp+6259,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req_valid));
        tracep->fullQData(oldp+6260,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req),41);
        tracep->fullCData(oldp+6262,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_wptr__DOT__intq),3);
        tracep->fullBit(oldp+6263,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq));
        tracep->fullBit(oldp+6264,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                          >> 1U))));
        tracep->fullBit(oldp+6265,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q)));
        tracep->fullBit(oldp+6266,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__resumereq));
        tracep->fullIData(oldp+6267,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel),20);
        tracep->fullIData(oldp+6268,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum0),32);
        tracep->fullIData(oldp+6269,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum1),32);
        tracep->fullIData(oldp+6270,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum2),32);
        tracep->fullIData(oldp+6271,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum3),32);
        tracep->fullIData(oldp+6272,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted),32);
        tracep->fullIData(oldp+6273,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped0),32);
        tracep->fullIData(oldp+6274,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped1),32);
        tracep->fullIData(oldp+6275,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped2),32);
        tracep->fullIData(oldp+6276,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat1),32);
        tracep->fullIData(oldp+6277,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat2),32);
        tracep->fullIData(oldp+6278,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat3),32);
        tracep->fullSData(oldp+6279,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx0),15);
        tracep->fullSData(oldp+6280,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx1),10);
        tracep->fullCData(oldp+6281,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx2),5);
        tracep->fullBit(oldp+6282,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+6283,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+6284,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+6285,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+6286,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+6287,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                          >> 0x1aU))));
        tracep->fullSData(oldp+6288,((0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                >> 0x10U))),10);
        tracep->fullSData(oldp+6289,((0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                >> 6U))),10);
        tracep->fullCData(oldp+6290,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 4U))),2);
        tracep->fullBit(oldp+6291,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                          >> 3U))));
        tracep->fullBit(oldp+6292,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                          >> 2U))));
        tracep->fullBit(oldp+6293,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                          >> 1U))));
        tracep->fullBit(oldp+6294,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q)));
        tracep->fullBit(oldp+6295,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart));
        tracep->fullBit(oldp+6296,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel)));
        tracep->fullCData(oldp+6297,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__resumereq),2);
        tracep->fullCData(oldp+6298,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq),2);
        tracep->fullBit(oldp+6299,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6300,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6301,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6302,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6303,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6304,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+6305,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6306,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+6307,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_d_o[0U])));
        tracep->fullBit(oldp+6308,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6309,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6310,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6311,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6312,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6313,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+6314,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6315,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+6316,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                    [0U][0U])));
        tracep->fullBit(oldp+6317,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6318,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6319,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6320,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6321,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6322,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+6323,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6324,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+6325,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9
                                    [1U][0U])));
        tracep->fullBit(oldp+6326,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6327,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6328,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6329,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6330,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6331,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6332,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6333,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6334,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                 [0U]))));
        tracep->fullBit(oldp+6335,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6336,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6337,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6338,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6339,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6340,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6341,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6342,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6343,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9
                                                 [1U]))));
        tracep->fullBit(oldp+6344,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6345,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6346,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6347,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6348,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6349,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+6350,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6351,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+6352,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                    [0U][0U])));
        tracep->fullBit(oldp+6353,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6354,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6355,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6356,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6357,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6358,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+6359,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6360,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+6361,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                    [1U][0U])));
        tracep->fullBit(oldp+6362,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6363,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6364,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6365,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6366,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6367,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6368,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6369,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6370,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                 [0U]))));
        tracep->fullBit(oldp+6371,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6372,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6373,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6374,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6375,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6376,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6377,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6378,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6379,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                                 [1U]))));
        tracep->fullBit(oldp+6380,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6381,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6382,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6383,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6384,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6385,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+6386,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6387,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+6388,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                    [0U][0U])));
        tracep->fullBit(oldp+6389,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6390,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6391,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6392,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6393,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6394,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+6395,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6396,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+6397,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                                    [1U][0U])));
        tracep->fullBit(oldp+6398,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6399,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6400,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6401,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6402,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6403,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6404,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6405,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6406,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+6407,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6408,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6409,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6410,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6411,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6412,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6413,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6414,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6415,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullCData(oldp+6416,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrequest),2);
        tracep->fullCData(oldp+6417,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hgrant),2);
        tracep->fullBit(oldp+6418,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6419,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6420,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6421,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6422,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6423,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+6424,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6425,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+6426,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+6427,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrequest))));
        tracep->fullBit(oldp+6428,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6429,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6430,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6431,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6432,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6433,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+6434,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6435,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+6436,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+6437,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+6438,((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+6439,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6440,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6441,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6442,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6443,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6444,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+6445,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6446,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+6447,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+6448,((0xfeU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                               [0U][2U] 
                                               >> 4U))),8);
        tracep->fullBit(oldp+6449,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                          [0U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+6450,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6451,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6452,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6453,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6454,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6455,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+6456,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6457,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+6458,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullCData(oldp+6459,((1U | (0xfeU & 
                                            (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                             [1U][2U] 
                                             >> 4U)))),8);
        tracep->fullBit(oldp+6460,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                          [1U][2U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+6461,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp2949[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[0U]);
        __Vtemp2949[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[1U]));
        __Vtemp2949[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+6462,(__Vtemp2949),85);
        tracep->fullBit(oldp+6465,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+6466,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+6469,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullBit(oldp+6472,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
        tracep->fullWData(oldp+6473,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullCData(oldp+6476,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
        tracep->fullCData(oldp+6477,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
        tracep->fullCData(oldp+6478,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
        tracep->fullCData(oldp+6479,((2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                            << 1U))),2);
        tracep->fullCData(oldp+6480,(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        tracep->fullBit(oldp+6481,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6482,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6483,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6484,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6485,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6486,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6487,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6488,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6489,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+6490,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6491,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6492,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6493,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6494,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6495,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+6496,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6497,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+6498,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+6499,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6500,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6501,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6502,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6503,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6504,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6505,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6506,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6507,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                 [0U]))));
        tracep->fullBit(oldp+6508,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+6509,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                 [0U]))));
        __Vtemp2953[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2953[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2953[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+6510,(__Vtemp2953),85);
        tracep->fullBit(oldp+6513,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+6514,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+6515,((((QData)((IData)(
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
        tracep->fullBit(oldp+6517,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6518,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6519,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6520,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6521,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6522,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6523,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6524,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6525,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o))));
        tracep->fullBit(oldp+6526,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6527,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6528,((7U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6529,((3U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6530,((0xffU & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6531,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+6532,((0xfU & ((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6533,(((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+6534,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o[0U])));
        tracep->fullBit(oldp+6535,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6536,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6537,((7U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6538,((3U & (IData)(
                                                   (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6539,((0xffU & (IData)(
                                                      (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6540,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6541,((IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6542,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6543,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                 [1U]))));
        tracep->fullBit(oldp+6544,((1U & (vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+6545,((1U & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                 [1U]))));
        __Vtemp2957[0U] = (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
        __Vtemp2957[1U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
        __Vtemp2957[2U] = ((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
        tracep->fullWData(oldp+6546,(__Vtemp2957),85);
        tracep->fullBit(oldp+6549,((1U & (IData)((vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+6550,((1U & vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
        tracep->fullQData(oldp+6551,((((QData)((IData)(
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
        tracep->fullBit(oldp+6553,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6554,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6555,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6556,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6557,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6558,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6559,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6560,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6561,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                 [0U]))));
        tracep->fullBit(oldp+6562,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6563,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6564,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6565,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6566,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6567,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6568,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6569,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6570,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                 [1U]))));
        tracep->fullBit(oldp+6571,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6572,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6573,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6574,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6575,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6576,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6577,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6578,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6579,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                 [2U]))));
        tracep->fullBit(oldp+6580,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6581,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6582,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6583,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6584,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6585,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6586,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6587,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6588,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                 [3U]))));
        tracep->fullBit(oldp+6589,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6590,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6591,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6592,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6593,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6594,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6595,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6596,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6597,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                 [4U]))));
        tracep->fullBit(oldp+6598,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6599,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6600,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6601,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6602,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6603,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6604,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6605,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6606,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                 [5U]))));
        tracep->fullBit(oldp+6607,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6608,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6609,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6610,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6611,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6612,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6613,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6614,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6615,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                 [6U]))));
        tracep->fullBit(oldp+6616,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6617,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6618,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6619,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6620,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6621,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6622,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6623,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6624,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                 [7U]))));
        tracep->fullBit(oldp+6625,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6626,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6627,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6628,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6629,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6630,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6631,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6632,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6633,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                 [8U]))));
        tracep->fullBit(oldp+6634,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6635,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6636,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6637,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6638,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6639,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6640,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6641,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6642,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                 [9U]))));
        tracep->fullBit(oldp+6643,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6644,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6645,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6646,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6647,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6648,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6649,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6650,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6651,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+6652,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6653,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6654,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6655,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6656,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6657,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+6658,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6659,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+6660,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                    [0U][0U])));
        tracep->fullBit(oldp+6661,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6662,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6663,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6664,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6665,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6666,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+6667,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6668,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+6669,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1
                                    [1U][0U])));
        tracep->fullBit(oldp+6670,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6671,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6672,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6673,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6674,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6675,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+6676,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6677,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+6678,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                    [0U][0U])));
        tracep->fullBit(oldp+6679,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6680,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6681,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6682,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6683,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6684,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+6685,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6686,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+6687,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                    [1U][0U])));
        tracep->fullBit(oldp+6688,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+6689,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+6690,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+6691,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+6692,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+6693,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+6694,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+6695,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+6696,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3
                                    [2U][0U])));
        tracep->fullBit(oldp+6697,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_restore_mret_id));
        tracep->fullBit(oldp+6698,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_restore_dret_id));
        tracep->fullCData(oldp+6699,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mode[0]),2);
        tracep->fullCData(oldp+6700,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mode[1]),2);
        tracep->fullIData(oldp+6701,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_wdata[0]),32);
        tracep->fullIData(oldp+6702,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_wdata[1]),32);
        tracep->fullBit(oldp+6703,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
        tracep->fullBit(oldp+6704,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d) 
                                          >> 2U))));
        tracep->fullCData(oldp+6705,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d))),2);
        tracep->fullQData(oldp+6706,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
        tracep->fullQData(oldp+6708,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
        tracep->fullQData(oldp+6710,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
        tracep->fullQData(oldp+6712,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
        tracep->fullQData(oldp+6714,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
        tracep->fullQData(oldp+6716,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
        tracep->fullQData(oldp+6718,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
        tracep->fullQData(oldp+6720,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
        tracep->fullQData(oldp+6722,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
        tracep->fullQData(oldp+6724,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
        tracep->fullQData(oldp+6726,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
        tracep->fullQData(oldp+6728,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
        tracep->fullQData(oldp+6730,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
        tracep->fullQData(oldp+6732,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
        tracep->fullQData(oldp+6734,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
        tracep->fullQData(oldp+6736,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
        tracep->fullQData(oldp+6738,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
        tracep->fullQData(oldp+6740,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
        tracep->fullQData(oldp+6742,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
        tracep->fullQData(oldp+6744,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
        tracep->fullQData(oldp+6746,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
        tracep->fullQData(oldp+6748,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
        tracep->fullQData(oldp+6750,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
        tracep->fullQData(oldp+6752,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
        tracep->fullQData(oldp+6754,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
        tracep->fullQData(oldp+6756,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
        tracep->fullQData(oldp+6758,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
        tracep->fullQData(oldp+6760,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
        tracep->fullQData(oldp+6762,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
        tracep->fullQData(oldp+6764,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
        tracep->fullQData(oldp+6766,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
        tracep->fullQData(oldp+6768,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
        tracep->fullCData(oldp+6770,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d),3);
        tracep->fullIData(oldp+6771,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rs1_data_d),32);
        tracep->fullIData(oldp+6772,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rs2_data_d),32);
        tracep->fullIData(oldp+6773,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_mem_wdata_d),32);
        tracep->fullBit(oldp+6774,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
        tracep->fullBit(oldp+6775,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
        tracep->fullBit(oldp+6776,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
        tracep->fullBit(oldp+6777,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
        tracep->fullSData(oldp+6778,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a),16);
        tracep->fullSData(oldp+6779,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b),16);
        tracep->fullIData(oldp+6780,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_mem_addr_d),32);
        tracep->fullIData(oldp+6781,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result),32);
        tracep->fullIData(oldp+6782,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
        tracep->fullQData(oldp+6783,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
        tracep->fullBit(oldp+6785,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
        tracep->fullIData(oldp+6786,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d),32);
        tracep->fullIData(oldp+6787,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
        tracep->fullIData(oldp+6788,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder),32);
        tracep->fullQData(oldp+6789,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
        tracep->fullBit(oldp+6791,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
        tracep->fullCData(oldp+6792,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
        tracep->fullBit(oldp+6793,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ctrl_busy));
        tracep->fullBit(oldp+6794,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_if));
        tracep->fullBit(oldp+6795,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_cause));
        tracep->fullCData(oldp+6796,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__debug_cause),3);
        tracep->fullBit(oldp+6797,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__debug_csr_save));
        tracep->fullBit(oldp+6798,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
        tracep->fullBit(oldp+6799,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
        tracep->fullBit(oldp+6800,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode));
        tracep->fullQData(oldp+6801,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[0]),34);
        tracep->fullQData(oldp+6803,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[1]),34);
        tracep->fullIData(oldp+6805,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__result_ex),32);
        tracep->fullQData(oldp+6806,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[0]),34);
        tracep->fullQData(oldp+6808,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[1]),34);
        tracep->fullQData(oldp+6810,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[0]),34);
        tracep->fullQData(oldp+6812,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[1]),34);
        tracep->fullQData(oldp+6814,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0]),34);
        tracep->fullQData(oldp+6816,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1]),34);
        tracep->fullQData(oldp+6818,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
        tracep->fullIData(oldp+6820,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
        tracep->fullCData(oldp+6821,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
        tracep->fullBit(oldp+6822,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sberror_valid));
        tracep->fullCData(oldp+6823,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sberror),3);
        tracep->fullQData(oldp+6824,((((QData)((IData)(
                                                       vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0U])))),64);
        tracep->fullQData(oldp+6826,((((QData)((IData)(
                                                       vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[2U])))),64);
        tracep->fullQData(oldp+6828,((((QData)((IData)(
                                                       vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[5U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[4U])))),64);
        tracep->fullQData(oldp+6830,((((QData)((IData)(
                                                       vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[7U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[6U])))),64);
        tracep->fullQData(oldp+6832,((((QData)((IData)(
                                                       vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[9U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[8U])))),64);
        tracep->fullQData(oldp+6834,((((QData)((IData)(
                                                       vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xbU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xaU])))),64);
        tracep->fullQData(oldp+6836,((((QData)((IData)(
                                                       vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xdU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xcU])))),64);
        tracep->fullQData(oldp+6838,((((QData)((IData)(
                                                       vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xfU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xeU])))),64);
        tracep->fullBit(oldp+6840,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resume));
        tracep->fullBit(oldp+6841,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__go));
        tracep->fullBit(oldp+6842,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command));
        tracep->fullBit(oldp+6843,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni));
        tracep->fullCData(oldp+6844,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr),3);
        tracep->fullBit(oldp+6845,((1U & ((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr) 
                                          >> 2U))));
        tracep->fullCData(oldp+6846,((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr))),2);
        tracep->fullCData(oldp+6847,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__state_d),3);
        tracep->fullCData(oldp+6848,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__address_d),7);
        tracep->fullIData(oldp+6849,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__data_d),32);
        tracep->fullBit(oldp+6850,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_dmi_busy));
        tracep->fullCData(oldp+6851,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_d),2);
        tracep->fullIData(oldp+6852,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d),32);
        tracep->fullSData(oldp+6853,((0x3fffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                                 >> 0x12U))),14);
        tracep->fullBit(oldp+6854,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                          >> 0x11U))));
        tracep->fullBit(oldp+6855,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                          >> 0x10U))));
        tracep->fullBit(oldp+6856,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                          >> 0xfU))));
        tracep->fullCData(oldp+6857,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+6858,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                            >> 0xaU))),2);
        tracep->fullCData(oldp+6859,((0x3fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                               >> 4U))),6);
        tracep->fullCData(oldp+6860,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d)),4);
        tracep->fullBit(oldp+6861,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d));
        tracep->fullBit(oldp+6862,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__clear_resumeack));
        tracep->fullBit(oldp+6863,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbaddress_write_valid));
        tracep->fullBit(oldp+6864,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbdata_read_valid));
        tracep->fullBit(oldp+6865,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbdata_write_valid));
        tracep->fullBit(oldp+6866,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+6867,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+6868,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+6869,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+6870,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+6871,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1aU))));
        tracep->fullSData(oldp+6872,((0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                >> 0x10U))),10);
        tracep->fullSData(oldp+6873,((0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                >> 6U))),10);
        tracep->fullCData(oldp+6874,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                            >> 4U))),2);
        tracep->fullBit(oldp+6875,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 3U))));
        tracep->fullBit(oldp+6876,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 2U))));
        tracep->fullBit(oldp+6877,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 1U))));
        tracep->fullBit(oldp+6878,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d)));
        tracep->fullCData(oldp+6879,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d 
                                               >> 0x18U))),8);
        tracep->fullIData(oldp+6880,((0xffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d)),24);
        tracep->fullSData(oldp+6881,((0xffffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d 
                                                 >> 0x10U))),16);
        tracep->fullCData(oldp+6882,((0xfU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d 
                                              >> 0xcU))),4);
        tracep->fullSData(oldp+6883,((0xfffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d)),12);
        tracep->fullCData(oldp+6884,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                            >> 0x1dU))),3);
        tracep->fullCData(oldp+6885,((0x3fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                               >> 0x17U))),6);
        tracep->fullBit(oldp+6886,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0x16U))));
        tracep->fullBit(oldp+6887,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0x15U))));
        tracep->fullBit(oldp+6888,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0x14U))));
        tracep->fullCData(oldp+6889,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                            >> 0x11U))),3);
        tracep->fullBit(oldp+6890,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0x10U))));
        tracep->fullBit(oldp+6891,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 0xfU))));
        tracep->fullCData(oldp+6892,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+6893,((0x7fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                               >> 5U))),7);
        tracep->fullBit(oldp+6894,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 4U))));
        tracep->fullBit(oldp+6895,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 3U))));
        tracep->fullBit(oldp+6896,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 2U))));
        tracep->fullBit(oldp+6897,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d 
                                          >> 1U))));
        tracep->fullBit(oldp+6898,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d)));
        tracep->fullBit(oldp+6899,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned))));
        tracep->fullIData(oldp+6900,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[0U]),32);
        tracep->fullIData(oldp+6901,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[1U]),32);
        tracep->fullIData(oldp+6902,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[2U]),32);
        tracep->fullIData(oldp+6903,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[3U]),32);
        tracep->fullIData(oldp+6904,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[4U]),32);
        tracep->fullIData(oldp+6905,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[5U]),32);
        tracep->fullIData(oldp+6906,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[6U]),32);
        tracep->fullIData(oldp+6907,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[7U]),32);
        tracep->fullCData(oldp+6908,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned),2);
        tracep->fullCData(oldp+6909,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                            >> 0x1dU))),3);
        tracep->fullCData(oldp+6910,((0x3fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                               >> 0x17U))),6);
        tracep->fullBit(oldp+6911,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0x16U))));
        tracep->fullBit(oldp+6912,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0x15U))));
        tracep->fullBit(oldp+6913,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0x14U))));
        tracep->fullCData(oldp+6914,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                            >> 0x11U))),3);
        tracep->fullBit(oldp+6915,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0x10U))));
        tracep->fullBit(oldp+6916,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 0xfU))));
        tracep->fullCData(oldp+6917,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+6918,((0x7fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                               >> 5U))),7);
        tracep->fullBit(oldp+6919,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 4U))));
        tracep->fullBit(oldp+6920,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 3U))));
        tracep->fullBit(oldp+6921,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 2U))));
        tracep->fullBit(oldp+6922,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs 
                                          >> 1U))));
        tracep->fullBit(oldp+6923,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs)));
        tracep->fullBit(oldp+6924,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+6925,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+6926,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+6927,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+6928,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+6929,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 0x1aU))));
        tracep->fullSData(oldp+6930,((0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                                >> 0x10U))),10);
        tracep->fullSData(oldp+6931,((0x3ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                                >> 6U))),10);
        tracep->fullCData(oldp+6932,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                            >> 4U))),2);
        tracep->fullBit(oldp+6933,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 3U))));
        tracep->fullBit(oldp+6934,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 2U))));
        tracep->fullBit(oldp+6935,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                          >> 1U))));
        tracep->fullBit(oldp+6936,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol)));
        tracep->fullIData(oldp+6937,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__resp_queue_data),32);
        tracep->fullSData(oldp+6938,((0x1ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                                >> 0x17U))),9);
        tracep->fullBit(oldp+6939,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x16U))));
        tracep->fullCData(oldp+6940,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                            >> 0x14U))),2);
        tracep->fullBit(oldp+6941,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x13U))));
        tracep->fullBit(oldp+6942,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x12U))));
        tracep->fullBit(oldp+6943,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x11U))));
        tracep->fullBit(oldp+6944,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0x10U))));
        tracep->fullBit(oldp+6945,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xfU))));
        tracep->fullBit(oldp+6946,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xeU))));
        tracep->fullBit(oldp+6947,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xdU))));
        tracep->fullBit(oldp+6948,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xcU))));
        tracep->fullBit(oldp+6949,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xbU))));
        tracep->fullBit(oldp+6950,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 0xaU))));
        tracep->fullBit(oldp+6951,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 9U))));
        tracep->fullBit(oldp+6952,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 8U))));
        tracep->fullBit(oldp+6953,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 7U))));
        tracep->fullBit(oldp+6954,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 6U))));
        tracep->fullBit(oldp+6955,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 5U))));
        tracep->fullBit(oldp+6956,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 4U))));
        tracep->fullCData(oldp+6957,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus)),4);
        tracep->fullCData(oldp+6958,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                            >> 0x1dU))),3);
        tracep->fullCData(oldp+6959,((0x1fU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                               >> 0x18U))),5);
        tracep->fullSData(oldp+6960,((0x7ffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                                >> 0xdU))),11);
        tracep->fullBit(oldp+6961,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                          >> 0xcU))));
        tracep->fullBit(oldp+6962,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                          >> 0xbU))));
        tracep->fullCData(oldp+6963,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                            >> 8U))),3);
        tracep->fullCData(oldp+6964,((0xfU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                              >> 4U))),4);
        tracep->fullCData(oldp+6965,((0xfU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs)),4);
        tracep->fullBit(oldp+6966,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_d));
        tracep->fullCData(oldp+6967,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__autoexecdata_idx),5);
        tracep->fullBit(oldp+6968,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+6969,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+6970,((7U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+6971,((3U & (IData)(
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+6972,((0xffU & (IData)(
                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+6973,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+6974,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
                                              >> 2U))),32);
        tracep->fullBit(oldp+6975,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p 
                                                  >> 1U)))));
        tracep->fullBit(oldp+6976,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p))));
        tracep->fullIData(oldp+6977,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__le),32);
        tracep->fullIData(oldp+6978,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__claim),32);
        tracep->fullCData(oldp+6979,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__complete_id[0]),5);
        tracep->fullIData(oldp+6980,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__complete),32);
        tracep->fullCData(oldp+6981,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__threshold[0]),3);
        tracep->fullIData(oldp+6982,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__set),32);
        tracep->fullIData(oldp+6983,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next),32);
        tracep->fullBit(oldp+6984,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we));
        tracep->fullBit(oldp+6985,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we));
        tracep->fullBit(oldp+6986,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we));
        tracep->fullBit(oldp+6987,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we));
        tracep->fullBit(oldp+6988,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio22_we));
        tracep->fullBit(oldp+6989,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio23_we));
        tracep->fullBit(oldp+6990,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio24_we));
        tracep->fullBit(oldp+6991,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio25_we));
        tracep->fullBit(oldp+6992,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we));
        tracep->fullBit(oldp+6993,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we));
        tracep->fullBit(oldp+6994,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we));
        tracep->fullBit(oldp+6995,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we));
        tracep->fullBit(oldp+6996,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we));
        tracep->fullBit(oldp+6997,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we));
        tracep->fullBit(oldp+6998,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we));
        tracep->fullBit(oldp+6999,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we));
        tracep->fullBit(oldp+7000,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we));
        tracep->fullBit(oldp+7001,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we));
        tracep->fullBit(oldp+7002,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we));
        tracep->fullBit(oldp+7003,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we));
        tracep->fullBit(oldp+7004,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we));
        tracep->fullBit(oldp+7005,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we));
        tracep->fullBit(oldp+7006,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we));
        tracep->fullBit(oldp+7007,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we));
        tracep->fullBit(oldp+7008,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we));
        tracep->fullBit(oldp+7009,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we));
        tracep->fullBit(oldp+7010,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we));
        tracep->fullBit(oldp+7011,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we));
        tracep->fullBit(oldp+7012,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we));
        tracep->fullBit(oldp+7013,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we));
        tracep->fullBit(oldp+7014,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we));
        tracep->fullBit(oldp+7015,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we));
        tracep->fullBit(oldp+7016,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we));
        tracep->fullBit(oldp+7017,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we));
        tracep->fullCData(oldp+7018,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__threshold
                                     [0U]),3);
        tracep->fullBit(oldp+7019,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7020,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7021,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7022,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7023,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7024,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7025,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7026,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7027,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [6U][0U])));
        tracep->fullBit(oldp+7028,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7029,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7030,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7031,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7032,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7033,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7034,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7035,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7036,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [0U][0U])));
        tracep->fullBit(oldp+7037,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7038,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7039,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7040,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7041,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7042,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7043,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7044,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7045,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [1U][0U])));
        tracep->fullBit(oldp+7046,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7047,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7048,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7049,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7050,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7051,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7052,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7053,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7054,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [2U][0U])));
        tracep->fullBit(oldp+7055,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7056,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7057,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7058,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7059,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7060,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7061,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7062,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7063,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [3U][0U])));
        tracep->fullBit(oldp+7064,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7065,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7066,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7067,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7068,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7069,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7070,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7071,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7072,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [4U][0U])));
        tracep->fullBit(oldp+7073,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7074,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7075,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7076,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7077,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7078,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7079,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7080,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7081,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [5U][0U])));
        tracep->fullBit(oldp+7082,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7083,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7084,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7085,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7086,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7087,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7088,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7089,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7090,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [7U][0U])));
        tracep->fullBit(oldp+7091,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7092,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7093,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7094,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7095,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7096,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7097,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7098,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7099,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [8U][0U])));
        tracep->fullBit(oldp+7100,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7101,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7102,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7103,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7104,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7105,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7106,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7107,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7108,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [9U][0U])));
        tracep->fullBit(oldp+7109,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [0xaU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7110,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0xaU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7111,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0xaU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7112,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0xaU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7113,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [0xaU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7114,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [0xaU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [0xaU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+7115,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [0xaU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0xaU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7116,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [0xaU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [0xaU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+7117,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [0xaU][0U])));
        tracep->fullBit(oldp+7118,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [0xbU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7119,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0xbU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7120,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0xbU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7121,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0xbU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7122,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [0xbU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7123,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [0xbU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [0xbU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+7124,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [0xbU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0xbU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7125,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [0xbU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [0xbU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+7126,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [0xbU][0U])));
        tracep->fullBit(oldp+7127,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [0xcU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7128,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0xcU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7129,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0xcU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7130,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0xcU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7131,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [0xcU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7132,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [0xcU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [0xcU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+7133,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [0xcU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0xcU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7134,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [0xcU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [0xcU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+7135,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [0xcU][0U])));
        tracep->fullBit(oldp+7136,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7137,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7138,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7139,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7140,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7141,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7142,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7143,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7144,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [0U][0U])));
        tracep->fullBit(oldp+7145,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7146,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7147,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7148,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7149,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7150,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7151,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7152,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7153,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [1U][0U])));
        tracep->fullBit(oldp+7154,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7155,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7156,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7157,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7158,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7159,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7160,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7161,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7162,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [2U][0U])));
        tracep->fullBit(oldp+7163,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7164,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7165,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7166,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7167,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7168,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7169,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7170,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7171,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [3U][0U])));
        tracep->fullBit(oldp+7172,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7173,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7174,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7175,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7176,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7177,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7178,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7179,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7180,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [4U][0U])));
        tracep->fullBit(oldp+7181,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7182,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7183,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7184,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7185,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7186,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7187,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7188,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7189,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [5U][0U])));
        tracep->fullBit(oldp+7190,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7191,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7192,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7193,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7194,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7195,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7196,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7197,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7198,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [6U][0U])));
        tracep->fullBit(oldp+7199,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7200,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7201,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7202,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7203,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7204,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7205,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7206,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7207,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [7U][0U])));
        tracep->fullBit(oldp+7208,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7209,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7210,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7211,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7212,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7213,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7214,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7215,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7216,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [8U][0U])));
        tracep->fullBit(oldp+7217,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7218,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7219,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7220,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7221,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7222,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7223,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7224,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7225,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [9U][0U])));
        tracep->fullBit(oldp+7226,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [0xaU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7227,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0xaU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7228,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0xaU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7229,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0xaU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7230,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [0xaU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7231,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [0xaU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [0xaU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+7232,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [0xaU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0xaU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7233,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [0xaU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [0xaU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+7234,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [0xaU][0U])));
        tracep->fullBit(oldp+7235,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [0xbU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7236,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0xbU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7237,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0xbU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7238,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0xbU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7239,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [0xbU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7240,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [0xbU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [0xbU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+7241,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [0xbU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0xbU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7242,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [0xbU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [0xbU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+7243,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [0xbU][0U])));
        tracep->fullBit(oldp+7244,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [0xcU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7245,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0xcU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7246,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0xcU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7247,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [0xcU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7248,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [0xcU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7249,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [0xcU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [0xcU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+7250,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [0xcU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [0xcU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7251,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [0xcU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [0xcU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+7252,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                    [0xcU][0U])));
        tracep->fullBit(oldp+7253,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                          [0U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7254,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [0U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7255,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [0U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7256,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [0U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7257,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [0U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7258,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [0U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [0U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7259,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [0U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                                 [0U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7260,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [0U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [0U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7261,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                    [0U][0U])));
        tracep->fullBit(oldp+7262,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                          [1U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7263,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [1U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7264,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [1U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7265,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [1U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7266,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [1U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7267,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [1U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [1U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7268,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [1U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                                 [1U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7269,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [1U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [1U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7270,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                    [1U][0U])));
        tracep->fullBit(oldp+7271,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                          [2U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7272,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [2U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7273,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [2U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7274,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [2U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7275,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [2U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7276,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [2U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [2U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7277,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [2U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                                 [2U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7278,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [2U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [2U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7279,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                    [2U][0U])));
        tracep->fullBit(oldp+7280,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                          [3U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7281,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [3U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7282,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [3U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7283,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [3U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7284,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [3U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7285,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [3U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [3U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7286,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [3U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                                 [3U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7287,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [3U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [3U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7288,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                    [3U][0U])));
        tracep->fullBit(oldp+7289,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                          [4U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7290,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [4U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7291,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [4U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7292,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [4U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7293,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [4U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7294,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [4U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [4U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7295,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [4U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                                 [4U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7296,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [4U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [4U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7297,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                    [4U][0U])));
        tracep->fullBit(oldp+7298,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                          [5U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7299,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [5U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7300,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [5U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7301,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [5U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7302,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [5U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7303,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [5U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [5U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7304,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [5U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                                 [5U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7305,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [5U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [5U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7306,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                    [5U][0U])));
        tracep->fullBit(oldp+7307,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                          [6U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7308,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [6U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7309,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [6U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7310,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [6U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7311,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [6U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7312,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [6U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [6U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7313,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7314,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [6U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7315,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                    [6U][0U])));
        tracep->fullBit(oldp+7316,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                          [7U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7317,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [7U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7318,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [7U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7319,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [7U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7320,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [7U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7321,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [7U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [7U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7322,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [7U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                                 [7U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7323,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [7U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [7U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7324,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                    [7U][0U])));
        tracep->fullBit(oldp+7325,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                          [8U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7326,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [8U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7327,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [8U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7328,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [8U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7329,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [8U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7330,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [8U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [8U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7331,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [8U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                                 [8U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7332,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [8U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [8U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7333,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                    [8U][0U])));
        tracep->fullBit(oldp+7334,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                          [9U][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7335,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [9U][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7336,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [9U][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7337,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [9U][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7338,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [9U][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7339,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [9U][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [9U][1U] >> 5U))),32);
        tracep->fullCData(oldp+7340,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [9U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                                 [9U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7341,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [9U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [9U][0U] >> 1U))),32);
        tracep->fullBit(oldp+7342,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                    [9U][0U])));
        tracep->fullBit(oldp+7343,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                          [0xaU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7344,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [0xaU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7345,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [0xaU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7346,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [0xaU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7347,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [0xaU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7348,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [0xaU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [0xaU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+7349,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [0xaU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                                 [0xaU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7350,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [0xaU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [0xaU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+7351,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                    [0xaU][0U])));
        tracep->fullBit(oldp+7352,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                          [0xbU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7353,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [0xbU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7354,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [0xbU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7355,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [0xbU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7356,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [0xbU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7357,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [0xbU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [0xbU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+7358,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [0xbU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                                 [0xbU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7359,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [0xbU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [0xbU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+7360,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                    [0xbU][0U])));
        tracep->fullBit(oldp+7361,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                          [0xcU][2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7362,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [0xcU][2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7363,((7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [0xcU][2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7364,((3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                            [0xcU][2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7365,((0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [0xcU][2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7366,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [0xcU][2U] << 0x1bU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [0xcU][1U] 
                                         >> 5U))),32);
        tracep->fullCData(oldp+7367,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                               [0xcU][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                                 [0xcU][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7368,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                       [0xcU][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                         [0xcU][0U] 
                                         >> 1U))),32);
        tracep->fullBit(oldp+7369,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                                    [0xcU][0U])));
        tracep->fullIData(oldp+7370,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xeU] 
                                       << 0x15U) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xdU] 
                                       >> 0xbU))),32);
        tracep->fullIData(oldp+7371,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xdU] 
                                       << 0x15U) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xcU] 
                                       >> 0xbU))),32);
        tracep->fullIData(oldp+7372,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xcU] 
                                       << 0x15U) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xbU] 
                                       >> 0xbU))),32);
        tracep->fullBit(oldp+7373,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xbU] 
                                          >> 0xaU))));
        tracep->fullIData(oldp+7374,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xbU] 
                                       << 0x16U) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xaU] 
                                       >> 0xaU))),32);
        tracep->fullBit(oldp+7375,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xaU] 
                                          >> 9U))));
        tracep->fullSData(oldp+7376,((0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xaU] 
                                                  << 7U) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[9U] 
                                                    >> 0x19U)))),16);
        tracep->fullBit(oldp+7377,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[9U] 
                                          >> 0x18U))));
        tracep->fullSData(oldp+7378,((0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xaU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[9U] 
                                                    >> 8U)))),16);
        tracep->fullBit(oldp+7379,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[9U] 
                                          >> 7U))));
        tracep->fullSData(oldp+7380,((0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[9U] 
                                                  << 9U) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[8U] 
                                                    >> 0x17U)))),16);
        tracep->fullBit(oldp+7381,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[8U] 
                                          >> 0x16U))));
        tracep->fullSData(oldp+7382,((0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[9U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[8U] 
                                                    >> 6U)))),16);
        tracep->fullBit(oldp+7383,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[8U] 
                                          >> 5U))));
        tracep->fullIData(oldp+7384,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[8U] 
                                       << 0x1bU) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[7U] 
                                       >> 5U))),32);
        tracep->fullBit(oldp+7385,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[7U] 
                                          >> 4U))));
        tracep->fullSData(oldp+7386,((0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[7U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[6U] 
                                                    >> 0x14U)))),16);
        tracep->fullBit(oldp+7387,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[6U] 
                                          >> 0x13U))));
        tracep->fullSData(oldp+7388,((0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[7U] 
                                                  << 0x1dU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[6U] 
                                                    >> 3U)))),16);
        tracep->fullBit(oldp+7389,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[6U] 
                                          >> 2U))));
        tracep->fullSData(oldp+7390,((0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[6U] 
                                                  << 0xeU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[5U] 
                                                    >> 0x12U)))),16);
        tracep->fullBit(oldp+7391,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[5U] 
                                          >> 0x11U))));
        tracep->fullSData(oldp+7392,((0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[6U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[5U] 
                                                    >> 1U)))),16);
        tracep->fullBit(oldp+7393,((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[5U])));
        tracep->fullIData(oldp+7394,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[4U]),32);
        tracep->fullIData(oldp+7395,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[3U]),32);
        tracep->fullIData(oldp+7396,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[2U]),32);
        tracep->fullIData(oldp+7397,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[1U]),32);
        tracep->fullIData(oldp+7398,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0U]),32);
        tracep->fullIData(oldp+7399,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d),32);
        tracep->fullIData(oldp+7400,(((~ vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d) 
                                      & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[1U])),32);
        tracep->fullIData(oldp+7401,((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d 
                                      & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[2U])),32);
        tracep->fullIData(oldp+7402,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xdU] 
                                       << 0x15U) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xcU] 
                                       >> 0xbU))),32);
        tracep->fullIData(oldp+7403,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xcU] 
                                       << 0x15U) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xbU] 
                                       >> 0xbU))),32);
        tracep->fullBit(oldp+7404,((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xbU] 
                                          >> 0xaU))));
        tracep->fullIData(oldp+7405,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xeU] 
                                       << 0x15U) | 
                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xdU] 
                                       >> 0xbU))),32);
        tracep->fullBit(oldp+7406,((0U != vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__intr_hw__DOT__new_event)));
        tracep->fullIData(oldp+7407,((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__intr_hw__DOT__new_event 
                                      | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xeU] 
                                          << 0x15U) 
                                         | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[0xdU] 
                                            >> 0xbU)))),32);
        tracep->fullIData(oldp+7408,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__intr_hw__DOT__new_event),32);
        tracep->fullBit(oldp+7409,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we));
        tracep->fullBit(oldp+7410,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re));
        tracep->fullCData(oldp+7411,((0x3cU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [6U][2U] 
                                                << 0x1bU) 
                                               | (0x7fffffcU 
                                                  & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                     [6U][1U] 
                                                     >> 5U))))),6);
        tracep->fullIData(oldp+7412,(((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                       [6U][1U] << 0x1fU) 
                                      | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [6U][0U] >> 1U))),32);
        tracep->fullCData(oldp+7413,((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [6U][2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [6U][1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7414,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next),32);
        tracep->fullBit(oldp+7415,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re) 
                                      | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                     & (~ (IData)((0U 
                                                   != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit))))) 
                                    | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err))));
        tracep->fullBit(oldp+7416,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re) 
                                     | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)((0U 
                                                  != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit)))))));
        tracep->fullBit(oldp+7417,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err));
        tracep->fullBit(oldp+7418,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_state_we));
        tracep->fullBit(oldp+7419,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_enable_we));
        tracep->fullBit(oldp+7420,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                      >> 2U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+7421,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                      >> 4U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+7422,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                     >> 4U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
        tracep->fullSData(oldp+7423,((0x3ffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [6U][1U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][0U] 
                                                   >> 1U)))),10);
        tracep->fullBit(oldp+7424,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                      >> 5U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+7425,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                     >> 5U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
        tracep->fullSData(oldp+7426,((0xfc00U | (0x3ffU 
                                                 & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                     [6U][1U] 
                                                     << 0x15U) 
                                                    | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                       [6U][0U] 
                                                       >> 0xbU))))),16);
        tracep->fullSData(oldp+7427,((0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [6U][1U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [6U][0U] 
                                                    >> 1U)))),16);
        tracep->fullBit(oldp+7428,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                      >> 6U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+7429,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                     >> 6U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
        tracep->fullSData(oldp+7430,((0xffffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [6U][1U] 
                                                  << 0xfU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [6U][0U] 
                                                    >> 0x11U)))),16);
        tracep->fullBit(oldp+7431,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                      >> 7U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+7432,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                     >> 7U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
        tracep->fullBit(oldp+7433,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                      >> 8U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+7434,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                     >> 8U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
        tracep->fullBit(oldp+7435,(((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                      >> 9U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+7436,((((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                     >> 9U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
        tracep->fullBit(oldp+7437,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_rising_we));
        tracep->fullBit(oldp+7438,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_falling_we));
        tracep->fullBit(oldp+7439,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we));
        tracep->fullBit(oldp+7440,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we));
        tracep->fullBit(oldp+7441,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__ctrl_en_input_filter_we));
        tracep->fullSData(oldp+7442,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit),15);
        tracep->fullBit(oldp+7443,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
        tracep->fullBit(oldp+7444,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        tracep->fullBit(oldp+7445,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                    & (0U != (3U & 
                                              ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [6U][2U] 
                                                << 0x1bU) 
                                               | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [6U][1U] 
                                                  >> 5U)))))));
    }
}
