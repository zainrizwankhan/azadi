// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAzadi_top_verilator.h for the primary calling header

#include "VAzadi_top_verilator_tlul_socket_m1__pi7.h"
#include "VAzadi_top_verilator__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VAzadi_top_verilator_tlul_socket_m1__pi7::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__19(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi7::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__19\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hfifo_rspvalid = ((2U & (IData)(this->__PVT__hfifo_rspvalid)) 
                                   | (1U & ((IData)(
                                                    (this->__PVT__drsp_fifo_o 
                                                     >> 0x33U)) 
                                            & (~ (IData)(
                                                         (this->__PVT__drsp_fifo_o 
                                                          >> 0x23U))))));
    this->__PVT__hfifo_rspvalid = ((1U & (IData)(this->__PVT__hfifo_rspvalid)) 
                                   | (2U & (((IData)(
                                                     (this->__PVT__drsp_fifo_o 
                                                      >> 0x33U)) 
                                             & (IData)(
                                                       (this->__PVT__drsp_fifo_o 
                                                        >> 0x23U))) 
                                            << 1U)));
}

VL_INLINE_OPT void VAzadi_top_verilator_tlul_socket_m1__pi7::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__86(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi7::_settle__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__86\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    }
    if ((2U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator_tlul_socket_m1__pi7::_combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__160(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi7::_combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM__160\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__dfifo_rspready = ((2U & (IData)(this->__PVT__dfifo_rspready)) 
                                   | (1U & ((this->__PVT__hreq_fifo_o
                                             [0U][0U] 
                                             & (~ (IData)(
                                                          (this->__PVT__drsp_fifo_o 
                                                           >> 0x23U)))) 
                                            & (IData)(
                                                      (this->__PVT__drsp_fifo_o 
                                                       >> 0x33U)))));
    this->__PVT__dfifo_rspready = ((1U & (IData)(this->__PVT__dfifo_rspready)) 
                                   | (2U & (((this->__PVT__hreq_fifo_o
                                              [1U][0U] 
                                              & (IData)(
                                                        (this->__PVT__drsp_fifo_o 
                                                         >> 0x23U))) 
                                             & (IData)(
                                                       (this->__PVT__drsp_fifo_o 
                                                        >> 0x33U))) 
                                            << 1U)));
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = this->__PVT__hreq_fifo_o[0U][0U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = this->__PVT__hreq_fifo_o[0U][1U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = this->__PVT__hreq_fifo_o[0U][2U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = this->__PVT__hreq_fifo_o[1U][0U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = this->__PVT__hreq_fifo_o[1U][1U];
    this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = this->__PVT__hreq_fifo_o[1U][2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dfifo_rspready 
        = ((6U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dfifo_rspready)) 
           | ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
               [0U][0U] & (0U == (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                >> 0x23U))))) 
              & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                         >> 0x33U))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dfifo_rspready 
        = ((5U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dfifo_rspready)) 
           | (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                [1U][0U] & (1U == (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                 >> 0x23U))))) 
               & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                          >> 0x33U))) << 1U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dfifo_rspready 
        = ((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dfifo_rspready)) 
           | (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
                [2U][0U] & (2U == (3U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                                                 >> 0x23U))))) 
               & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__drsp_fifo_o 
                          >> 0x33U))) << 2U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
        [0U][0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
        [0U][1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
        [0U][2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
        [1U][0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
        [1U][1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
        [1U][2U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2U][0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
        [2U][0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2U][1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
        [2U][1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2U][2U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hreq_fifo_o
        [2U][2U];
    this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
    this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
    this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
    if ((1U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
    }
    if ((2U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = this->__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
    }
    this->__PVT__dreq_fifo_i[0U] = (IData)((((QData)((IData)(
                                                             (0xfU 
                                                              & ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                                  << 0x1fU) 
                                                                 | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                    >> 1U))))) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                  << 0x1fU) 
                                                                 | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                                    >> 1U)))) 
                                                << 1U) 
                                               | (QData)((IData)(
                                                                 (0U 
                                                                  != (IData)(this->__PVT__dfifo_rspready)))))));
    this->__PVT__dreq_fifo_i[1U] = ((0xffffffe0U & 
                                     this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
                                    | (IData)(((((QData)((IData)(
                                                                 (0xfU 
                                                                  & ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                                      << 0x1fU) 
                                                                     | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                        >> 1U))))) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    ((this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                                      << 0x1fU) 
                                                                     | (this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                                        >> 1U)))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (0U 
                                                                      != (IData)(this->__PVT__dfifo_rspready)))))) 
                                               >> 0x20U)));
    this->__PVT__dreq_fifo_i[2U] = ((0xffe00000U & 
                                     ((IData)((0U != (IData)(this->__PVT__hrequest))) 
                                      << 0x15U)) | 
                                    ((0x1c0000U & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                     | ((0x38000U & 
                                         this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                        | ((0x6000U 
                                            & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                           | ((0x1fe0U 
                                               & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                              | (0x1fU 
                                                 & this->__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]))))));
    this->tl_d_o[0U] = ((1U & this->tl_d_o[0U]) | (0xfffffffeU 
                                                   & this->__PVT__dreq_fifo_i[0U]));
    this->tl_d_o[1U] = ((1U & this->__PVT__dreq_fifo_i[1U]) 
                        | (0xfffffffeU & this->__PVT__dreq_fifo_i[1U]));
    this->tl_d_o[2U] = ((0x200000U & this->tl_d_o[2U]) 
                        | ((1U & this->__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & this->__PVT__dreq_fifo_i[2U])));
    this->tl_d_o[2U] = ((0x1fffffU & this->tl_d_o[2U]) 
                        | (0x200000U & this->__PVT__dreq_fifo_i[2U]));
    this->tl_d_o[0U] = ((0xfffffffeU & this->tl_d_o[0U]) 
                        | (1U & this->__PVT__dreq_fifo_i[0U]));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
    if ((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
    }
    if ((2U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
    }
    if ((4U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [2U][0U];
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [2U][1U];
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [2U][2U];
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[0U] 
        = (IData)((((QData)((IData)((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                >> 1U))))) 
                    << 0x21U) | (((QData)((IData)((
                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                      >> 1U)))) 
                                  << 1U) | (QData)((IData)(
                                                           (0U 
                                                            != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dfifo_rspready)))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[1U] 
        = ((0xffffffe0U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
           | (IData)(((((QData)((IData)((0xfU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U))))) 
                        << 0x21U) | (((QData)((IData)(
                                                      ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                        << 0x1fU) 
                                                       | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                                          >> 1U)))) 
                                      << 1U) | (QData)((IData)(
                                                               (0U 
                                                                != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dfifo_rspready)))))) 
                      >> 0x20U)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U] 
        = ((0xffe00000U & ((IData)((0U != (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__hrequest))) 
                           << 0x15U)) | ((0x1c0000U 
                                          & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                         | ((0x38000U 
                                             & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                            | ((0x6000U 
                                                & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                               | ((0x1fe0U 
                                                   & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                                                  | (0x1fU 
                                                     & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__addr_i 
        = ((0x200000U & this->tl_d_o[2U]) ? (0xfffU 
                                             & ((this->tl_d_o[2U] 
                                                 << 0x19U) 
                                                | (this->tl_d_o[1U] 
                                                   >> 7U)))
            : 0U);
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (1U & (((this->tl_d_o[2U] >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar)) 
                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__we_i 
        = ((this->tl_d_o[2U] >> 0x15U) & ((0U == (7U 
                                                  & (this->tl_d_o[2U] 
                                                     >> 0x12U))) 
                                          | (1U == 
                                             (7U & 
                                              (this->tl_d_o[2U] 
                                               >> 0x12U)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int = 0U;
    if ((0x200000U & this->tl_d_o[2U])) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int 
            = ((0xffffff00U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int) 
               | (0xffU & (- (IData)((1U & (this->tl_d_o[1U] 
                                            >> 1U))))));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int 
            = ((0xffff00ffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int) 
               | (0xff00U & ((- (IData)((1U & (this->tl_d_o[1U] 
                                               >> 2U)))) 
                             << 8U)));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int 
            = ((0xff00ffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int) 
               | (0xff0000U & ((- (IData)((1U & (this->tl_d_o[1U] 
                                                 >> 3U)))) 
                               << 0x10U)));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int 
            = ((0xffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int) 
               | (0xff000000U & ((- (IData)((1U & (
                                                   this->tl_d_o[1U] 
                                                   >> 4U)))) 
                                 << 0x18U)));
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk 
        = (1U & ((this->tl_d_o[2U] >> 0x15U) & ((0U 
                                                 == 
                                                 (3U 
                                                  & (this->tl_d_o[2U] 
                                                     >> 0xdU))) 
                                                | ((1U 
                                                    == 
                                                    (3U 
                                                     & (this->tl_d_o[2U] 
                                                        >> 0xdU)))
                                                    ? 
                                                   (~ 
                                                    (this->tl_d_o[1U] 
                                                     >> 5U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (this->tl_d_o[2U] 
                                                         >> 0xdU))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & ((this->tl_d_o[2U] 
                                                                       << 0x1bU) 
                                                                      | (this->tl_d_o[1U] 
                                                                         >> 5U)))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk 
        = (1U & ((this->tl_d_o[2U] >> 0x15U) & ((0U 
                                                 == 
                                                 (3U 
                                                  & (this->tl_d_o[2U] 
                                                     >> 0xdU)))
                                                 ? 
                                                (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0xfU 
                                                             & (((this->tl_d_o[2U] 
                                                                  << 0x1fU) 
                                                                 | (this->tl_d_o[1U] 
                                                                    >> 1U)) 
                                                                & (~ 
                                                                   ((IData)(1U) 
                                                                    << 
                                                                    (3U 
                                                                     & ((this->tl_d_o[2U] 
                                                                         << 0x1bU) 
                                                                        | (this->tl_d_o[1U] 
                                                                           >> 5U))))))))))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & (this->tl_d_o[2U] 
                                                      >> 0xdU)))
                                                  ? 
                                                 ((0x40U 
                                                   & this->tl_d_o[1U])
                                                   ? 
                                                  (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & ((this->tl_d_o[2U] 
                                                                   << 0x1fU) 
                                                                  | (this->tl_d_o[1U] 
                                                                     >> 1U))))))
                                                   : 
                                                  (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0xcU 
                                                               & ((this->tl_d_o[2U] 
                                                                   << 0x1fU) 
                                                                  | (this->tl_d_o[1U] 
                                                                     >> 1U)))))))
                                                  : 
                                                 (2U 
                                                  == 
                                                  (3U 
                                                   & (this->tl_d_o[2U] 
                                                      >> 0xdU)))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk 
        = ((this->tl_d_o[2U] >> 0x15U) & ((0U == (3U 
                                                  & (this->tl_d_o[2U] 
                                                     >> 0xdU)))
                                           ? (0U != 
                                              (0xfU 
                                               & (((this->tl_d_o[2U] 
                                                    << 0x1fU) 
                                                   | (this->tl_d_o[1U] 
                                                      >> 1U)) 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & ((this->tl_d_o[2U] 
                                                          << 0x1bU) 
                                                         | (this->tl_d_o[1U] 
                                                            >> 5U)))))))
                                           : ((1U == 
                                               (3U 
                                                & (this->tl_d_o[2U] 
                                                   >> 0xdU)))
                                               ? ((0x40U 
                                                   & this->tl_d_o[1U])
                                                   ? 
                                                  (3U 
                                                   == 
                                                   (3U 
                                                    & ((this->tl_d_o[2U] 
                                                        << 0x1dU) 
                                                       | (this->tl_d_o[1U] 
                                                          >> 3U))))
                                                   : 
                                                  (3U 
                                                   == 
                                                   (3U 
                                                    & ((this->tl_d_o[2U] 
                                                        << 0x1fU) 
                                                       | (this->tl_d_o[1U] 
                                                          >> 1U)))))
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (this->tl_d_o[2U] 
                                                       >> 0xdU))) 
                                                  & (0xfU 
                                                     == 
                                                     (0xfU 
                                                      & ((this->tl_d_o[2U] 
                                                          << 0x1fU) 
                                                         | (this->tl_d_o[1U] 
                                                            >> 1U))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U] 
        = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U]) 
           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[0U]));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
        = ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[1U]) 
           | (0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[1U]));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
        = ((0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U]) 
           | ((1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U]) 
              | (0x1ffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U])));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
        = ((0x1fffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U]) 
           | (0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[2U]));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U] 
        = ((0xfffffffeU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U]) 
           | (1U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM__DOT__dreq_fifo_i[0U]));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_we 
        = ((0xcU & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_we)) 
           | ((0U != (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int 
                               >> 0x10U))) ? 3U : 0U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_we 
        = ((3U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_we)) 
           | (((0U != (0xffU & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int 
                                >> 0x18U))) ? 3U : 0U) 
              << 2U));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__tlul_error 
        = (1U & (~ ((((0U == (7U & (this->tl_d_o[2U] 
                                    >> 0x12U))) | (1U 
                                                   == 
                                                   (7U 
                                                    & (this->tl_d_o[2U] 
                                                       >> 0x12U)))) 
                     | (4U == (7U & (this->tl_d_o[2U] 
                                     >> 0x12U)))) & 
                    (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk) 
                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk)) 
                     & (((4U == (7U & (this->tl_d_o[2U] 
                                       >> 0x12U))) 
                         | (1U == (7U & (this->tl_d_o[2U] 
                                         >> 0x12U)))) 
                        | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__tlul_addr 
        = ((0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U])
            ? (0xfffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                          << 0x19U) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                       >> 7U))) : 0U);
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int = 0U;
    if ((0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U])) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int 
            = ((0xffffff00U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int) 
               | (0xffU & (- (IData)((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                            >> 1U))))));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int 
            = ((0xffff00ffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int) 
               | (0xff00U & ((- (IData)((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                               >> 2U)))) 
                             << 8U)));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int 
            = ((0xff00ffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int) 
               | (0xff0000U & ((- (IData)((1U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                 >> 3U)))) 
                               << 0x10U)));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int 
            = ((0xffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int) 
               | (0xff000000U & ((- (IData)((1U & (
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                   >> 4U)))) 
                                 << 0x18U)));
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (1U & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                   >> 0x15U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar)) 
                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o 
        = ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
            >> 0x15U) & ((0U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                       >> 0x12U))) 
                         | (1U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                         >> 0x12U)))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                  >> 0x15U) & ((0U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                             >> 0xdU))) 
                               | ((1U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                >> 0xdU)))
                                   ? (~ (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                         >> 5U)) : 
                                  ((2U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                 >> 0xdU))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                        >> 5U)))))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__mask_chk 
        = (1U & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                  >> 0x15U) & ((0U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                             >> 0xdU)))
                                ? (~ (IData)((0U != 
                                              (0xfU 
                                               & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                      >> 1U)) 
                                                  & (~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                           << 0x1bU) 
                                                          | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                             >> 5U))))))))))
                                : ((1U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                 >> 0xdU)))
                                    ? ((0x40U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U])
                                        ? (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                           << 0x1fU) 
                                                          | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                             >> 1U))))))
                                        : (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0xcU 
                                                       & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                           << 0x1fU) 
                                                          | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                             >> 1U)))))))
                                    : (2U == (3U & 
                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                               >> 0xdU)))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk 
        = ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
            >> 0x15U) & ((0U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                       >> 0xdU))) ? 
                         (0U != (0xfU & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                           << 0x1fU) 
                                          | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                             >> 1U)) 
                                         & ((IData)(1U) 
                                            << (3U 
                                                & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                      >> 5U)))))))
                          : ((1U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                           >> 0xdU)))
                              ? ((0x40U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U])
                                  ? (3U == (3U & ((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                     >> 3U))))
                                  : (3U == (3U & ((
                                                   vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                   << 0x1fU) 
                                                  | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                     >> 1U)))))
                              : ((2U == (3U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                               >> 0xdU))) 
                                 & (0xfU == (0xfU & 
                                             ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                                 >> 1U))))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__req_i 
        = (1U & (((this->tl_d_o[2U] >> 0x15U) & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full))) 
                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__tlul_error))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int = 0U;
    if ((0x200000U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U])) {
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int 
            = ((0xffffff00U & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int) 
               | (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                    >> 1U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o))
                   ? (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                << 0x1fU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U] 
                                             >> 1U)))
                   : 0U));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int 
            = ((0xffff00ffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int) 
               | ((((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                     >> 2U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o))
                    ? (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                 << 0x17U) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U] 
                                              >> 9U)))
                    : 0U) << 8U));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int 
            = ((0xff00ffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int) 
               | ((((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                     >> 3U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o))
                    ? (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                 << 0xfU) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U] 
                                             >> 0x11U)))
                    : 0U) << 0x10U));
        vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int 
            = ((0xffffffU & vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int) 
               | ((((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                     >> 4U) & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o))
                    ? (0xffU & ((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[1U] 
                                 << 7U) | (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[0U] 
                                           >> 0x19U)))
                    : 0U) << 0x18U));
    }
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__tlul_error 
        = (1U & (~ ((((0U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                    >> 0x12U))) | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                                       >> 0x12U)))) 
                     | (4U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                     >> 0x12U)))) & 
                    (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk) 
                      & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__mask_chk)) 
                     & (((4U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                       >> 0x12U))) 
                         | (1U == (7U & (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                                         >> 0x12U)))) 
                        | (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk))))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__req_i) 
            & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__we_i))) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__req_i 
        = (1U & (((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_iccm[2U] 
                   >> 0x15U) & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full))) 
                 & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__tlul_error))));
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__req_i) 
            & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o))) 
           & (~ (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)));
}

