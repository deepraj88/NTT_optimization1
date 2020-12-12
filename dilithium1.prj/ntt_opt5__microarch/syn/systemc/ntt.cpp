// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "ntt.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic ntt::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic ntt::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<12> ntt::ap_ST_fsm_state1 = "1";
const sc_lv<12> ntt::ap_ST_fsm_state2 = "10";
const sc_lv<12> ntt::ap_ST_fsm_state3 = "100";
const sc_lv<12> ntt::ap_ST_fsm_state4 = "1000";
const sc_lv<12> ntt::ap_ST_fsm_state5 = "10000";
const sc_lv<12> ntt::ap_ST_fsm_state6 = "100000";
const sc_lv<12> ntt::ap_ST_fsm_state7 = "1000000";
const sc_lv<12> ntt::ap_ST_fsm_state8 = "10000000";
const sc_lv<12> ntt::ap_ST_fsm_state9 = "100000000";
const sc_lv<12> ntt::ap_ST_fsm_state10 = "1000000000";
const sc_lv<12> ntt::ap_ST_fsm_state11 = "10000000000";
const sc_lv<12> ntt::ap_ST_fsm_state12 = "100000000000";
const sc_lv<32> ntt::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> ntt::ap_const_lv32_1 = "1";
const sc_lv<32> ntt::ap_const_lv32_2 = "10";
const sc_lv<1> ntt::ap_const_lv1_1 = "1";
const sc_lv<1> ntt::ap_const_lv1_0 = "0";
const sc_lv<32> ntt::ap_const_lv32_3 = "11";
const sc_lv<32> ntt::ap_const_lv32_4 = "100";
const sc_lv<32> ntt::ap_const_lv32_5 = "101";
const sc_lv<32> ntt::ap_const_lv32_6 = "110";
const sc_lv<32> ntt::ap_const_lv32_7 = "111";
const sc_lv<32> ntt::ap_const_lv32_8 = "1000";
const sc_lv<29> ntt::ap_const_lv29_80 = "10000000";
const sc_lv<31> ntt::ap_const_lv31_0 = "0000000000000000000000000000000";
const sc_lv<32> ntt::ap_const_lv32_B = "1011";
const sc_lv<32> ntt::ap_const_lv32_9 = "1001";
const sc_lv<32> ntt::ap_const_lv32_A = "1010";
const sc_lv<29> ntt::ap_const_lv29_0 = "00000000000000000000000000000";
const sc_lv<32> ntt::ap_const_lv32_1E = "11110";
const sc_lv<23> ntt::ap_const_lv23_0 = "00000000000000000000000";
const sc_lv<32> ntt::ap_const_lv32_1C = "11100";
const sc_lv<31> ntt::ap_const_lv31_1 = "1";
const sc_lv<26> ntt::ap_const_lv26_0 = "00000000000000000000000000";
const sc_lv<13> ntt::ap_const_lv13_0 = "0000000000000";
const sc_lv<32> ntt::ap_const_lv32_20 = "100000";
const sc_lv<32> ntt::ap_const_lv32_38 = "111000";
const sc_lv<26> ntt::ap_const_lv26_FFC002 = "111111111100000000000010";
const bool ntt::ap_const_boolean_1 = true;

