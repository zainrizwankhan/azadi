// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VAzadi_top_verilator__Syms.h"


void VAzadi_top_verilator::traceFullSub3(void* userp, VerilatedFst* tracep) {
    VAzadi_top_verilator__Syms* __restrict vlSymsp = static_cast<VAzadi_top_verilator__Syms*>(userp);
    VAzadi_top_verilator* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+10805,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i))));
        tracep->fullBit(oldp+10806,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c0_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+10807,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c0_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+10808,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c0_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+10809,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c0_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+10810,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c0_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+10811,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c0_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+10812,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c0_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+10813,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c0_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+10814,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c0_i))));
        tracep->fullBit(oldp+10815,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+10816,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+10817,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+10818,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+10819,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+10820,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+10821,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+10822,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+10823,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i))));
        tracep->fullBit(oldp+10824,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+10825,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+10826,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+10827,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+10828,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+10829,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+10830,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+10831,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+10832,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i))));
        tracep->fullBit(oldp+10833,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+10834,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+10835,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+10836,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+10837,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+10838,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+10839,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+10840,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+10841,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i))));
        tracep->fullBit(oldp+10842,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+10843,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+10844,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+10845,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+10846,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+10847,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+10848,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+10849,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+10850,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i))));
        tracep->fullBit(oldp+10851,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                   >> 0x33U)))));
        tracep->fullCData(oldp+10852,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                     >> 0x30U)))),3);
        tracep->fullCData(oldp+10853,((7U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                     >> 0x2dU)))),3);
        tracep->fullCData(oldp+10854,((3U & (IData)(
                                                    (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                     >> 0x2bU)))),2);
        tracep->fullCData(oldp+10855,((0xffU & (IData)(
                                                       (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                        >> 0x23U)))),8);
        tracep->fullBit(oldp+10856,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                   >> 0x22U)))));
        tracep->fullIData(oldp+10857,((IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                               >> 2U))),32);
        tracep->fullBit(oldp+10858,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i 
                                                   >> 1U)))));
        tracep->fullBit(oldp+10859,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i))));
        tracep->fullBit(oldp+10860,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__scanmode_i));
        tracep->fullSData(oldp+10861,(0x1fffU),13);
        tracep->fullQData(oldp+10862,(0ULL),52);
        tracep->fullIData(oldp+10864,(0xdU),32);
        tracep->fullIData(oldp+10865,(6U),32);
        tracep->fullIData(oldp+10866,(0x573143U),24);
        tracep->fullSData(oldp+10867,(0x5257U),16);
        tracep->fullSData(oldp+10868,(0x524fU),16);
        tracep->fullIData(oldp+10869,(0x10U),32);
        tracep->fullSData(oldp+10870,(0x57U),16);
        tracep->fullCData(oldp+10871,(1U),3);
        tracep->fullCData(oldp+10872,(2U),3);
        tracep->fullCData(oldp+10873,(3U),3);
        tracep->fullCData(oldp+10874,(4U),3);
        tracep->fullIData(oldp+10875,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm__DOT__wdata),32);
        tracep->fullCData(oldp+10876,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__iccm__DOT__we),4);
        tracep->fullIData(oldp+10877,(7U),32);
        tracep->fullIData(oldp+10878,(1U),32);
        tracep->fullIData(oldp+10879,(9U),32);
        tracep->fullBit(oldp+10880,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_qs));
        tracep->fullBit(oldp+10881,(0U));
        tracep->fullBit(oldp+10882,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__clk_i));
        tracep->fullBit(oldp+10883,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__rst_ni));
        tracep->fullBit(oldp+10884,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__we));
        tracep->fullBit(oldp+10885,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__wd));
        tracep->fullBit(oldp+10886,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we));
        tracep->fullCData(oldp+10887,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd),3);
        tracep->fullCData(oldp+10888,(((IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we)
                                        ? (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd)
                                        : 0U)),3);
        tracep->fullBit(oldp+10889,(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d));
        tracep->fullIData(oldp+10890,(0U),32);
        tracep->fullIData(oldp+10891,(0xaU),32);
        tracep->fullIData(oldp+10892,(0xbU),32);
        tracep->fullIData(oldp+10893,(0xeU),32);
        tracep->fullIData(oldp+10894,(0xfU),32);
        tracep->fullIData(oldp+10895,(0x10U),32);
        tracep->fullIData(oldp+10896,(0x12U),32);
        tracep->fullIData(oldp+10897,(0x13U),32);
        tracep->fullIData(oldp+10898,(0x14U),32);
        tracep->fullIData(oldp+10899,(0x15U),32);
        tracep->fullIData(oldp+10900,(0x16U),32);
        tracep->fullIData(oldp+10901,(0x17U),32);
        tracep->fullIData(oldp+10902,(0x18U),32);
        tracep->fullIData(oldp+10903,(0x19U),32);
        tracep->fullIData(oldp+10904,(0x1aU),32);
        tracep->fullIData(oldp+10905,(0x1bU),32);
        tracep->fullIData(oldp+10906,(0x1cU),32);
        tracep->fullIData(oldp+10907,(0x1dU),32);
        tracep->fullIData(oldp+10908,(0x1fU),32);
        tracep->fullIData(oldp+10909,(0x22U),32);
        tracep->fullIData(oldp+10910,(0x23U),32);
        tracep->fullIData(oldp+10911,(0x24U),32);
        tracep->fullIData(oldp+10912,(0x25U),32);
        tracep->fullIData(oldp+10913,(0x26U),32);
        tracep->fullIData(oldp+10914,(0x27U),32);
        tracep->fullIData(oldp+10915,(0x28U),32);
        tracep->fullIData(oldp+10916,(0x29U),32);
        tracep->fullIData(oldp+10917,(0x2aU),32);
        tracep->fullIData(oldp+10918,(0x2bU),32);
        tracep->fullIData(oldp+10919,(0x2cU),32);
        tracep->fullIData(oldp+10920,(0x2dU),32);
        tracep->fullIData(oldp+10921,(0x2eU),32);
        tracep->fullIData(oldp+10922,(0x2fU),32);
        tracep->fullIData(oldp+10923,(0x30U),32);
        tracep->fullIData(oldp+10924,(0x31U),32);
        tracep->fullIData(oldp+10925,(0x32U),32);
        tracep->fullIData(oldp+10926,(0x33U),32);
        tracep->fullIData(oldp+10927,(0x34U),32);
        tracep->fullIData(oldp+10928,(0x35U),32);
        tracep->fullIData(oldp+10929,(0x36U),32);
        tracep->fullIData(oldp+10930,(0x37U),32);
        tracep->fullIData(oldp+10931,(0x38U),32);
        tracep->fullIData(oldp+10932,(0x39U),32);
        tracep->fullIData(oldp+10933,(0x3aU),32);
        tracep->fullIData(oldp+10934,(0x3bU),32);
        tracep->fullIData(oldp+10935,(0x3cU),32);
        tracep->fullIData(oldp+10936,(0x3dU),32);
        tracep->fullIData(oldp+10937,(0x3eU),32);
        tracep->fullIData(oldp+10938,(0x3fU),32);
        tracep->fullIData(oldp+10939,(0x41U),32);
        tracep->fullIData(oldp+10940,(0x42U),32);
        tracep->fullIData(oldp+10941,(0x43U),32);
        tracep->fullIData(oldp+10942,(0x44U),32);
        tracep->fullIData(oldp+10943,(0x45U),32);
        tracep->fullIData(oldp+10944,(0x46U),32);
        tracep->fullIData(oldp+10945,(0x47U),32);
        tracep->fullIData(oldp+10946,(0x48U),32);
        tracep->fullIData(oldp+10947,(0x49U),32);
        tracep->fullIData(oldp+10948,(0x4aU),32);
        tracep->fullIData(oldp+10949,(0x4bU),32);
        tracep->fullIData(oldp+10950,(0x4cU),32);
        tracep->fullIData(oldp+10951,(0x4dU),32);
        tracep->fullIData(oldp+10952,(0x4eU),32);
        tracep->fullIData(oldp+10953,(0x4fU),32);
        tracep->fullIData(oldp+10954,(0x50U),32);
        tracep->fullIData(oldp+10955,(0x51U),32);
        tracep->fullIData(oldp+10956,(0x52U),32);
        tracep->fullIData(oldp+10957,(0x53U),32);
        tracep->fullIData(oldp+10958,(0x54U),32);
        tracep->fullIData(oldp+10959,(0x55U),32);
        tracep->fullIData(oldp+10960,(0x56U),32);
        tracep->fullIData(oldp+10961,(0x57U),32);
        tracep->fullIData(oldp+10962,(0x58U),32);
        tracep->fullIData(oldp+10963,(0x59U),32);
        tracep->fullIData(oldp+10964,(0x5aU),32);
        tracep->fullIData(oldp+10965,(0x5bU),32);
        tracep->fullIData(oldp+10966,(0x5cU),32);
        tracep->fullIData(oldp+10967,(0x5dU),32);
        tracep->fullIData(oldp+10968,(0x5eU),32);
        tracep->fullIData(oldp+10969,(0x5fU),32);
        tracep->fullIData(oldp+10970,(0x60U),32);
        tracep->fullIData(oldp+10971,(0x61U),32);
        tracep->fullIData(oldp+10972,(0x62U),32);
        tracep->fullIData(oldp+10973,(0x63U),32);
        tracep->fullIData(oldp+10974,(0x64U),32);
        tracep->fullIData(oldp+10975,(0x65U),32);
        tracep->fullIData(oldp+10976,(0x66U),32);
        tracep->fullIData(oldp+10977,(0x67U),32);
        tracep->fullIData(oldp+10978,(0x68U),32);
        tracep->fullIData(oldp+10979,(0x69U),32);
        tracep->fullIData(oldp+10980,(0x6aU),32);
        tracep->fullIData(oldp+10981,(0x6bU),32);
        tracep->fullIData(oldp+10982,(0x6cU),32);
        tracep->fullIData(oldp+10983,(0x6dU),32);
        tracep->fullIData(oldp+10984,(0x6eU),32);
        tracep->fullIData(oldp+10985,(0x6fU),32);
        tracep->fullIData(oldp+10986,(0x70U),32);
        tracep->fullIData(oldp+10987,(0x71U),32);
        tracep->fullIData(oldp+10988,(0x72U),32);
        tracep->fullIData(oldp+10989,(0x73U),32);
        tracep->fullIData(oldp+10990,(0x74U),32);
        tracep->fullIData(oldp+10991,(0x75U),32);
        tracep->fullIData(oldp+10992,(0x76U),32);
        tracep->fullIData(oldp+10993,(0x77U),32);
        tracep->fullIData(oldp+10994,(0x78U),32);
        tracep->fullIData(oldp+10995,(0x79U),32);
        tracep->fullIData(oldp+10996,(0x7aU),32);
        tracep->fullIData(oldp+10997,(0x7bU),32);
        tracep->fullIData(oldp+10998,(0x7cU),32);
        tracep->fullIData(oldp+10999,(0x7dU),32);
        tracep->fullIData(oldp+11000,(0x7eU),32);
        tracep->fullIData(oldp+11001,(0xaf35U),32);
        tracep->fullBit(oldp+11002,(0U));
        tracep->fullBit(oldp+11003,(0U));
        tracep->fullBit(oldp+11004,(0U));
        tracep->fullBit(oldp+11005,(0U));
        tracep->fullBit(oldp+11006,(0U));
        tracep->fullBit(oldp+11007,(0U));
        tracep->fullCData(oldp+11008,(2U),4);
        tracep->fullCData(oldp+11009,(8U),5);
        tracep->fullQData(oldp+11010,(0x800ULL),64);
        tracep->fullQData(oldp+11012,(0x804ULL),64);
        tracep->fullQData(oldp+11014,(0x808ULL),64);
        tracep->fullIData(oldp+11016,(0x40060000U),32);
        tracep->fullIData(oldp+11017,(0x40070000U),32);
        tracep->fullIData(oldp+11018,(0x40080000U),32);
        tracep->fullIData(oldp+11019,(0x40090000U),32);
        tracep->fullIData(oldp+11020,(0x400a0000U),32);
        tracep->fullIData(oldp+11021,(0x400b0000U),32);
        tracep->fullIData(oldp+11022,(0x400c0000U),32);
        tracep->fullIData(oldp+11023,(0x400d0000U),32);
        tracep->fullIData(oldp+11024,(0x400e0000U),32);
        tracep->fullIData(oldp+11025,(0x400f0000U),32);
        tracep->fullIData(oldp+11026,(0x40100000U),32);
        tracep->fullIData(oldp+11027,(0x40200000U),32);
        tracep->fullIData(oldp+11028,(0x40300000U),32);
        tracep->fullIData(oldp+11029,(0xffffU),32);
        tracep->fullIData(oldp+11030,(0xfffU),32);
        tracep->fullIData(oldp+11031,(0x10040000U),32);
        tracep->fullIData(oldp+11032,(0x10000000U),32);
        tracep->fullIData(oldp+11033,(0x10080000U),32);
        tracep->fullIData(oldp+11034,(0x40000000U),32);
        tracep->fullIData(oldp+11035,(0x40010000U),32);
        tracep->fullIData(oldp+11036,(0x40020000U),32);
        tracep->fullIData(oldp+11037,(0x40030000U),32);
        tracep->fullIData(oldp+11038,(0x40040000U),32);
        tracep->fullIData(oldp+11039,(0x40050000U),32);
        tracep->fullCData(oldp+11040,(3U),2);
        tracep->fullCData(oldp+11041,(0U),8);
        tracep->fullIData(oldp+11042,(2U),32);
        tracep->fullBit(oldp+11043,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer0_i))));
        tracep->fullBit(oldp+11044,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer0_i 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+11045,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer0_i 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer0_i 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer0_i 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer0_i 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+11047,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i))));
        tracep->fullBit(oldp+11048,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+11049,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+11051,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i))));
        tracep->fullBit(oldp+11052,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+11053,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+11055,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i))));
        tracep->fullBit(oldp+11056,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+11057,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullBit(oldp+11059,((1U & (IData)(vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i))));
        tracep->fullBit(oldp+11060,((1U & (IData)((vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                   >> 0x33U)))));
        tracep->fullQData(oldp+11061,((((QData)((IData)(
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                                    >> 0x22U))))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                                       >> 0x30U))))
                                                           ? (IData)(
                                                                     (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                                      >> 2U))
                                                           : 0U))) 
                                         << 2U) | (QData)((IData)(
                                                                  (2U 
                                                                   & ((IData)(
                                                                              (vlTOPp->Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i 
                                                                               >> 1U)) 
                                                                      << 1U))))))),51);
        tracep->fullCData(oldp+11063,(4U),6);
        tracep->fullCData(oldp+11064,(8U),6);
        tracep->fullCData(oldp+11065,(0xcU),6);
        tracep->fullCData(oldp+11066,(0x10U),6);
        tracep->fullCData(oldp+11067,(0x14U),6);
        tracep->fullCData(oldp+11068,(0x18U),6);
        tracep->fullCData(oldp+11069,(0x1cU),6);
        tracep->fullCData(oldp+11070,(0x20U),6);
        tracep->fullCData(oldp+11071,(0x24U),6);
        tracep->fullCData(oldp+11072,(0x28U),6);
        tracep->fullCData(oldp+11073,(0x2cU),6);
        tracep->fullCData(oldp+11074,(0x30U),6);
        tracep->fullCData(oldp+11075,(0x34U),6);
        tracep->fullCData(oldp+11076,(0x38U),6);
        tracep->fullSData(oldp+11077,(0U),9);
        tracep->fullSData(oldp+11078,(4U),9);
        tracep->fullSData(oldp+11079,(8U),9);
        tracep->fullSData(oldp+11080,(0xcU),9);
        tracep->fullSData(oldp+11081,(0x10U),9);
        tracep->fullSData(oldp+11082,(0x14U),9);
        tracep->fullSData(oldp+11083,(0x18U),9);
        tracep->fullSData(oldp+11084,(0x1cU),9);
        tracep->fullSData(oldp+11085,(0x20U),9);
        tracep->fullSData(oldp+11086,(0x24U),9);
        tracep->fullSData(oldp+11087,(0x28U),9);
        tracep->fullSData(oldp+11088,(0x2cU),9);
        tracep->fullSData(oldp+11089,(0x30U),9);
        tracep->fullSData(oldp+11090,(0x34U),9);
        tracep->fullSData(oldp+11091,(0x38U),9);
        tracep->fullSData(oldp+11092,(0x3cU),9);
        tracep->fullSData(oldp+11093,(0x40U),9);
        tracep->fullSData(oldp+11094,(0x44U),9);
        tracep->fullSData(oldp+11095,(0x48U),9);
        tracep->fullSData(oldp+11096,(0x4cU),9);
        tracep->fullSData(oldp+11097,(0x50U),9);
        tracep->fullSData(oldp+11098,(0x54U),9);
        tracep->fullSData(oldp+11099,(0x58U),9);
        tracep->fullSData(oldp+11100,(0x5cU),9);
        tracep->fullSData(oldp+11101,(0x60U),9);
        tracep->fullSData(oldp+11102,(0x64U),9);
        tracep->fullSData(oldp+11103,(0x68U),9);
        tracep->fullSData(oldp+11104,(0x6cU),9);
        tracep->fullSData(oldp+11105,(0x70U),9);
        tracep->fullSData(oldp+11106,(0x74U),9);
        tracep->fullSData(oldp+11107,(0x78U),9);
        tracep->fullSData(oldp+11108,(0x7cU),9);
        tracep->fullSData(oldp+11109,(0x80U),9);
        tracep->fullSData(oldp+11110,(0x84U),9);
        tracep->fullSData(oldp+11111,(0x100U),9);
        tracep->fullSData(oldp+11112,(0x104U),9);
        tracep->fullSData(oldp+11113,(0x108U),9);
        tracep->fullSData(oldp+11114,(0x10cU),9);
        tracep->fullSData(oldp+11115,(0x3a0U),12);
        tracep->fullSData(oldp+11116,(0x3b0U),12);
        tracep->fullIData(oldp+11117,(7U),32);
        tracep->fullIData(oldp+11118,(0x11U),32);
        tracep->fullIData(oldp+11119,(0x15U),32);
        tracep->fullIData(oldp+11120,(0x505043U),24);
        tracep->fullBit(oldp+11121,(0U));
        tracep->fullCData(oldp+11122,(0U),3);
        tracep->fullCData(oldp+11123,(0U),3);
        tracep->fullCData(oldp+11124,(0U),2);
        tracep->fullCData(oldp+11125,(0U),8);
        tracep->fullIData(oldp+11126,(0U),32);
        tracep->fullCData(oldp+11127,(0U),4);
        tracep->fullIData(oldp+11128,(0U),32);
        tracep->fullBit(oldp+11129,(1U));
        tracep->fullBit(oldp+11130,(0U));
        tracep->fullCData(oldp+11131,(0U),3);
        tracep->fullCData(oldp+11132,(0U),3);
        tracep->fullCData(oldp+11133,(0U),2);
        tracep->fullCData(oldp+11134,(0U),8);
        tracep->fullBit(oldp+11135,(0U));
        tracep->fullIData(oldp+11136,(0U),32);
        tracep->fullBit(oldp+11137,(0U));
        tracep->fullBit(oldp+11138,(1U));
    }
}