VL_INLINE_OPT void VAzadi_top_verilator_tlul_socket_m1__pi7::_sequent__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__156(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi7::_sequent__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0__156\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((0U != (IData)(this->__PVT__hrequest)) 
             & (IData)(this->__PVT__drsp_fifo_o))) {
            this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(this->__PVT__hrequest)) 
                 & (~ (IData)(this->__PVT__drsp_fifo_o)))) {
                this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator_tlul_socket_m1__pi7::_sequent__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__155(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi7::_sequent__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1__155\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((0U != (IData)(this->__PVT__hrequest)) 
             & (IData)(this->__PVT__drsp_fifo_o))) {
            this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(this->__PVT__hrequest)) 
                 & (~ (IData)(this->__PVT__drsp_fifo_o)))) {
                this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrequest)) 
             & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o))) {
            vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__hrequest)) 
                 & (~ (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o)))) {
                vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
    if (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq) {
        if (((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrequest)) 
             & (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o))) {
            vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                = (2U & ((IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                         << 1U));
        } else {
            if (((0U != (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__hrequest)) 
                 & (~ (IData)(vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o)))) {
                vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask 
                    = vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
            }
        }
    } else {
        vlSymsp->TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask = 0U;
    }
}

VL_INLINE_OPT void VAzadi_top_verilator_tlul_socket_m1__pi7::_combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__154(VAzadi_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAzadi_top_verilator_tlul_socket_m1__pi7::_combo__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__154\n"); );
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp82[3];
    WData/*95:0*/ __Vtemp83[3];
    // Body
    this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((2U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (1U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((1U & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out)) 
           | (2U & (((IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)))));
    this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = ((IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
           ^ (2U & ((IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                    << 1U)));
    this->__PVT__hgrant = ((1U & (IData)(this->__PVT__drsp_fifo_o))
                            ? (IData)(this->__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner)
                            : 0U);
    this->__PVT__hrsp_fifo_i[0U] = (((QData)((IData)(
                                                     (1U 
                                                      & (IData)(this->__PVT__hfifo_rspvalid)))) 
                                     << 0x33U) | (((QData)((IData)(
                                                                   (7U 
                                                                    & (IData)(
                                                                              (this->__PVT__drsp_fifo_o 
                                                                               >> 0x30U))))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (7U 
                                                                       & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2dU))))) 
                                                      << 0x2dU) 
                                                     | (((QData)((IData)(
                                                                         (3U 
                                                                          & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2bU))))) 
                                                         << 0x2bU) 
                                                        | (((QData)((IData)(
                                                                            (0x7fU 
                                                                             & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x24U))))) 
                                                            << 0x23U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x22U))))) 
                                                               << 0x22U) 
                                                              | (((QData)((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 2U))) 
                                                                  << 2U) 
                                                                 | (QData)((IData)(
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(this->__PVT__hgrant))))))))))));
    this->__PVT__hrsp_fifo_i[1U] = (((QData)((IData)(
                                                     (1U 
                                                      & ((IData)(this->__PVT__hfifo_rspvalid) 
                                                         >> 1U)))) 
                                     << 0x33U) | (((QData)((IData)(
                                                                   (7U 
                                                                    & (IData)(
                                                                              (this->__PVT__drsp_fifo_o 
                                                                               >> 0x30U))))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (7U 
                                                                       & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2dU))))) 
                                                      << 0x2dU) 
                                                     | (((QData)((IData)(
                                                                         (3U 
                                                                          & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x2bU))))) 
                                                         << 0x2bU) 
                                                        | (((QData)((IData)(
                                                                            (0x7fU 
                                                                             & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x24U))))) 
                                                            << 0x23U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 0x22U))))) 
                                                               << 0x22U) 
                                                              | (((QData)((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 2U))) 
                                                                  << 2U) 
                                                                 | (QData)((IData)(
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (this->__PVT__drsp_fifo_o 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(this->__PVT__hgrant) 
                                                                                >> 1U))))))))))));
    __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o 
        = ((0xffffffffffffeULL & __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->__PVT__hrsp_fifo_i
                                           [0U])))));
    __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o 
        = ((0x8000000000001ULL & __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->__PVT__hrsp_fifo_i
                                                    [0U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->__PVT__hrsp_fifo_i
                                                           [0U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->__PVT__hrsp_fifo_i
                                                                   [0U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o 
        = ((0x7ffffffffffffULL & __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->__PVT__hrsp_fifo_i
                                             [0U] >> 0x33U))))) 
              << 0x33U));
    __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o 
        = ((0xffffffffffffeULL & __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o) 
           | (IData)((IData)((1U & (IData)(this->__PVT__hrsp_fifo_i
                                           [1U])))));
    __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o 
        = ((0x8000000000001ULL & __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o) 
           | (((QData)((IData)((0x1ffffU & (IData)(
                                                   (this->__PVT__hrsp_fifo_i
                                                    [1U] 
                                                    >> 0x22U))))) 
               << 0x22U) | (((QData)((IData)(((1U == 
                                               (7U 
                                                & (IData)(
                                                          (this->__PVT__hrsp_fifo_i
                                                           [1U] 
                                                           >> 0x30U))))
                                               ? (IData)(
                                                         (this->__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 2U))
                                               : 0U))) 
                             << 2U) | ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (this->__PVT__hrsp_fifo_i
                                                                   [1U] 
                                                                   >> 1U))))) 
                                       << 1U))));
    __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o 
        = ((0x7ffffffffffffULL & __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o) 
           | ((QData)((IData)((1U & (IData)((this->__PVT__hrsp_fifo_i
                                             [1U] >> 0x33U))))) 
              << 0x33U));
    this->tl_h_o[0U] = __PVT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo->tl_h_o;
    this->tl_h_o[1U] = __PVT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo->tl_h_o;
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_3__tl_h_o[0U] 
        = this->tl_h_o[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_3__tl_h_o[1U] 
        = this->tl_h_o[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8[0U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_3__tl_h_o
        [0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8[1U] 
        = vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_3__tl_h_o
        [1U];
    VL_EXTEND_WQ(86,52, __Vtemp82, vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                 [1U]);
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i[6U][0U] 
        = __Vtemp82[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i[6U][1U] 
        = __Vtemp82[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i[6U][2U] 
        = __Vtemp82[2U];
    VL_EXTEND_WQ(86,52, __Vtemp83, vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8
                 [0U]);
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i[6U][0U] 
        = __Vtemp83[0U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i[6U][1U] 
        = __Vtemp83[1U];
    vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i[6U][2U] 
        = __Vtemp83[2U];
}