ntt::ntt(sc_module_name name) : sc_module(name), mVcdFile(0) {
    zetas_U = new ntt_zetas("zetas_U");
    zetas_U->clk(ap_clk);
    zetas_U->reset(ap_rst);
    zetas_U->address0(zetas_address0);
    zetas_U->ce0(zetas_ce0);
    zetas_U->q0(zetas_q0);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_a_assign_fu_271_p0);
    sensitive << ( tmp_6_cast_reg_470 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_a_assign_fu_271_p1);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( a_assign_fu_271_p10 );

    SC_METHOD(thread_a_assign_fu_271_p10);
    sensitive << ( p_load_reg_498 );

    SC_METHOD(thread_a_assign_fu_271_p2);
    sensitive << ( a_assign_fu_271_p0 );
    sensitive << ( a_assign_fu_271_p1 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state10);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state11);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state12);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state9);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_150_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_150_p2 );

    SC_METHOD(thread_icmp_fu_166_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_1_fu_156_p4 );

    SC_METHOD(thread_j_1_fu_254_p2);
    sensitive << ( j1_reg_131 );

    SC_METHOD(thread_k_1_fu_194_p2);
    sensitive << ( k_fu_70 );

    SC_METHOD(thread_len_1_fu_190_p1);
    sensitive << ( tmp_17_fu_180_p4 );

    SC_METHOD(thread_len_cast_cast4_fu_146_p1);
    sensitive << ( len_reg_107 );

    SC_METHOD(thread_p_address0);
    sensitive << ( p_addr_reg_478 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( p_addr_1_reg_483 );
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( ap_CS_fsm_state12 );
    sensitive << ( tmp_s_fu_244_p1 );
    sensitive << ( ap_CS_fsm_state10 );
    sensitive << ( ap_CS_fsm_state11 );

    SC_METHOD(thread_p_ce0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( ap_CS_fsm_state12 );
    sensitive << ( ap_CS_fsm_state10 );
    sensitive << ( ap_CS_fsm_state11 );

    SC_METHOD(thread_p_d0);
    sensitive << ( ap_CS_fsm_state12 );
    sensitive << ( ap_CS_fsm_state10 );
    sensitive << ( tmp_11_fu_403_p2 );
    sensitive << ( tmp_12_fu_413_p2 );

    SC_METHOD(thread_p_we0);
    sensitive << ( ap_CS_fsm_state12 );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_start_cast_fu_226_p1);
    sensitive << ( start_fu_218_p3 );

    SC_METHOD(thread_start_fu_218_p3);
    sensitive << ( tmp_5_fu_204_p2 );
    sensitive << ( tmp_14_fu_210_p1 );
    sensitive << ( tmp_15_fu_214_p1 );

    SC_METHOD(thread_sum3_neg_i_fu_318_p2);
    sensitive << ( sum_neg_i_fu_313_p2 );
    sensitive << ( tmp_i_fu_292_p3 );

    SC_METHOD(thread_sum_neg_i_fu_313_p2);
    sensitive << ( temp_reg_508 );
    sensitive << ( tmp_i_9_fu_299_p3 );

    SC_METHOD(thread_t_1_cast_fu_390_p1);
    sensitive << ( tmp_7_reg_535 );

    SC_METHOD(thread_t_1_fu_410_p1);
    sensitive << ( tmp_7_reg_535 );

    SC_METHOD(thread_t_cast_fu_330_p1);
    sensitive << ( temp_1_reg_528 );

    SC_METHOD(thread_t_fu_374_p2);
    sensitive << ( tmp_19_i_cast_fu_370_p1 );
    sensitive << ( tmp_17_i_cast_fu_351_p1 );

    SC_METHOD(thread_temp_1_fu_324_p2);
    sensitive << ( sum3_neg_i_fu_318_p2 );
    sensitive << ( tmp_15_i_fu_306_p3 );

    SC_METHOD(thread_temp_fu_276_p1);
    sensitive << ( a_assign_fu_271_p2 );

    SC_METHOD(thread_tmp1_cast_fu_360_p1);
    sensitive << ( tmp1_fu_355_p2 );

    SC_METHOD(thread_tmp1_fu_355_p2);
    sensitive << ( a_assign_reg_503 );
    sensitive << ( t_cast_fu_330_p1 );

    SC_METHOD(thread_tmp_10_cast_fu_399_p1);
    sensitive << ( tmp_10_fu_393_p2 );

    SC_METHOD(thread_tmp_10_fu_393_p2);
    sensitive << ( t_1_cast_fu_390_p1 );

    SC_METHOD(thread_tmp_11_fu_403_p2);
    sensitive << ( p_q0 );
    sensitive << ( tmp_10_cast_fu_399_p1 );

    SC_METHOD(thread_tmp_12_fu_413_p2);
    sensitive << ( p_q0 );
    sensitive << ( t_1_fu_410_p1 );

    SC_METHOD(thread_tmp_13_fu_260_p2);
    sensitive << ( len_cast_cast4_reg_427 );
    sensitive << ( start_cast_reg_465 );

    SC_METHOD(thread_tmp_14_fu_210_p1);
    sensitive << ( j_reg_119 );

    SC_METHOD(thread_tmp_15_fu_214_p1);
    sensitive << ( tmp_4_fu_199_p2 );

    SC_METHOD(thread_tmp_15_i_fu_306_p3);
    sensitive << ( tmp_21_reg_523 );

    SC_METHOD(thread_tmp_16_i_cast_fu_340_p1);
    sensitive << ( tmp_16_i_fu_333_p3 );

    SC_METHOD(thread_tmp_16_i_fu_333_p3);
    sensitive << ( temp_1_reg_528 );

    SC_METHOD(thread_tmp_17_fu_180_p4);
    sensitive << ( len_reg_107 );

    SC_METHOD(thread_tmp_17_i_cast_fu_351_p1);
    sensitive << ( tmp_17_i_fu_344_p3 );

    SC_METHOD(thread_tmp_17_i_fu_344_p3);
    sensitive << ( temp_1_reg_528 );

    SC_METHOD(thread_tmp_19_fu_280_p1);
    sensitive << ( a_assign_fu_271_p2 );

    SC_METHOD(thread_tmp_19_i_cast_fu_370_p1);
    sensitive << ( tmp_19_i_fu_364_p2 );

    SC_METHOD(thread_tmp_19_i_fu_364_p2);
    sensitive << ( tmp_16_i_cast_fu_340_p1 );
    sensitive << ( tmp1_cast_fu_360_p1 );

    SC_METHOD(thread_tmp_1_fu_156_p4);
    sensitive << ( j_reg_119 );

    SC_METHOD(thread_tmp_20_fu_284_p1);
    sensitive << ( a_assign_fu_271_p2 );

    SC_METHOD(thread_tmp_21_fu_288_p1);
    sensitive << ( a_assign_fu_271_p2 );

    SC_METHOD(thread_tmp_3_fu_175_p1);
    sensitive << ( k_fu_70 );

    SC_METHOD(thread_tmp_4_fu_199_p2);
    sensitive << ( len_cast_cast4_reg_427 );
    sensitive << ( j_reg_119 );

    SC_METHOD(thread_tmp_5_fu_204_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_4_fu_199_p2 );
    sensitive << ( j_reg_119 );

    SC_METHOD(thread_tmp_6_cast_fu_230_p1);
    sensitive << ( zetas_q0 );

    SC_METHOD(thread_tmp_6_fu_249_p1);
    sensitive << ( j1_reg_131 );

    SC_METHOD(thread_tmp_8_fu_234_p2);
    sensitive << ( tmp_4_reg_460 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( j1_reg_131 );

    SC_METHOD(thread_tmp_9_fu_239_p2);
    sensitive << ( len_cast_cast4_reg_427 );
    sensitive << ( j1_reg_131 );

    SC_METHOD(thread_tmp_fu_150_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( len_reg_107 );

    SC_METHOD(thread_tmp_i_9_fu_299_p3);
    sensitive << ( tmp_20_reg_518 );

    SC_METHOD(thread_tmp_i_fu_292_p3);
    sensitive << ( tmp_19_reg_513 );

    SC_METHOD(thread_tmp_s_fu_244_p1);
    sensitive << ( tmp_9_fu_239_p2 );

    SC_METHOD(thread_zetas_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_3_fu_175_p1 );

    SC_METHOD(thread_zetas_ce0);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_fu_166_p2 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( tmp_8_fu_234_p2 );
    sensitive << ( tmp_fu_150_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "000000000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "ntt_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, p_address0, "(port)p_address0");
    sc_trace(mVcdFile, p_ce0, "(port)p_ce0");
    sc_trace(mVcdFile, p_we0, "(port)p_we0");
    sc_trace(mVcdFile, p_d0, "(port)p_d0");
    sc_trace(mVcdFile, p_q0, "(port)p_q0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, zetas_address0, "zetas_address0");
    sc_trace(mVcdFile, zetas_ce0, "zetas_ce0");
    sc_trace(mVcdFile, zetas_q0, "zetas_q0");
    sc_trace(mVcdFile, len_cast_cast4_fu_146_p1, "len_cast_cast4_fu_146_p1");
    sc_trace(mVcdFile, len_cast_cast4_reg_427, "len_cast_cast4_reg_427");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, icmp_fu_166_p2, "icmp_fu_166_p2");
    sc_trace(mVcdFile, len_1_fu_190_p1, "len_1_fu_190_p1");
    sc_trace(mVcdFile, k_1_fu_194_p2, "k_1_fu_194_p2");
    sc_trace(mVcdFile, k_1_reg_455, "k_1_reg_455");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, tmp_4_fu_199_p2, "tmp_4_fu_199_p2");
    sc_trace(mVcdFile, tmp_4_reg_460, "tmp_4_reg_460");
    sc_trace(mVcdFile, start_cast_fu_226_p1, "start_cast_fu_226_p1");
    sc_trace(mVcdFile, start_cast_reg_465, "start_cast_reg_465");
    sc_trace(mVcdFile, tmp_6_cast_fu_230_p1, "tmp_6_cast_fu_230_p1");
    sc_trace(mVcdFile, tmp_6_cast_reg_470, "tmp_6_cast_reg_470");
    sc_trace(mVcdFile, p_addr_reg_478, "p_addr_reg_478");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, tmp_8_fu_234_p2, "tmp_8_fu_234_p2");
    sc_trace(mVcdFile, p_addr_1_reg_483, "p_addr_1_reg_483");
    sc_trace(mVcdFile, j_1_fu_254_p2, "j_1_fu_254_p2");
    sc_trace(mVcdFile, j_1_reg_488, "j_1_reg_488");
    sc_trace(mVcdFile, tmp_13_fu_260_p2, "tmp_13_fu_260_p2");
    sc_trace(mVcdFile, p_load_reg_498, "p_load_reg_498");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, a_assign_fu_271_p2, "a_assign_fu_271_p2");
    sc_trace(mVcdFile, a_assign_reg_503, "a_assign_reg_503");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, temp_fu_276_p1, "temp_fu_276_p1");
    sc_trace(mVcdFile, temp_reg_508, "temp_reg_508");
    sc_trace(mVcdFile, tmp_19_fu_280_p1, "tmp_19_fu_280_p1");
    sc_trace(mVcdFile, tmp_19_reg_513, "tmp_19_reg_513");
    sc_trace(mVcdFile, tmp_20_fu_284_p1, "tmp_20_fu_284_p1");
    sc_trace(mVcdFile, tmp_20_reg_518, "tmp_20_reg_518");
    sc_trace(mVcdFile, tmp_21_fu_288_p1, "tmp_21_fu_288_p1");
    sc_trace(mVcdFile, tmp_21_reg_523, "tmp_21_reg_523");
    sc_trace(mVcdFile, temp_1_fu_324_p2, "temp_1_fu_324_p2");
    sc_trace(mVcdFile, temp_1_reg_528, "temp_1_reg_528");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, tmp_7_reg_535, "tmp_7_reg_535");
    sc_trace(mVcdFile, ap_CS_fsm_state9, "ap_CS_fsm_state9");
    sc_trace(mVcdFile, len_reg_107, "len_reg_107");
    sc_trace(mVcdFile, j_reg_119, "j_reg_119");
    sc_trace(mVcdFile, tmp_fu_150_p2, "tmp_fu_150_p2");
    sc_trace(mVcdFile, j1_reg_131, "j1_reg_131");
    sc_trace(mVcdFile, ap_CS_fsm_state12, "ap_CS_fsm_state12");
    sc_trace(mVcdFile, tmp_3_fu_175_p1, "tmp_3_fu_175_p1");
    sc_trace(mVcdFile, tmp_s_fu_244_p1, "tmp_s_fu_244_p1");
    sc_trace(mVcdFile, tmp_6_fu_249_p1, "tmp_6_fu_249_p1");
    sc_trace(mVcdFile, k_fu_70, "k_fu_70");
    sc_trace(mVcdFile, ap_CS_fsm_state10, "ap_CS_fsm_state10");
    sc_trace(mVcdFile, tmp_11_fu_403_p2, "tmp_11_fu_403_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state11, "ap_CS_fsm_state11");
    sc_trace(mVcdFile, tmp_12_fu_413_p2, "tmp_12_fu_413_p2");
    sc_trace(mVcdFile, tmp_1_fu_156_p4, "tmp_1_fu_156_p4");
    sc_trace(mVcdFile, tmp_17_fu_180_p4, "tmp_17_fu_180_p4");
    sc_trace(mVcdFile, tmp_5_fu_204_p2, "tmp_5_fu_204_p2");
    sc_trace(mVcdFile, tmp_14_fu_210_p1, "tmp_14_fu_210_p1");
    sc_trace(mVcdFile, tmp_15_fu_214_p1, "tmp_15_fu_214_p1");
    sc_trace(mVcdFile, start_fu_218_p3, "start_fu_218_p3");
    sc_trace(mVcdFile, tmp_9_fu_239_p2, "tmp_9_fu_239_p2");
    sc_trace(mVcdFile, a_assign_fu_271_p0, "a_assign_fu_271_p0");
    sc_trace(mVcdFile, a_assign_fu_271_p1, "a_assign_fu_271_p1");
    sc_trace(mVcdFile, tmp_i_9_fu_299_p3, "tmp_i_9_fu_299_p3");
    sc_trace(mVcdFile, sum_neg_i_fu_313_p2, "sum_neg_i_fu_313_p2");
    sc_trace(mVcdFile, tmp_i_fu_292_p3, "tmp_i_fu_292_p3");
    sc_trace(mVcdFile, sum3_neg_i_fu_318_p2, "sum3_neg_i_fu_318_p2");
    sc_trace(mVcdFile, tmp_15_i_fu_306_p3, "tmp_15_i_fu_306_p3");
    sc_trace(mVcdFile, tmp_16_i_fu_333_p3, "tmp_16_i_fu_333_p3");
    sc_trace(mVcdFile, tmp_17_i_fu_344_p3, "tmp_17_i_fu_344_p3");
    sc_trace(mVcdFile, t_cast_fu_330_p1, "t_cast_fu_330_p1");
    sc_trace(mVcdFile, tmp1_fu_355_p2, "tmp1_fu_355_p2");
    sc_trace(mVcdFile, tmp_16_i_cast_fu_340_p1, "tmp_16_i_cast_fu_340_p1");
    sc_trace(mVcdFile, tmp1_cast_fu_360_p1, "tmp1_cast_fu_360_p1");
    sc_trace(mVcdFile, tmp_19_i_fu_364_p2, "tmp_19_i_fu_364_p2");
    sc_trace(mVcdFile, tmp_19_i_cast_fu_370_p1, "tmp_19_i_cast_fu_370_p1");
    sc_trace(mVcdFile, tmp_17_i_cast_fu_351_p1, "tmp_17_i_cast_fu_351_p1");
    sc_trace(mVcdFile, t_fu_374_p2, "t_fu_374_p2");
    sc_trace(mVcdFile, t_1_cast_fu_390_p1, "t_1_cast_fu_390_p1");
    sc_trace(mVcdFile, tmp_10_fu_393_p2, "tmp_10_fu_393_p2");
    sc_trace(mVcdFile, tmp_10_cast_fu_399_p1, "tmp_10_cast_fu_399_p1");
    sc_trace(mVcdFile, t_1_fu_410_p1, "t_1_fu_410_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, a_assign_fu_271_p10, "a_assign_fu_271_p10");
#endif

    }
    mHdltvinHandle.open("ntt.hdltvin.dat");
    mHdltvoutHandle.open("ntt.hdltvout.dat");
}

