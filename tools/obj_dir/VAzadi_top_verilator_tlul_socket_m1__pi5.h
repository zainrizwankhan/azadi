// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAzadi_top_verilator.h for the primary calling header

#ifndef _VAZADI_TOP_VERILATOR_TLUL_SOCKET_M1__PI5_H_
#define _VAZADI_TOP_VERILATOR_TLUL_SOCKET_M1__PI5_H_  // guard

#include "verilated_heavy.h"
#include "verilated_threads.h"
#include "VAzadi_top_verilator__Dpi.h"

//==========

class VAzadi_top_verilator__Syms;
class VAzadi_top_verilator_VerilatedFst;
class VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5;


//----------

VL_MODULE(VAzadi_top_verilator_tlul_socket_m1__pi5) {
  public:
    // CELLS
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    
    // PORTS
    // Begin mtask footprint all: 
    VL_IN64(tl_d_i,51,0);
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    // Begin mtask footprint all: 5 20 21 27 28 36 51 
    VL_OUT64(tl_h_o[2],51,0);
    // Begin mtask footprint all: 20 27 28 29 30 48 51 52 54 
    VL_INW(tl_h_i[2],85,0,3);
    // Begin mtask footprint all: 4 5 6 7 15 20 21 27 28 29 30 31 52 54 
    VL_OUTW(tl_d_o,85,0,3);
    
    // LOCAL SIGNALS
    // Begin mtask footprint all: 5 7 20 27 28 30 57 
    CData/*0:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o;
    // Begin mtask footprint all: 5 7 20 21 27 28 29 30 36 51 52 54 57 
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
    // Begin mtask footprint all: 5 20 21 27 28 36 51 
    QData/*51:0*/ __PVT__hrsp_fifo_i[2];
    CData/*1:0*/ __PVT__hgrant;
    // Begin mtask footprint all: 4 5 7 18 20 21 27 28 36 51 
    CData/*1:0*/ __PVT__hfifo_rspvalid;
    // Begin mtask footprint all: 1 2 4 5 7 13 18 20 21 22 27 28 29 36 51 52 54 
    QData/*51:0*/ __PVT__drsp_fifo_o;
    // Begin mtask footprint all: 1 2 4 5 7 13 18 20 27 28 29 30 51 52 54 
    CData/*1:0*/ __PVT__hrequest;
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask;
    // Begin mtask footprint all: 1 2 4 5 7 13 18 20 27 28 29 30 51 
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
    // Begin mtask footprint all: 5 7 20 27 28 29 30 51 52 54 
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
    // Begin mtask footprint all: 20 27 28 29 30 51 52 54 
    WData/*85:0*/ __PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[3];
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req;
    // Begin mtask footprint all: 20 22 27 28 29 30 51 52 54 
    WData/*85:0*/ __PVT__hreq_fifo_o[2][3];
    // Begin mtask footprint all: 20 22 27 28 29 30 52 54 
    CData/*1:0*/ __PVT__dfifo_rspready;
    // Begin mtask footprint all: 20 27 28 29 30 52 54 
    WData/*85:0*/ __PVT__dreq_fifo_i[3];
    // Begin mtask footprint all: 20 28 29 30 51 52 54 
    WData/*85:0*/ __PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[3];
    
    // LOCAL VARIABLES
    // Begin mtask footprint all: 20 27 28 29 30 52 54 
    WData/*85:0*/ __Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2][3];
    WData/*85:0*/ __Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3];
    
    // INTERNAL VARIABLES
  private:
    VAzadi_top_verilator__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAzadi_top_verilator_tlul_socket_m1__pi5);  ///< Copying not allowed
  public:
    VAzadi_top_verilator_tlul_socket_m1__pi5(const char* name = "TOP");
    ~VAzadi_top_verilator_tlul_socket_m1__pi5();
    
    // INTERNAL METHODS
    void __Vconfigure(VAzadi_top_verilator__Syms* symsp, bool first);
    void _combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__173(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__172(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__174(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__175(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__166(VAzadi_top_verilator__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__170(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__100(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__111(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__113(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__21(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__80(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__87(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__98(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__143(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__22(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__25(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__139(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__141(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__142(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__144(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__147(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__150(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__152(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__153(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__154(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__155(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__156(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__157(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__20(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__23(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC__15(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__2(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__42(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__46(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__7(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__3(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2__4(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__12(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__6(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4__5(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__133(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__58(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
