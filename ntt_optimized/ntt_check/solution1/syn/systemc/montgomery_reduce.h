// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _montgomery_reduce_HH_
#define _montgomery_reduce_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct montgomery_reduce : public sc_module {
    // Port declarations 5
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_lv<64> > a;
    sc_out< sc_lv<32> > ap_return;
    sc_in< sc_logic > ap_ce;


    // Module declarations
    montgomery_reduce(sc_module_name name);
    SC_HAS_PROCESS(montgomery_reduce);

    ~montgomery_reduce();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<64> > a_read_reg_57;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<64> > a_read_reg_57_pp0_iter1_reg;
    sc_signal< sc_lv<32> > t_fu_24_p2;
    sc_signal< sc_lv<32> > t_reg_62;
    sc_signal< sc_lv<55> > t_1_fu_33_p2;
    sc_signal< sc_lv<55> > t_1_reg_67;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<32> > tmp_403_fu_20_p1;
    sc_signal< sc_lv<32> > t_1_fu_33_p1;
    sc_signal< sc_lv<64> > t_2_cast_fu_39_p1;
    sc_signal< sc_lv<64> > t_2_fu_42_p2;
    sc_signal< sc_logic > ap_ce_reg;
    sc_signal< sc_lv<64> > a_int_reg;
    sc_signal< sc_lv<32> > ap_return_int_reg;
    sc_signal< sc_lv<55> > t_1_fu_33_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const bool ap_const_boolean_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_FC7FDFFF;
    static const sc_lv<55> ap_const_lv55_7FE001;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_3F;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state2_pp0_stage0_iter1();
    void thread_ap_block_state3_pp0_stage0_iter2();
    void thread_ap_return();
    void thread_t_1_fu_33_p1();
    void thread_t_1_fu_33_p10();
    void thread_t_1_fu_33_p2();
    void thread_t_2_cast_fu_39_p1();
    void thread_t_2_fu_42_p2();
    void thread_t_fu_24_p2();
    void thread_tmp_403_fu_20_p1();
};

}

using namespace ap_rtl;

#endif