ntt::~ntt() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete zetas_U;
}

void ntt::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        j1_reg_131 = j_1_reg_488.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        j1_reg_131 = j_reg_119.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_fu_234_p2.read()))) {
        j_reg_119 = tmp_13_fu_260_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, tmp_fu_150_p2.read()))) {
        j_reg_119 = ap_const_lv31_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_fu_234_p2.read()))) {
        k_fu_70 = k_1_reg_455.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        k_fu_70 = ap_const_lv32_1;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_fu_166_p2.read(), ap_const_lv1_0))) {
        len_reg_107 = len_1_fu_190_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        len_reg_107 = ap_const_lv29_80;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        a_assign_reg_503 = a_assign_fu_271_p2.read();
        temp_reg_508 = temp_fu_276_p1.read();
        tmp_19_reg_513 = tmp_19_fu_280_p1.read();
        tmp_20_reg_518 = tmp_20_fu_284_p1.read();
        tmp_21_reg_523 = tmp_21_fu_288_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_8_fu_234_p2.read()))) {
        j_1_reg_488 = j_1_fu_254_p2.read();
        p_addr_1_reg_483 =  (sc_lv<8>) (tmp_6_fu_249_p1.read());
        p_addr_reg_478 =  (sc_lv<8>) (tmp_s_fu_244_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        k_1_reg_455 = k_1_fu_194_p2.read();
        start_cast_reg_465 = start_cast_fu_226_p1.read();
        tmp_4_reg_460 = tmp_4_fu_199_p2.read();
        tmp_6_cast_reg_470 = tmp_6_cast_fu_230_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        len_cast_cast4_reg_427 = len_cast_cast4_fu_146_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        p_load_reg_498 = p_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        temp_1_reg_528 = temp_1_fu_324_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        tmp_7_reg_535 = t_fu_374_p2.read().range(56, 32);
    }
}

void ntt::thread_a_assign_fu_271_p0() {
    a_assign_fu_271_p0 =  (sc_lv<23>) (tmp_6_cast_reg_470.read());
}

void ntt::thread_a_assign_fu_271_p1() {
    a_assign_fu_271_p1 =  (sc_lv<32>) (a_assign_fu_271_p10.read());
}

void ntt::thread_a_assign_fu_271_p10() {
    a_assign_fu_271_p10 = esl_zext<55,32>(p_load_reg_498.read());
}

void ntt::thread_a_assign_fu_271_p2() {
    a_assign_fu_271_p2 = (!a_assign_fu_271_p0.read().is_01() || !a_assign_fu_271_p1.read().is_01())? sc_lv<55>(): sc_biguint<23>(a_assign_fu_271_p0.read()) * sc_biguint<32>(a_assign_fu_271_p1.read());
}

void ntt::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void ntt::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void ntt::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void ntt::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void ntt::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void ntt::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void ntt::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void ntt::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void ntt::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void ntt::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void ntt::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void ntt::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void ntt::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_fu_150_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void ntt::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void ntt::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_fu_150_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void ntt::thread_icmp_fu_166_p2() {
    icmp_fu_166_p2 = (!tmp_1_fu_156_p4.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_1_fu_156_p4.read() == ap_const_lv23_0);
}

void ntt::thread_j_1_fu_254_p2() {
    j_1_fu_254_p2 = (!ap_const_lv31_1.is_01() || !j1_reg_131.read().is_01())? sc_lv<31>(): (sc_biguint<31>(ap_const_lv31_1) + sc_biguint<31>(j1_reg_131.read()));
}

void ntt::thread_k_1_fu_194_p2() {
    k_1_fu_194_p2 = (!ap_const_lv32_1.is_01() || !k_fu_70.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(k_fu_70.read()));
}

void ntt::thread_len_1_fu_190_p1() {
    len_1_fu_190_p1 = esl_zext<29,28>(tmp_17_fu_180_p4.read());
}

void ntt::thread_len_cast_cast4_fu_146_p1() {
    len_cast_cast4_fu_146_p1 = esl_zext<31,29>(len_reg_107.read());
}

void ntt::thread_p_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        p_address0 = p_addr_reg_478.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        p_address0 = p_addr_1_reg_483.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        p_address0 =  (sc_lv<8>) (tmp_s_fu_244_p1.read());
    } else {
        p_address0 = "XXXXXXXX";
    }
}

void ntt::thread_p_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        p_ce0 = ap_const_logic_1;
    } else {
        p_ce0 = ap_const_logic_0;
    }
}

void ntt::thread_p_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        p_d0 = tmp_12_fu_413_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        p_d0 = tmp_11_fu_403_p2.read();
    } else {
        p_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ntt::thread_p_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        p_we0 = ap_const_logic_1;
    } else {
        p_we0 = ap_const_logic_0;
    }
}

void ntt::thread_start_cast_fu_226_p1() {
    start_cast_fu_226_p1 = esl_zext<31,30>(start_fu_218_p3.read());
}

void ntt::thread_start_fu_218_p3() {
    start_fu_218_p3 = (!tmp_5_fu_204_p2.read()[0].is_01())? sc_lv<30>(): ((tmp_5_fu_204_p2.read()[0].to_bool())? tmp_14_fu_210_p1.read(): tmp_15_fu_214_p1.read());
}

void ntt::thread_sum3_neg_i_fu_318_p2() {
    sum3_neg_i_fu_318_p2 = (!sum_neg_i_fu_313_p2.read().is_01() || !tmp_i_fu_292_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum_neg_i_fu_313_p2.read()) - sc_biguint<32>(tmp_i_fu_292_p3.read()));
}

void ntt::thread_sum_neg_i_fu_313_p2() {
    sum_neg_i_fu_313_p2 = (!tmp_i_9_fu_299_p3.read().is_01() || !temp_reg_508.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_i_9_fu_299_p3.read()) - sc_biguint<32>(temp_reg_508.read()));
}

void ntt::thread_t_1_cast_fu_390_p1() {
    t_1_cast_fu_390_p1 = esl_sext<26,25>(tmp_7_reg_535.read());
}

void ntt::thread_t_1_fu_410_p1() {
    t_1_fu_410_p1 = esl_sext<32,25>(tmp_7_reg_535.read());
}

void ntt::thread_t_cast_fu_330_p1() {
    t_cast_fu_330_p1 = esl_zext<55,32>(temp_1_reg_528.read());
}

void ntt::thread_t_fu_374_p2() {
    t_fu_374_p2 = (!tmp_19_i_cast_fu_370_p1.read().is_01() || !tmp_17_i_cast_fu_351_p1.read().is_01())? sc_lv<57>(): (sc_biguint<57>(tmp_19_i_cast_fu_370_p1.read()) - sc_biguint<57>(tmp_17_i_cast_fu_351_p1.read()));
}

void ntt::thread_temp_1_fu_324_p2() {
    temp_1_fu_324_p2 = (!sum3_neg_i_fu_318_p2.read().is_01() || !tmp_15_i_fu_306_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sum3_neg_i_fu_318_p2.read()) - sc_biguint<32>(tmp_15_i_fu_306_p3.read()));
}

void ntt::thread_temp_fu_276_p1() {
    temp_fu_276_p1 = a_assign_fu_271_p2.read().range(32-1, 0);
}

void ntt::thread_tmp1_cast_fu_360_p1() {
    tmp1_cast_fu_360_p1 = esl_zext<56,55>(tmp1_fu_355_p2.read());
}

void ntt::thread_tmp1_fu_355_p2() {
    tmp1_fu_355_p2 = (!t_cast_fu_330_p1.read().is_01() || !a_assign_reg_503.read().is_01())? sc_lv<55>(): (sc_biguint<55>(t_cast_fu_330_p1.read()) + sc_biguint<55>(a_assign_reg_503.read()));
}

void ntt::thread_tmp_10_cast_fu_399_p1() {
    tmp_10_cast_fu_399_p1 = esl_sext<32,26>(tmp_10_fu_393_p2.read());
}

void ntt::thread_tmp_10_fu_393_p2() {
    tmp_10_fu_393_p2 = (!ap_const_lv26_FFC002.is_01() || !t_1_cast_fu_390_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(ap_const_lv26_FFC002) - sc_bigint<26>(t_1_cast_fu_390_p1.read()));
}

void ntt::thread_tmp_11_fu_403_p2() {
    tmp_11_fu_403_p2 = (!tmp_10_cast_fu_399_p1.read().is_01() || !p_q0.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_10_cast_fu_399_p1.read()) + sc_biguint<32>(p_q0.read()));
}

void ntt::thread_tmp_12_fu_413_p2() {
    tmp_12_fu_413_p2 = (!t_1_fu_410_p1.read().is_01() || !p_q0.read().is_01())? sc_lv<32>(): (sc_bigint<32>(t_1_fu_410_p1.read()) + sc_biguint<32>(p_q0.read()));
}

void ntt::thread_tmp_13_fu_260_p2() {
    tmp_13_fu_260_p2 = (!len_cast_cast4_reg_427.read().is_01() || !start_cast_reg_465.read().is_01())? sc_lv<31>(): (sc_biguint<31>(len_cast_cast4_reg_427.read()) + sc_biguint<31>(start_cast_reg_465.read()));
}

void ntt::thread_tmp_14_fu_210_p1() {
    tmp_14_fu_210_p1 = j_reg_119.read().range(30-1, 0);
}

void ntt::thread_tmp_15_fu_214_p1() {
    tmp_15_fu_214_p1 = tmp_4_fu_199_p2.read().range(30-1, 0);
}

void ntt::thread_tmp_15_i_fu_306_p3() {
    tmp_15_i_fu_306_p3 = esl_concat<19,13>(tmp_21_reg_523.read(), ap_const_lv13_0);
}

void ntt::thread_tmp_16_i_cast_fu_340_p1() {
    tmp_16_i_cast_fu_340_p1 = esl_zext<56,55>(tmp_16_i_fu_333_p3.read());
}

void ntt::thread_tmp_16_i_fu_333_p3() {
    tmp_16_i_fu_333_p3 = esl_concat<32,23>(temp_1_reg_528.read(), ap_const_lv23_0);
}

void ntt::thread_tmp_17_fu_180_p4() {
    tmp_17_fu_180_p4 = len_reg_107.read().range(28, 1);
}

void ntt::thread_tmp_17_i_cast_fu_351_p1() {
    tmp_17_i_cast_fu_351_p1 = esl_zext<57,45>(tmp_17_i_fu_344_p3.read());
}

void ntt::thread_tmp_17_i_fu_344_p3() {
    tmp_17_i_fu_344_p3 = esl_concat<32,13>(temp_1_reg_528.read(), ap_const_lv13_0);
}

void ntt::thread_tmp_19_fu_280_p1() {
    tmp_19_fu_280_p1 = a_assign_fu_271_p2.read().range(6-1, 0);
}

void ntt::thread_tmp_19_i_cast_fu_370_p1() {
    tmp_19_i_cast_fu_370_p1 = esl_zext<57,56>(tmp_19_i_fu_364_p2.read());
}

void ntt::thread_tmp_19_i_fu_364_p2() {
    tmp_19_i_fu_364_p2 = (!tmp_16_i_cast_fu_340_p1.read().is_01() || !tmp1_cast_fu_360_p1.read().is_01())? sc_lv<56>(): (sc_biguint<56>(tmp_16_i_cast_fu_340_p1.read()) + sc_biguint<56>(tmp1_cast_fu_360_p1.read()));
}

void ntt::thread_tmp_1_fu_156_p4() {
    tmp_1_fu_156_p4 = j_reg_119.read().range(30, 8);
}

void ntt::thread_tmp_20_fu_284_p1() {
    tmp_20_fu_284_p1 = a_assign_fu_271_p2.read().range(9-1, 0);
}

void ntt::thread_tmp_21_fu_288_p1() {
    tmp_21_fu_288_p1 = a_assign_fu_271_p2.read().range(19-1, 0);
}

void ntt::thread_tmp_3_fu_175_p1() {
    tmp_3_fu_175_p1 = esl_zext<64,32>(k_fu_70.read());
}

void ntt::thread_tmp_4_fu_199_p2() {
    tmp_4_fu_199_p2 = (!len_cast_cast4_reg_427.read().is_01() || !j_reg_119.read().is_01())? sc_lv<31>(): (sc_biguint<31>(len_cast_cast4_reg_427.read()) + sc_biguint<31>(j_reg_119.read()));
}

void ntt::thread_tmp_5_fu_204_p2() {
    tmp_5_fu_204_p2 = (!j_reg_119.read().is_01() || !tmp_4_fu_199_p2.read().is_01())? sc_lv<1>(): (sc_biguint<31>(j_reg_119.read()) > sc_biguint<31>(tmp_4_fu_199_p2.read()));
}

void ntt::thread_tmp_6_cast_fu_230_p1() {
    tmp_6_cast_fu_230_p1 = esl_zext<55,23>(zetas_q0.read());
}

void ntt::thread_tmp_6_fu_249_p1() {
    tmp_6_fu_249_p1 = esl_zext<64,31>(j1_reg_131.read());
}

void ntt::thread_tmp_8_fu_234_p2() {
    tmp_8_fu_234_p2 = (!j1_reg_131.read().is_01() || !tmp_4_reg_460.read().is_01())? sc_lv<1>(): (sc_biguint<31>(j1_reg_131.read()) < sc_biguint<31>(tmp_4_reg_460.read()));
}

void ntt::thread_tmp_9_fu_239_p2() {
    tmp_9_fu_239_p2 = (!len_cast_cast4_reg_427.read().is_01() || !j1_reg_131.read().is_01())? sc_lv<31>(): (sc_biguint<31>(len_cast_cast4_reg_427.read()) + sc_biguint<31>(j1_reg_131.read()));
}

void ntt::thread_tmp_fu_150_p2() {
    tmp_fu_150_p2 = (!len_reg_107.read().is_01() || !ap_const_lv29_0.is_01())? sc_lv<1>(): sc_lv<1>(len_reg_107.read() == ap_const_lv29_0);
}

void ntt::thread_tmp_i_9_fu_299_p3() {
    tmp_i_9_fu_299_p3 = esl_concat<9,23>(tmp_20_reg_518.read(), ap_const_lv23_0);
}

void ntt::thread_tmp_i_fu_292_p3() {
    tmp_i_fu_292_p3 = esl_concat<6,26>(tmp_19_reg_513.read(), ap_const_lv26_0);
}

void ntt::thread_tmp_s_fu_244_p1() {
    tmp_s_fu_244_p1 = esl_zext<64,31>(tmp_9_fu_239_p2.read());
}

void ntt::thread_zetas_address0() {
    zetas_address0 =  (sc_lv<8>) (tmp_3_fu_175_p1.read());
}

void ntt::thread_zetas_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        zetas_ce0 = ap_const_logic_1;
    } else {
        zetas_ce0 = ap_const_logic_0;
    }
}

void ntt::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_fu_150_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_fu_166_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_8_fu_234_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<12>) ("XXXXXXXXXXXX");
            break;
    }
}

void ntt::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"p_address0\" :  \"" << p_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"p_ce0\" :  \"" << p_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"p_we0\" :  \"" << p_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"p_d0\" :  \"" << p_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"p_q0\" :  \"" << p_q0.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

