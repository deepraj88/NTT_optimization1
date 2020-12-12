#include "ntt.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ntt::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[2];
}

void ntt::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[5];
}

void ntt::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[9];
}

void ntt::thread_ap_CS_fsm_pp3_stage0() {
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[15];
}

void ntt::thread_ap_CS_fsm_pp3_stage1() {
    ap_CS_fsm_pp3_stage1 = ap_CS_fsm.read()[16];
}

void ntt::thread_ap_CS_fsm_pp3_stage2() {
    ap_CS_fsm_pp3_stage2 = ap_CS_fsm.read()[17];
}

void ntt::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void ntt::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[3];
}

void ntt::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[4];
}

void ntt::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void ntt::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[6];
}

void ntt::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[7];
}

void ntt::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[8];
}

void ntt::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[10];
}

void ntt::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[11];
}

void ntt::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[12];
}

void ntt::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[13];
}

void ntt::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[14];
}

void ntt::thread_ap_CS_fsm_state48() {
    ap_CS_fsm_state48 = ap_CS_fsm.read()[18];
}

void ntt::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[19];
}

void ntt::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[20];
}

void ntt::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[21];
}

void ntt::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[22];
}

void ntt::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[23];
}

void ntt::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[24];
}

void ntt::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[25];
}

void ntt::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[26];
}

void ntt::thread_ap_CS_fsm_state57() {
    ap_CS_fsm_state57 = ap_CS_fsm.read()[27];
}

void ntt::thread_ap_CS_fsm_state58() {
    ap_CS_fsm_state58 = ap_CS_fsm.read()[28];
}

void ntt::thread_ap_CS_fsm_state59() {
    ap_CS_fsm_state59 = ap_CS_fsm.read()[29];
}

void ntt::thread_ap_CS_fsm_state60() {
    ap_CS_fsm_state60 = ap_CS_fsm.read()[30];
}

void ntt::thread_ap_CS_fsm_state61() {
    ap_CS_fsm_state61 = ap_CS_fsm.read()[31];
}

void ntt::thread_ap_CS_fsm_state62() {
    ap_CS_fsm_state62 = ap_CS_fsm.read()[32];
}

void ntt::thread_ap_CS_fsm_state63() {
    ap_CS_fsm_state63 = ap_CS_fsm.read()[33];
}

void ntt::thread_ap_CS_fsm_state64() {
    ap_CS_fsm_state64 = ap_CS_fsm.read()[34];
}

void ntt::thread_ap_CS_fsm_state65() {
    ap_CS_fsm_state65 = ap_CS_fsm.read()[35];
}

void ntt::thread_ap_CS_fsm_state66() {
    ap_CS_fsm_state66 = ap_CS_fsm.read()[36];
}

void ntt::thread_ap_CS_fsm_state67() {
    ap_CS_fsm_state67 = ap_CS_fsm.read()[37];
}

void ntt::thread_ap_CS_fsm_state68() {
    ap_CS_fsm_state68 = ap_CS_fsm.read()[38];
}

void ntt::thread_ap_CS_fsm_state69() {
    ap_CS_fsm_state69 = ap_CS_fsm.read()[39];
}

void ntt::thread_ap_CS_fsm_state70() {
    ap_CS_fsm_state70 = ap_CS_fsm.read()[40];
}

void ntt::thread_ap_CS_fsm_state71() {
    ap_CS_fsm_state71 = ap_CS_fsm.read()[41];
}

void ntt::thread_ap_CS_fsm_state72() {
    ap_CS_fsm_state72 = ap_CS_fsm.read()[42];
}

void ntt::thread_ap_CS_fsm_state73() {
    ap_CS_fsm_state73 = ap_CS_fsm.read()[43];
}

void ntt::thread_ap_CS_fsm_state74() {
    ap_CS_fsm_state74 = ap_CS_fsm.read()[44];
}

void ntt::thread_ap_CS_fsm_state75() {
    ap_CS_fsm_state75 = ap_CS_fsm.read()[45];
}

void ntt::thread_ap_CS_fsm_state76() {
    ap_CS_fsm_state76 = ap_CS_fsm.read()[46];
}

void ntt::thread_ap_CS_fsm_state77() {
    ap_CS_fsm_state77 = ap_CS_fsm.read()[47];
}

void ntt::thread_ap_CS_fsm_state78() {
    ap_CS_fsm_state78 = ap_CS_fsm.read()[48];
}

void ntt::thread_ap_CS_fsm_state79() {
    ap_CS_fsm_state79 = ap_CS_fsm.read()[49];
}

void ntt::thread_ap_CS_fsm_state80() {
    ap_CS_fsm_state80 = ap_CS_fsm.read()[50];
}

void ntt::thread_ap_CS_fsm_state81() {
    ap_CS_fsm_state81 = ap_CS_fsm.read()[51];
}

void ntt::thread_ap_CS_fsm_state82() {
    ap_CS_fsm_state82 = ap_CS_fsm.read()[52];
}

void ntt::thread_ap_CS_fsm_state83() {
    ap_CS_fsm_state83 = ap_CS_fsm.read()[53];
}

void ntt::thread_ap_CS_fsm_state84() {
    ap_CS_fsm_state84 = ap_CS_fsm.read()[54];
}

void ntt::thread_ap_CS_fsm_state85() {
    ap_CS_fsm_state85 = ap_CS_fsm.read()[55];
}

void ntt::thread_ap_CS_fsm_state86() {
    ap_CS_fsm_state86 = ap_CS_fsm.read()[56];
}

void ntt::thread_ap_CS_fsm_state87() {
    ap_CS_fsm_state87 = ap_CS_fsm.read()[57];
}

void ntt::thread_ap_CS_fsm_state88() {
    ap_CS_fsm_state88 = ap_CS_fsm.read()[58];
}

void ntt::thread_ap_CS_fsm_state89() {
    ap_CS_fsm_state89 = ap_CS_fsm.read()[59];
}

void ntt::thread_ap_CS_fsm_state90() {
    ap_CS_fsm_state90 = ap_CS_fsm.read()[60];
}

void ntt::thread_ap_CS_fsm_state91() {
    ap_CS_fsm_state91 = ap_CS_fsm.read()[61];
}

void ntt::thread_ap_CS_fsm_state92() {
    ap_CS_fsm_state92 = ap_CS_fsm.read()[62];
}

void ntt::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_pp2_stage0() {
    ap_block_pp2_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_pp2_stage0_11001() {
    ap_block_pp2_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_pp2_stage0_subdone() {
    ap_block_pp2_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_pp3_stage0() {
    ap_block_pp3_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_pp3_stage0_11001() {
    ap_block_pp3_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_pp3_stage0_subdone() {
    ap_block_pp3_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_pp3_stage1() {
    ap_block_pp3_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_pp3_stage1_11001() {
    ap_block_pp3_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_pp3_stage1_subdone() {
    ap_block_pp3_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_pp3_stage2() {
    ap_block_pp3_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_pp3_stage2_11001() {
    ap_block_pp3_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_pp3_stage2_subdone() {
    ap_block_pp3_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state10_pp0_stage0_iter7() {
    ap_block_state10_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state13_pp1_stage0_iter0() {
    ap_block_state13_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state14_pp1_stage0_iter1() {
    ap_block_state14_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state15_pp1_stage0_iter2() {
    ap_block_state15_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state16_pp1_stage0_iter3() {
    ap_block_state16_pp1_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state17_pp1_stage0_iter4() {
    ap_block_state17_pp1_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state18_pp1_stage0_iter5() {
    ap_block_state18_pp1_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state19_pp1_stage0_iter6() {
    ap_block_state19_pp1_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state20_pp1_stage0_iter7() {
    ap_block_state20_pp1_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state24_pp2_stage0_iter0() {
    ap_block_state24_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state25_pp2_stage0_iter1() {
    ap_block_state25_pp2_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state26_pp2_stage0_iter2() {
    ap_block_state26_pp2_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state27_pp2_stage0_iter3() {
    ap_block_state27_pp2_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state28_pp2_stage0_iter4() {
    ap_block_state28_pp2_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state29_pp2_stage0_iter5() {
    ap_block_state29_pp2_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state30_pp2_stage0_iter6() {
    ap_block_state30_pp2_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state31_pp2_stage0_iter7() {
    ap_block_state31_pp2_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state37_pp3_stage0_iter0() {
    ap_block_state37_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state38_pp3_stage1_iter0() {
    ap_block_state38_pp3_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state39_pp3_stage2_iter0() {
    ap_block_state39_pp3_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state3_pp0_stage0_iter0() {
    ap_block_state3_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state40_pp3_stage0_iter1() {
    ap_block_state40_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state41_pp3_stage1_iter1() {
    ap_block_state41_pp3_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state42_pp3_stage2_iter1() {
    ap_block_state42_pp3_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state43_pp3_stage0_iter2() {
    ap_block_state43_pp3_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state44_pp3_stage1_iter2() {
    ap_block_state44_pp3_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state45_pp3_stage2_iter2() {
    ap_block_state45_pp3_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state46_pp3_stage0_iter3() {
    ap_block_state46_pp3_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state47_pp3_stage1_iter3() {
    ap_block_state47_pp3_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state4_pp0_stage0_iter1() {
    ap_block_state4_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state5_pp0_stage0_iter2() {
    ap_block_state5_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state6_pp0_stage0_iter3() {
    ap_block_state6_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state7_pp0_stage0_iter4() {
    ap_block_state7_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state8_pp0_stage0_iter5() {
    ap_block_state8_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_block_state9_pp0_stage0_iter6() {
    ap_block_state9_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void ntt::thread_ap_condition_pp0_exit_iter0_state3() {
    if (esl_seteq<1,1,1>(exitcond1_fu_2042_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_0;
    }
}

void ntt::thread_ap_condition_pp1_exit_iter0_state13() {
    if (esl_seteq<1,1,1>(exitcond2_fu_2136_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp1_exit_iter0_state13 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state13 = ap_const_logic_0;
    }
}

void ntt::thread_ap_condition_pp2_exit_iter0_state24() {
    if (esl_seteq<1,1,1>(exitcond6_fu_2225_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp2_exit_iter0_state24 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state24 = ap_const_logic_0;
    }
}

void ntt::thread_ap_condition_pp3_exit_iter0_state37() {
    if (esl_seteq<1,1,1>(exitcond7_fu_2343_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp3_exit_iter0_state37 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state37 = ap_const_logic_0;
    }
}

void ntt::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_3386_p2.read(), ap_const_lv1_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void ntt::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void ntt::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void ntt::thread_ap_enable_pp2() {
    ap_enable_pp2 = (ap_idle_pp2.read() ^ ap_const_logic_1);
}

void ntt::thread_ap_enable_pp3() {
    ap_enable_pp3 = (ap_idle_pp3.read() ^ ap_const_logic_1);
}

void ntt::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void ntt::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void ntt::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter7.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void ntt::thread_ap_idle_pp2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter7.read()))) {
        ap_idle_pp2 = ap_const_logic_1;
    } else {
        ap_idle_pp2 = ap_const_logic_0;
    }
}

void ntt::thread_ap_idle_pp3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter3.read()))) {
        ap_idle_pp3 = ap_const_logic_1;
    } else {
        ap_idle_pp3 = ap_const_logic_0;
    }
}

void ntt::thread_ap_phi_mux_j_3_phi_fu_1517_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_j_3_phi_fu_1517_p4 = j_12_reg_4066.read();
    } else {
        ap_phi_mux_j_3_phi_fu_1517_p4 = j_3_reg_1513.read();
    }
}

void ntt::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_3386_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void ntt::thread_exitcond1_fu_2042_p2() {
    exitcond1_fu_2042_p2 = (!j1_reg_1480.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j1_reg_1480.read() == ap_const_lv6_20);
}

void ntt::thread_exitcond2_fu_2136_p2() {
    exitcond2_fu_2136_p2 = (!j_1_reg_1491.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_1_reg_1491.read() == ap_const_lv6_20);
}

void ntt::thread_exitcond3_fu_2573_p2() {
    exitcond3_fu_2573_p2 = (!k_4_reg_1537.read().is_01() || !ap_const_lv5_12.is_01())? sc_lv<1>(): sc_lv<1>(k_4_reg_1537.read() == ap_const_lv5_12);
}

void ntt::thread_exitcond4_fu_2844_p2() {
    exitcond4_fu_2844_p2 = (!k_5_reg_1571.read().is_01() || !ap_const_lv6_24.is_01())? sc_lv<1>(): sc_lv<1>(k_5_reg_1571.read() == ap_const_lv6_24);
}

void ntt::thread_exitcond5_fu_3115_p2() {
    exitcond5_fu_3115_p2 = (!k_6_reg_1605.read().is_01() || !ap_const_lv7_48.is_01())? sc_lv<1>(): sc_lv<1>(k_6_reg_1605.read() == ap_const_lv7_48);
}

void ntt::thread_exitcond6_fu_2225_p2() {
    exitcond6_fu_2225_p2 = (!j_2_reg_1502.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_reg_1502.read() == ap_const_lv6_20);
}

void ntt::thread_exitcond7_fu_2343_p2() {
    exitcond7_fu_2343_p2 = (!ap_phi_mux_j_3_phi_fu_1517_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_j_3_phi_fu_1517_p4.read() == ap_const_lv5_10);
}

void ntt::thread_exitcond_fu_3386_p2() {
    exitcond_fu_3386_p2 = (!k_7_reg_1639.read().is_01() || !ap_const_lv8_90.is_01())? sc_lv<1>(): sc_lv<1>(k_7_reg_1639.read() == ap_const_lv8_90);
}

void ntt::thread_grp_fu_1700_p2() {
    grp_fu_1700_p2 = (!ap_const_lv32_FFC002.is_01() || !grp_montgomery_reduce_fu_1660_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_FFC002) - sc_biguint<32>(grp_montgomery_reduce_fu_1660_ap_return.read()));
}

void ntt::thread_grp_fu_1706_p2() {
    grp_fu_1706_p2 = (!q0_q0.read().is_01() || !grp_fu_1700_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q0_q0.read()) + sc_biguint<32>(grp_fu_1700_p2.read()));
}

void ntt::thread_grp_fu_1712_p2() {
    grp_fu_1712_p2 = (!q0_q0.read().is_01() || !grp_montgomery_reduce_fu_1660_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q0_q0.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1660_ap_return.read()));
}

void ntt::thread_grp_fu_1719_p2() {
    grp_fu_1719_p2 = (!ap_const_lv32_FFC002.is_01() || !grp_montgomery_reduce_fu_1665_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_FFC002) - sc_biguint<32>(grp_montgomery_reduce_fu_1665_ap_return.read()));
}

void ntt::thread_grp_fu_1725_p2() {
    grp_fu_1725_p2 = (!q1_q0.read().is_01() || !grp_fu_1719_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q1_q0.read()) + sc_biguint<32>(grp_fu_1719_p2.read()));
}

void ntt::thread_grp_fu_1731_p2() {
    grp_fu_1731_p2 = (!q1_q0.read().is_01() || !grp_montgomery_reduce_fu_1665_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q1_q0.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1665_ap_return.read()));
}

void ntt::thread_grp_fu_1738_p2() {
    grp_fu_1738_p2 = (!ap_const_lv32_FFC002.is_01() || !grp_montgomery_reduce_fu_1670_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_FFC002) - sc_biguint<32>(grp_montgomery_reduce_fu_1670_ap_return.read()));
}

void ntt::thread_grp_fu_1744_p2() {
    grp_fu_1744_p2 = (!ap_const_lv32_FFC002.is_01() || !grp_montgomery_reduce_fu_1675_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_FFC002) - sc_biguint<32>(grp_montgomery_reduce_fu_1675_ap_return.read()));
}

void ntt::thread_grp_fu_1750_p2() {
    grp_fu_1750_p2 = (!q4_q0.read().is_01() || !grp_fu_1738_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q4_q0.read()) + sc_biguint<32>(grp_fu_1738_p2.read()));
}

void ntt::thread_grp_fu_1756_p2() {
    grp_fu_1756_p2 = (!q4_q0.read().is_01() || !grp_montgomery_reduce_fu_1670_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q4_q0.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1670_ap_return.read()));
}

void ntt::thread_grp_fu_1763_p2() {
    grp_fu_1763_p2 = (!ap_const_lv32_FFC002.is_01() || !grp_montgomery_reduce_fu_1680_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_FFC002) - sc_biguint<32>(grp_montgomery_reduce_fu_1680_ap_return.read()));
}

void ntt::thread_grp_fu_1769_p2() {
    grp_fu_1769_p2 = (!ap_const_lv32_FFC002.is_01() || !grp_montgomery_reduce_fu_1685_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_FFC002) - sc_biguint<32>(grp_montgomery_reduce_fu_1685_ap_return.read()));
}

void ntt::thread_grp_fu_1775_p2() {
    grp_fu_1775_p2 = (!ap_const_lv32_FFC002.is_01() || !grp_montgomery_reduce_fu_1690_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_FFC002) - sc_biguint<32>(grp_montgomery_reduce_fu_1690_ap_return.read()));
}

void ntt::thread_grp_fu_1781_p2() {
    grp_fu_1781_p2 = (!ap_const_lv32_FFC002.is_01() || !grp_montgomery_reduce_fu_1695_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_FFC002) - sc_biguint<32>(grp_montgomery_reduce_fu_1695_ap_return.read()));
}

void ntt::thread_grp_fu_1910_p2() {
    grp_fu_1910_p2 = (!reg_1865.read().is_01() || !grp_fu_1700_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1865.read()) + sc_biguint<32>(grp_fu_1700_p2.read()));
}

void ntt::thread_grp_fu_1918_p2() {
    grp_fu_1918_p2 = (!reg_1895.read().is_01() || !grp_montgomery_reduce_fu_1660_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1895.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1660_ap_return.read()));
}

void ntt::thread_grp_fu_1926_p2() {
    grp_fu_1926_p2 = (!reg_1844.read().is_01() || !grp_fu_1719_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1844.read()) + sc_biguint<32>(grp_fu_1719_p2.read()));
}

void ntt::thread_grp_fu_1934_p2() {
    grp_fu_1934_p2 = (!reg_1900.read().is_01() || !grp_montgomery_reduce_fu_1665_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1900.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1665_ap_return.read()));
}

void ntt::thread_grp_fu_1942_p2() {
    grp_fu_1942_p2 = (!reg_1820.read().is_01() || !grp_fu_1738_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1820.read()) + sc_biguint<32>(grp_fu_1738_p2.read()));
}

void ntt::thread_grp_fu_1950_p2() {
    grp_fu_1950_p2 = (!reg_1905.read().is_01() || !grp_montgomery_reduce_fu_1670_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1905.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1670_ap_return.read()));
}

void ntt::thread_grp_fu_1958_p2() {
    grp_fu_1958_p2 = (!reg_1825.read().is_01() || !grp_fu_1744_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1825.read()) + sc_biguint<32>(grp_fu_1744_p2.read()));
}

void ntt::thread_grp_fu_1966_p2() {
    grp_fu_1966_p2 = (!reg_1870.read().is_01() || !grp_montgomery_reduce_fu_1675_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1870.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1675_ap_return.read()));
}

void ntt::thread_grp_fu_1974_p2() {
    grp_fu_1974_p2 = (!reg_1787.read().is_01() || !grp_fu_1763_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1787.read()) + sc_biguint<32>(grp_fu_1763_p2.read()));
}

void ntt::thread_grp_fu_1982_p2() {
    grp_fu_1982_p2 = (!reg_1875.read().is_01() || !grp_montgomery_reduce_fu_1680_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1875.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1680_ap_return.read()));
}

void ntt::thread_grp_fu_1990_p2() {
    grp_fu_1990_p2 = (!reg_1792.read().is_01() || !grp_fu_1769_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1792.read()) + sc_biguint<32>(grp_fu_1769_p2.read()));
}

void ntt::thread_grp_fu_1998_p2() {
    grp_fu_1998_p2 = (!reg_1880.read().is_01() || !grp_montgomery_reduce_fu_1685_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1880.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1685_ap_return.read()));
}

void ntt::thread_grp_fu_2006_p2() {
    grp_fu_2006_p2 = (!reg_1797.read().is_01() || !grp_fu_1775_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1797.read()) + sc_biguint<32>(grp_fu_1775_p2.read()));
}

void ntt::thread_grp_fu_2014_p2() {
    grp_fu_2014_p2 = (!reg_1885.read().is_01() || !grp_montgomery_reduce_fu_1690_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1885.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1690_ap_return.read()));
}

void ntt::thread_grp_fu_2022_p2() {
    grp_fu_2022_p2 = (!reg_1802.read().is_01() || !grp_fu_1781_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1802.read()) + sc_biguint<32>(grp_fu_1781_p2.read()));
}

void ntt::thread_grp_fu_2030_p2() {
    grp_fu_2030_p2 = (!reg_1890.read().is_01() || !grp_montgomery_reduce_fu_1695_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1890.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1695_ap_return.read()));
}

void ntt::thread_grp_montgomery_reduce_fu_1660_a() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        grp_montgomery_reduce_fu_1660_a = tmp_359_fu_3569_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_montgomery_reduce_fu_1660_a = tmp_316_fu_3298_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        grp_montgomery_reduce_fu_1660_a = tmp_271_fu_3027_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_montgomery_reduce_fu_1660_a = tmp_202_fu_2756_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1660_a = tmp_149_reg_4143.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1660_a = tmp_143_reg_4128.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1660_a = tmp_137_reg_4113.read();
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_3895_pp2_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1660_a = tmp_67_reg_3952.read();
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_3773_pp1_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1660_a = tmp_36_reg_3830.read();
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_3664_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1660_a = tmp_13_reg_3721.read();
    } else {
        grp_montgomery_reduce_fu_1660_a = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void ntt::thread_grp_montgomery_reduce_fu_1660_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        grp_montgomery_reduce_fu_1660_ap_ce = ap_const_logic_1;
    } else {
        grp_montgomery_reduce_fu_1660_ap_ce = ap_const_logic_0;
    }
}

void ntt::thread_grp_montgomery_reduce_fu_1665_a() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        grp_montgomery_reduce_fu_1665_a = tmp_361_fu_3579_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_montgomery_reduce_fu_1665_a = tmp_318_fu_3308_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        grp_montgomery_reduce_fu_1665_a = tmp_273_fu_3037_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_montgomery_reduce_fu_1665_a = tmp_204_fu_2766_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1665_a = tmp_151_reg_4148.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1665_a = tmp_145_reg_4133.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1665_a = tmp_139_reg_4118.read();
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_3895_pp2_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1665_a = tmp_69_reg_3957.read();
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_3773_pp1_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1665_a = tmp_38_reg_3835.read();
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_3664_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1665_a = tmp_15_reg_3726.read();
    } else {
        grp_montgomery_reduce_fu_1665_a = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void ntt::thread_grp_montgomery_reduce_fu_1665_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        grp_montgomery_reduce_fu_1665_ap_ce = ap_const_logic_1;
    } else {
        grp_montgomery_reduce_fu_1665_ap_ce = ap_const_logic_0;
    }
}

void ntt::thread_grp_montgomery_reduce_fu_1670_a() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        grp_montgomery_reduce_fu_1670_a = tmp_363_fu_3589_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_montgomery_reduce_fu_1670_a = tmp_320_fu_3318_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        grp_montgomery_reduce_fu_1670_a = tmp_275_fu_3047_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_montgomery_reduce_fu_1670_a = tmp_206_fu_2776_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter1_reg.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1670_a = tmp_147_reg_4138.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1670_a = tmp_141_reg_4123.read();
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_3895_pp2_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1670_a = tmp_71_reg_3962.read();
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_3773_pp1_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1670_a = tmp_40_reg_3840.read();
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_3664_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1670_a = tmp_17_reg_3731.read();
    } else {
        grp_montgomery_reduce_fu_1670_a = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void ntt::thread_grp_montgomery_reduce_fu_1670_ap_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        grp_montgomery_reduce_fu_1670_ap_ce = ap_const_logic_1;
    } else {
        grp_montgomery_reduce_fu_1670_ap_ce = ap_const_logic_0;
    }
}

void ntt::thread_grp_montgomery_reduce_fu_1675_a() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        grp_montgomery_reduce_fu_1675_a = tmp_365_fu_3599_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_montgomery_reduce_fu_1675_a = tmp_322_fu_3328_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        grp_montgomery_reduce_fu_1675_a = tmp_277_fu_3057_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_montgomery_reduce_fu_1675_a = tmp_208_fu_2786_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_3895_pp2_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1675_a = tmp_73_reg_3967.read();
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_3773_pp1_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1675_a = tmp_42_reg_3845.read();
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_3664_pp0_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_montgomery_reduce_fu_1675_a = tmp_19_reg_3736.read();
    } else {
        grp_montgomery_reduce_fu_1675_a = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void ntt::thread_grp_montgomery_reduce_fu_1675_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        grp_montgomery_reduce_fu_1675_ap_ce = ap_const_logic_1;
    } else {
        grp_montgomery_reduce_fu_1675_ap_ce = ap_const_logic_0;
    }
}

void ntt::thread_grp_montgomery_reduce_fu_1680_a() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        grp_montgomery_reduce_fu_1680_a = tmp_367_fu_3609_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_montgomery_reduce_fu_1680_a = tmp_324_fu_3338_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        grp_montgomery_reduce_fu_1680_a = tmp_279_fu_3067_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_montgomery_reduce_fu_1680_a = tmp_210_fu_2796_p2.read();
    } else {
        grp_montgomery_reduce_fu_1680_a = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void ntt::thread_grp_montgomery_reduce_fu_1680_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        grp_montgomery_reduce_fu_1680_ap_ce = ap_const_logic_1;
    } else {
        grp_montgomery_reduce_fu_1680_ap_ce = ap_const_logic_0;
    }
}

void ntt::thread_grp_montgomery_reduce_fu_1685_a() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        grp_montgomery_reduce_fu_1685_a = tmp_369_fu_3619_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_montgomery_reduce_fu_1685_a = tmp_326_fu_3348_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        grp_montgomery_reduce_fu_1685_a = tmp_281_fu_3077_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_montgomery_reduce_fu_1685_a = tmp_212_fu_2806_p2.read();
    } else {
        grp_montgomery_reduce_fu_1685_a = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void ntt::thread_grp_montgomery_reduce_fu_1685_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        grp_montgomery_reduce_fu_1685_ap_ce = ap_const_logic_1;
    } else {
        grp_montgomery_reduce_fu_1685_ap_ce = ap_const_logic_0;
    }
}

void ntt::thread_grp_montgomery_reduce_fu_1690_a() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        grp_montgomery_reduce_fu_1690_a = tmp_371_fu_3629_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_montgomery_reduce_fu_1690_a = tmp_328_fu_3358_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        grp_montgomery_reduce_fu_1690_a = tmp_283_fu_3087_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_montgomery_reduce_fu_1690_a = tmp_214_fu_2816_p2.read();
    } else {
        grp_montgomery_reduce_fu_1690_a = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void ntt::thread_grp_montgomery_reduce_fu_1690_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        grp_montgomery_reduce_fu_1690_ap_ce = ap_const_logic_1;
    } else {
        grp_montgomery_reduce_fu_1690_ap_ce = ap_const_logic_0;
    }
}

void ntt::thread_grp_montgomery_reduce_fu_1695_a() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read())) {
        grp_montgomery_reduce_fu_1695_a = tmp_373_fu_3639_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        grp_montgomery_reduce_fu_1695_a = tmp_330_fu_3368_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read())) {
        grp_montgomery_reduce_fu_1695_a = tmp_285_fu_3097_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_montgomery_reduce_fu_1695_a = tmp_216_fu_2826_p2.read();
    } else {
        grp_montgomery_reduce_fu_1695_a = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void ntt::thread_grp_montgomery_reduce_fu_1695_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state78.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state89.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state79.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        grp_montgomery_reduce_fu_1695_ap_ce = ap_const_logic_1;
    } else {
        grp_montgomery_reduce_fu_1695_ap_ce = ap_const_logic_0;
    }
}

void ntt::thread_j_10_fu_2231_p2() {
    j_10_fu_2231_p2 = (!j_2_reg_1502.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_reg_1502.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ntt::thread_j_11_cast_fu_3484_p1() {
    j_11_cast_fu_3484_p1 = esl_zext<32,6>(j_11_reg_1627.read());
}

void ntt::thread_j_12_fu_2349_p2() {
    j_12_fu_2349_p2 = (!ap_phi_mux_j_3_phi_fu_1517_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_j_3_phi_fu_1517_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ntt::thread_j_13_cast_fu_3213_p1() {
    j_13_cast_fu_3213_p1 = esl_zext<32,6>(j_13_reg_1593.read());
}

void ntt::thread_j_14_fu_2832_p2() {
    j_14_fu_2832_p2 = (!j_4_reg_1549.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(j_4_reg_1549.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void ntt::thread_j_15_fu_3103_p2() {
    j_15_fu_3103_p2 = (!j_5_reg_1583.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(j_5_reg_1583.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void ntt::thread_j_16_fu_3374_p2() {
    j_16_fu_3374_p2 = (!j_6_reg_1617.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(j_6_reg_1617.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void ntt::thread_j_17_fu_3535_p2() {
    j_17_fu_3535_p2 = (!j_7_reg_1651.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(j_7_reg_1651.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void ntt::thread_j_8_cast_fu_2942_p1() {
    j_8_cast_fu_2942_p1 = esl_zext<32,6>(j_8_reg_1559.read());
}

void ntt::thread_j_9_fu_2048_p2() {
    j_9_fu_2048_p2 = (!j1_reg_1480.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j1_reg_1480.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ntt::thread_j_cast_fu_2671_p1() {
    j_cast_fu_2671_p1 = esl_zext<32,6>(j_reg_1525.read());
}

void ntt::thread_j_s_fu_2142_p2() {
    j_s_fu_2142_p2 = (!j_1_reg_1491.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_1_reg_1491.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ntt::thread_k_1_fu_2932_p2() {
    k_1_fu_2932_p2 = (!ap_const_lv6_1.is_01() || !k_5_reg_1571.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(k_5_reg_1571.read()));
}

void ntt::thread_k_2_fu_3203_p2() {
    k_2_fu_3203_p2 = (!ap_const_lv7_1.is_01() || !k_6_reg_1605.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_1) + sc_biguint<7>(k_6_reg_1605.read()));
}

void ntt::thread_k_3_fu_3474_p2() {
    k_3_fu_3474_p2 = (!ap_const_lv8_1.is_01() || !k_7_reg_1639.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(k_7_reg_1639.read()));
}

void ntt::thread_k_fu_2661_p2() {
    k_fu_2661_p2 = (!ap_const_lv5_1.is_01() || !k_4_reg_1537.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_1) + sc_biguint<5>(k_4_reg_1537.read()));
}

void ntt::thread_q0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q0_address0 = q0_addr_12_reg_5154.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        q0_address0 =  (sc_lv<5>) (tmp_357_fu_3541_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        q0_address0 = q0_addr_9_reg_4854.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        q0_address0 =  (sc_lv<5>) (tmp_331_fu_3282_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        q0_address0 = q0_addr_8_reg_4655.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        q0_address0 =  (sc_lv<5>) (tmp_269_fu_2999_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        q0_address0 = q0_addr_5_reg_4360.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        q0_address0 =  (sc_lv<5>) (tmp_217_fu_2740_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        q0_address0 = q0_addr_3_reg_4071_pp3_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        q0_address0 =  (sc_lv<5>) (tmp_152_fu_2445_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        q0_address0 =  (sc_lv<5>) (tmp_135_fu_2361_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter5.read()))) {
        q0_address0 = q0_addr_2_reg_3928_pp2_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()))) {
        q0_address0 = q0_addr_1_reg_3806_pp1_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        q0_address0 = q0_addr_reg_3697_pp0_iter4_reg.read();
    } else {
        q0_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ntt::thread_q0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        q0_address1 = q0_addr_11_reg_5106.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        q0_address1 =  (sc_lv<5>) (tmp_374_fu_3553_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q0_address1 = q0_addr_10_reg_4902.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        q0_address1 =  (sc_lv<5>) (tmp_314_fu_3270_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        q0_address1 = q0_addr_7_reg_4607.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        q0_address1 =  (sc_lv<5>) (tmp_286_fu_3011_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()))) {
        q0_address1 = q0_addr_6_reg_4408.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        q0_address1 =  (sc_lv<5>) (tmp_200_fu_2728_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0)))) {
        q0_address1 = q0_addr_4_reg_4153.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        q0_address1 = q0_addr_2_reg_3928_pp2_iter5_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        q0_address1 = q0_addr_1_reg_3806_pp1_iter5_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        q0_address1 = q0_addr_reg_3697_pp0_iter5_reg.read();
    } else {
        q0_address1 =  (sc_lv<5>) ("XXXXX");
    }
}

void ntt::thread_q0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        q0_ce0 = ap_const_logic_1;
    } else {
        q0_ce0 = ap_const_logic_0;
    }
}

void ntt::thread_q0_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q0_ce1 = ap_const_logic_1;
    } else {
        q0_ce1 = ap_const_logic_0;
    }
}

void ntt::thread_q0_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q0_d0 = grp_fu_1918_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q0_d0 = grp_fu_1910_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        q0_d0 = tmp_154_reg_4219.read();
    } else {
        q0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ntt::thread_q0_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q0_d1 = grp_fu_1910_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q0_d1 = grp_fu_1918_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        q0_d1 = tmp_155_fu_2468_p2.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        q0_d1 = grp_fu_1712_p2.read();
    } else {
        q0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ntt::thread_q0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter2_reg.read())))) {
        q0_we0 = ap_const_logic_1;
    } else {
        q0_we0 = ap_const_logic_0;
    }
}

void ntt::thread_q0_we1() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_3664_pp0_iter5_reg.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_3773_pp1_iter5_reg.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_3895_pp2_iter5_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter2_reg.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q0_we1 = ap_const_logic_1;
    } else {
        q0_we1 = ap_const_logic_0;
    }
}

void ntt::thread_q1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q1_address0 = q1_addr_12_reg_5160.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        q1_address0 =  (sc_lv<5>) (tmp_357_fu_3541_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        q1_address0 = q1_addr_9_reg_4860.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        q1_address0 =  (sc_lv<5>) (tmp_331_fu_3282_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        q1_address0 = q1_addr_8_reg_4661.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        q1_address0 =  (sc_lv<5>) (tmp_269_fu_2999_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        q1_address0 = q1_addr_5_reg_4366.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        q1_address0 =  (sc_lv<5>) (tmp_217_fu_2740_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        q1_address0 = q1_addr_3_reg_4076_pp3_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        q1_address0 =  (sc_lv<5>) (tmp_152_fu_2445_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        q1_address0 =  (sc_lv<5>) (tmp_135_fu_2361_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        q1_address0 =  (sc_lv<5>) (tmp_65_fu_2237_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()))) {
        q1_address0 = q1_addr_1_reg_3812_pp1_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        q1_address0 = q1_addr_reg_3703_pp0_iter4_reg.read();
    } else {
        q1_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ntt::thread_q1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        q1_address1 = q1_addr_11_reg_5112.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        q1_address1 =  (sc_lv<5>) (tmp_374_fu_3553_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q1_address1 = q1_addr_10_reg_4908.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        q1_address1 =  (sc_lv<5>) (tmp_314_fu_3270_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        q1_address1 = q1_addr_7_reg_4613.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        q1_address1 =  (sc_lv<5>) (tmp_286_fu_3011_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()))) {
        q1_address1 = q1_addr_6_reg_4414.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        q1_address1 =  (sc_lv<5>) (tmp_200_fu_2728_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0)))) {
        q1_address1 = q1_addr_4_reg_4159.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp2_iter7.read(), ap_const_logic_1))) {
        q1_address1 = q1_addr_2_reg_3904_pp2_iter6_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        q1_address1 = q1_addr_1_reg_3812_pp1_iter5_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        q1_address1 = q1_addr_reg_3703_pp0_iter5_reg.read();
    } else {
        q1_address1 =  (sc_lv<5>) ("XXXXX");
    }
}

void ntt::thread_q1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        q1_ce0 = ap_const_logic_1;
    } else {
        q1_ce0 = ap_const_logic_0;
    }
}

void ntt::thread_q1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp2_iter7.read(), ap_const_logic_1)))) {
        q1_ce1 = ap_const_logic_1;
    } else {
        q1_ce1 = ap_const_logic_0;
    }
}

void ntt::thread_q1_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q1_d0 = grp_fu_1934_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q1_d0 = grp_fu_1926_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        q1_d0 = tmp_157_reg_4224.read();
    } else {
        q1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ntt::thread_q1_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q1_d1 = grp_fu_1926_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q1_d1 = grp_fu_1934_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        q1_d1 = tmp_158_fu_2485_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp2_iter7.read(), ap_const_logic_1))) {
        q1_d1 = reg_1807.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)))) {
        q1_d1 = grp_fu_1731_p2.read();
    } else {
        q1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ntt::thread_q1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter2_reg.read())))) {
        q1_we0 = ap_const_logic_1;
    } else {
        q1_we0 = ap_const_logic_0;
    }
}

void ntt::thread_q1_we1() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_3664_pp0_iter5_reg.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_3773_pp1_iter5_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter2_reg.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp2_iter7.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_3895_pp2_iter6_reg.read())))) {
        q1_we1 = ap_const_logic_1;
    } else {
        q1_we1 = ap_const_logic_0;
    }
}

void ntt::thread_q2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q2_address0 = q2_addr_12_reg_5166.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        q2_address0 =  (sc_lv<5>) (tmp_357_fu_3541_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        q2_address0 = q2_addr_9_reg_4866.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        q2_address0 =  (sc_lv<5>) (tmp_331_fu_3282_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        q2_address0 = q2_addr_8_reg_4667.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        q2_address0 =  (sc_lv<5>) (tmp_269_fu_2999_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        q2_address0 = q2_addr_5_reg_4372.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        q2_address0 =  (sc_lv<5>) (tmp_217_fu_2740_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        q2_address0 = q2_addr_3_reg_4081_pp3_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        q2_address0 =  (sc_lv<5>) (tmp_152_fu_2445_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        q2_address0 =  (sc_lv<5>) (tmp_135_fu_2361_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter5.read()))) {
        q2_address0 = q2_addr_2_reg_3934_pp2_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        q2_address0 =  (sc_lv<5>) (tmp_34_fu_2148_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        q2_address0 = q2_addr_reg_3709_pp0_iter4_reg.read();
    } else {
        q2_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ntt::thread_q2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        q2_address1 = q2_addr_11_reg_5118.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        q2_address1 =  (sc_lv<5>) (tmp_374_fu_3553_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q2_address1 = q2_addr_10_reg_4914.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        q2_address1 =  (sc_lv<5>) (tmp_314_fu_3270_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        q2_address1 = q2_addr_7_reg_4619.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        q2_address1 =  (sc_lv<5>) (tmp_286_fu_3011_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()))) {
        q2_address1 = q2_addr_6_reg_4420.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        q2_address1 =  (sc_lv<5>) (tmp_200_fu_2728_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0)))) {
        q2_address1 = q2_addr_4_reg_4165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        q2_address1 = q2_addr_2_reg_3934_pp2_iter5_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp1_iter7.read(), ap_const_logic_1))) {
        q2_address1 = q2_addr_1_reg_3782_pp1_iter6_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        q2_address1 = q2_addr_reg_3709_pp0_iter5_reg.read();
    } else {
        q2_address1 =  (sc_lv<5>) ("XXXXX");
    }
}

void ntt::thread_q2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        q2_ce0 = ap_const_logic_1;
    } else {
        q2_ce0 = ap_const_logic_0;
    }
}

void ntt::thread_q2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp1_iter7.read(), ap_const_logic_1)))) {
        q2_ce1 = ap_const_logic_1;
    } else {
        q2_ce1 = ap_const_logic_0;
    }
}

void ntt::thread_q2_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q2_d0 = grp_fu_1950_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q2_d0 = grp_fu_1942_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        q2_d0 = tmp_160_reg_4229.read();
    } else {
        q2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ntt::thread_q2_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q2_d1 = grp_fu_1942_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q2_d1 = grp_fu_1950_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        q2_d1 = tmp_161_fu_2502_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        q2_d1 = tmp_79_fu_2291_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp1_iter7.read(), ap_const_logic_1))) {
        q2_d1 = reg_1807.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        q2_d1 = tmp_28_fu_2108_p2.read();
    } else {
        q2_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ntt::thread_q2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter2_reg.read())))) {
        q2_we0 = ap_const_logic_1;
    } else {
        q2_we0 = ap_const_logic_0;
    }
}

void ntt::thread_q2_we1() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_3664_pp0_iter5_reg.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_3895_pp2_iter5_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter2_reg.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp1_iter7.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_3773_pp1_iter6_reg.read())))) {
        q2_we1 = ap_const_logic_1;
    } else {
        q2_we1 = ap_const_logic_0;
    }
}

void ntt::thread_q3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q3_address0 = q3_addr_12_reg_5172.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        q3_address0 =  (sc_lv<5>) (tmp_357_fu_3541_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        q3_address0 = q3_addr_9_reg_4872.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        q3_address0 =  (sc_lv<5>) (tmp_331_fu_3282_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        q3_address0 = q3_addr_8_reg_4673.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        q3_address0 =  (sc_lv<5>) (tmp_269_fu_2999_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        q3_address0 = q3_addr_5_reg_4378.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        q3_address0 =  (sc_lv<5>) (tmp_217_fu_2740_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        q3_address0 = q3_addr_3_reg_4086_pp3_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        q3_address0 =  (sc_lv<5>) (tmp_152_fu_2445_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        q3_address0 =  (sc_lv<5>) (tmp_135_fu_2361_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        q3_address0 =  (sc_lv<5>) (tmp_65_fu_2237_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        q3_address0 =  (sc_lv<5>) (tmp_34_fu_2148_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()))) {
        q3_address0 = q3_addr_reg_3715_pp0_iter4_reg.read();
    } else {
        q3_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ntt::thread_q3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        q3_address1 = q3_addr_11_reg_5124.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        q3_address1 =  (sc_lv<5>) (tmp_374_fu_3553_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q3_address1 = q3_addr_10_reg_4920.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        q3_address1 =  (sc_lv<5>) (tmp_314_fu_3270_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        q3_address1 = q3_addr_7_reg_4625.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        q3_address1 =  (sc_lv<5>) (tmp_286_fu_3011_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()))) {
        q3_address1 = q3_addr_6_reg_4426.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        q3_address1 =  (sc_lv<5>) (tmp_200_fu_2728_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0)))) {
        q3_address1 = q3_addr_4_reg_4171.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp2_iter7.read(), ap_const_logic_1))) {
        q3_address1 = q3_addr_2_reg_3910_pp2_iter6_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp1_iter7.read(), ap_const_logic_1))) {
        q3_address1 = q3_addr_1_reg_3788_pp1_iter6_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        q3_address1 = q3_addr_reg_3715_pp0_iter5_reg.read();
    } else {
        q3_address1 =  (sc_lv<5>) ("XXXXX");
    }
}

void ntt::thread_q3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read())))) {
        q3_ce0 = ap_const_logic_1;
    } else {
        q3_ce0 = ap_const_logic_0;
    }
}

void ntt::thread_q3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp2_iter7.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp1_iter7.read(), ap_const_logic_1)))) {
        q3_ce1 = ap_const_logic_1;
    } else {
        q3_ce1 = ap_const_logic_0;
    }
}

void ntt::thread_q3_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q3_d0 = grp_fu_1966_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q3_d0 = grp_fu_1958_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        q3_d0 = tmp_163_reg_4234.read();
    } else {
        q3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ntt::thread_q3_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q3_d1 = grp_fu_1958_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q3_d1 = grp_fu_1966_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        q3_d1 = tmp_164_fu_2514_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp2_iter7.read(), ap_const_logic_1))) {
        q3_d1 = tmp_78_reg_3972.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp1_iter7.read(), ap_const_logic_1))) {
        q3_d1 = reg_1814.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        q3_d1 = tmp_31_fu_2121_p2.read();
    } else {
        q3_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ntt::thread_q3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter2_reg.read())))) {
        q3_we0 = ap_const_logic_1;
    } else {
        q3_we0 = ap_const_logic_0;
    }
}

void ntt::thread_q3_we1() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_3664_pp0_iter5_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter2_reg.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp2_iter7.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_3895_pp2_iter6_reg.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp1_iter7.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_3773_pp1_iter6_reg.read())))) {
        q3_we1 = ap_const_logic_1;
    } else {
        q3_we1 = ap_const_logic_0;
    }
}

void ntt::thread_q4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q4_address0 = q4_addr_12_reg_5178.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        q4_address0 =  (sc_lv<5>) (tmp_357_fu_3541_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        q4_address0 = q4_addr_9_reg_4878.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        q4_address0 =  (sc_lv<5>) (tmp_331_fu_3282_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        q4_address0 = q4_addr_8_reg_4679.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        q4_address0 =  (sc_lv<5>) (tmp_269_fu_2999_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        q4_address0 = q4_addr_5_reg_4384.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        q4_address0 =  (sc_lv<5>) (tmp_217_fu_2740_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        q4_address0 = q4_addr_3_reg_4091_pp3_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        q4_address0 =  (sc_lv<5>) (tmp_152_fu_2445_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        q4_address0 =  (sc_lv<5>) (tmp_135_fu_2361_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter5.read()))) {
        q4_address0 = q4_addr_2_reg_3940_pp2_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()))) {
        q4_address0 = q4_addr_1_reg_3818_pp1_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        q4_address0 =  (sc_lv<5>) (tmp_11_fu_2054_p1.read());
    } else {
        q4_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ntt::thread_q4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        q4_address1 = q4_addr_11_reg_5130.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        q4_address1 =  (sc_lv<5>) (tmp_374_fu_3553_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q4_address1 = q4_addr_10_reg_4926.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        q4_address1 =  (sc_lv<5>) (tmp_314_fu_3270_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        q4_address1 = q4_addr_7_reg_4631.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        q4_address1 =  (sc_lv<5>) (tmp_286_fu_3011_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()))) {
        q4_address1 = q4_addr_6_reg_4432.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        q4_address1 =  (sc_lv<5>) (tmp_200_fu_2728_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0)))) {
        q4_address1 = q4_addr_4_reg_4177.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        q4_address1 = q4_addr_2_reg_3940_pp2_iter5_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        q4_address1 = q4_addr_1_reg_3818_pp1_iter5_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter7.read(), ap_const_logic_1))) {
        q4_address1 = q4_addr_reg_3673_pp0_iter6_reg.read();
    } else {
        q4_address1 =  (sc_lv<5>) ("XXXXX");
    }
}

void ntt::thread_q4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        q4_ce0 = ap_const_logic_1;
    } else {
        q4_ce0 = ap_const_logic_0;
    }
}

void ntt::thread_q4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter7.read(), ap_const_logic_1)))) {
        q4_ce1 = ap_const_logic_1;
    } else {
        q4_ce1 = ap_const_logic_0;
    }
}

void ntt::thread_q4_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q4_d0 = grp_fu_1982_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q4_d0 = grp_fu_1974_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        q4_d0 = tmp_166_reg_4239.read();
    } else {
        q4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ntt::thread_q4_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q4_d1 = grp_fu_1974_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q4_d1 = grp_fu_1982_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        q4_d1 = tmp_167_fu_2527_p2.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0)))) {
        q4_d1 = grp_fu_1756_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter7.read(), ap_const_logic_1))) {
        q4_d1 = reg_1807.read();
    } else {
        q4_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ntt::thread_q4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter2_reg.read())))) {
        q4_we0 = ap_const_logic_1;
    } else {
        q4_we0 = ap_const_logic_0;
    }
}

void ntt::thread_q4_we1() {
    if (((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_3773_pp1_iter5_reg.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_3895_pp2_iter5_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter2_reg.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter7.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_3664_pp0_iter6_reg.read())))) {
        q4_we1 = ap_const_logic_1;
    } else {
        q4_we1 = ap_const_logic_0;
    }
}

void ntt::thread_q5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q5_address0 = q5_addr_12_reg_5184.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        q5_address0 =  (sc_lv<5>) (tmp_357_fu_3541_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        q5_address0 = q5_addr_9_reg_4884.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        q5_address0 =  (sc_lv<5>) (tmp_331_fu_3282_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        q5_address0 = q5_addr_8_reg_4685.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        q5_address0 =  (sc_lv<5>) (tmp_269_fu_2999_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        q5_address0 = q5_addr_5_reg_4390.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        q5_address0 =  (sc_lv<5>) (tmp_217_fu_2740_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        q5_address0 = q5_addr_3_reg_4096_pp3_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        q5_address0 =  (sc_lv<5>) (tmp_152_fu_2445_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        q5_address0 =  (sc_lv<5>) (tmp_135_fu_2361_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        q5_address0 =  (sc_lv<5>) (tmp_65_fu_2237_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()))) {
        q5_address0 = q5_addr_1_reg_3824_pp1_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        q5_address0 =  (sc_lv<5>) (tmp_11_fu_2054_p1.read());
    } else {
        q5_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ntt::thread_q5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        q5_address1 = q5_addr_11_reg_5136.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        q5_address1 =  (sc_lv<5>) (tmp_374_fu_3553_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q5_address1 = q5_addr_10_reg_4932.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        q5_address1 =  (sc_lv<5>) (tmp_314_fu_3270_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        q5_address1 = q5_addr_7_reg_4637.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        q5_address1 =  (sc_lv<5>) (tmp_286_fu_3011_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()))) {
        q5_address1 = q5_addr_6_reg_4438.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        q5_address1 =  (sc_lv<5>) (tmp_200_fu_2728_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0)))) {
        q5_address1 = q5_addr_4_reg_4183.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp2_iter7.read(), ap_const_logic_1))) {
        q5_address1 = q5_addr_2_reg_3916_pp2_iter6_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        q5_address1 = q5_addr_1_reg_3824_pp1_iter5_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter7.read(), ap_const_logic_1))) {
        q5_address1 = q5_addr_reg_3679_pp0_iter6_reg.read();
    } else {
        q5_address1 =  (sc_lv<5>) ("XXXXX");
    }
}

void ntt::thread_q5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        q5_ce0 = ap_const_logic_1;
    } else {
        q5_ce0 = ap_const_logic_0;
    }
}

void ntt::thread_q5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter7.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp2_iter7.read(), ap_const_logic_1)))) {
        q5_ce1 = ap_const_logic_1;
    } else {
        q5_ce1 = ap_const_logic_0;
    }
}

void ntt::thread_q5_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q5_d0 = grp_fu_1998_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q5_d0 = grp_fu_1990_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        q5_d0 = tmp_169_reg_4244.read();
    } else {
        q5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ntt::thread_q5_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q5_d1 = grp_fu_1990_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q5_d1 = grp_fu_1998_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        q5_d1 = tmp_170_fu_2540_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp2_iter7.read(), ap_const_logic_1))) {
        q5_d1 = reg_1830.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        q5_d1 = tmp_54_fu_2202_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter7.read(), ap_const_logic_1))) {
        q5_d1 = reg_1814.read();
    } else {
        q5_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ntt::thread_q5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter2_reg.read())))) {
        q5_we0 = ap_const_logic_1;
    } else {
        q5_we0 = ap_const_logic_0;
    }
}

void ntt::thread_q5_we1() {
    if (((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_3773_pp1_iter5_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter2_reg.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter7.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_3664_pp0_iter6_reg.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp2_iter7.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_3895_pp2_iter6_reg.read())))) {
        q5_we1 = ap_const_logic_1;
    } else {
        q5_we1 = ap_const_logic_0;
    }
}

void ntt::thread_q6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q6_address0 = q6_addr_12_reg_5190.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        q6_address0 =  (sc_lv<5>) (tmp_357_fu_3541_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        q6_address0 = q6_addr_9_reg_4890.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        q6_address0 =  (sc_lv<5>) (tmp_331_fu_3282_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        q6_address0 = q6_addr_8_reg_4691.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        q6_address0 =  (sc_lv<5>) (tmp_269_fu_2999_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        q6_address0 = q6_addr_5_reg_4396.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        q6_address0 =  (sc_lv<5>) (tmp_217_fu_2740_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        q6_address0 = q6_addr_4_reg_4189_pp3_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        q6_address0 = q6_addr_4_reg_4189.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        q6_address0 =  (sc_lv<5>) (tmp_135_fu_2361_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter5.read()))) {
        q6_address0 = q6_addr_2_reg_3946_pp2_iter4_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        q6_address0 =  (sc_lv<5>) (tmp_34_fu_2148_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        q6_address0 =  (sc_lv<5>) (tmp_11_fu_2054_p1.read());
    } else {
        q6_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ntt::thread_q6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        q6_address1 = q6_addr_11_reg_5142.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        q6_address1 =  (sc_lv<5>) (tmp_374_fu_3553_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q6_address1 = q6_addr_10_reg_4938.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        q6_address1 =  (sc_lv<5>) (tmp_314_fu_3270_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        q6_address1 = q6_addr_7_reg_4643.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        q6_address1 =  (sc_lv<5>) (tmp_286_fu_3011_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()))) {
        q6_address1 = q6_addr_6_reg_4444.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        q6_address1 =  (sc_lv<5>) (tmp_200_fu_2728_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp3_iter3.read(), ap_const_logic_1))) {
        q6_address1 = q6_addr_3_reg_4101_pp3_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        q6_address1 = q6_addr_4_reg_4189.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        q6_address1 = q6_addr_2_reg_3946_pp2_iter5_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp1_iter7.read(), ap_const_logic_1))) {
        q6_address1 = q6_addr_1_reg_3794_pp1_iter6_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter7.read(), ap_const_logic_1))) {
        q6_address1 = q6_addr_reg_3685_pp0_iter6_reg.read();
    } else {
        q6_address1 =  (sc_lv<5>) ("XXXXX");
    }
}

void ntt::thread_q6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        q6_ce0 = ap_const_logic_1;
    } else {
        q6_ce0 = ap_const_logic_0;
    }
}

void ntt::thread_q6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter7.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp1_iter7.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter3.read(), ap_const_logic_1)))) {
        q6_ce1 = ap_const_logic_1;
    } else {
        q6_ce1 = ap_const_logic_0;
    }
}

void ntt::thread_q6_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q6_d0 = grp_fu_2014_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q6_d0 = grp_fu_2006_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        q6_d0 = tmp_173_fu_2553_p2.read();
    } else {
        q6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ntt::thread_q6_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q6_d1 = grp_fu_2006_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q6_d1 = grp_fu_2014_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp3_iter3.read(), ap_const_logic_1))) {
        q6_d1 = tmp_172_reg_4249.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        q6_d1 = tmp_85_fu_2304_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp1_iter7.read(), ap_const_logic_1))) {
        q6_d1 = reg_1830.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter7.read(), ap_const_logic_1))) {
        q6_d1 = tmp_27_reg_3741.read();
    } else {
        q6_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ntt::thread_q6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter2_reg.read())))) {
        q6_we0 = ap_const_logic_1;
    } else {
        q6_we0 = ap_const_logic_0;
    }
}

void ntt::thread_q6_we1() {
    if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_3895_pp2_iter5_reg.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter7.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_3664_pp0_iter6_reg.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp1_iter7.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_3773_pp1_iter6_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter3.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter3_reg.read())))) {
        q6_we1 = ap_const_logic_1;
    } else {
        q6_we1 = ap_const_logic_0;
    }
}

void ntt::thread_q7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q7_address0 = q7_addr_12_reg_5196.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        q7_address0 =  (sc_lv<5>) (tmp_357_fu_3541_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        q7_address0 = q7_addr_9_reg_4896.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        q7_address0 =  (sc_lv<5>) (tmp_331_fu_3282_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()))) {
        q7_address0 = q7_addr_8_reg_4697.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        q7_address0 =  (sc_lv<5>) (tmp_269_fu_2999_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        q7_address0 = q7_addr_5_reg_4402.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        q7_address0 =  (sc_lv<5>) (tmp_217_fu_2740_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        q7_address0 = q7_addr_4_reg_4195_pp3_iter2_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        q7_address0 = q7_addr_4_reg_4195.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        q7_address0 =  (sc_lv<5>) (tmp_135_fu_2361_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        q7_address0 =  (sc_lv<5>) (tmp_65_fu_2237_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        q7_address0 =  (sc_lv<5>) (tmp_34_fu_2148_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        q7_address0 =  (sc_lv<5>) (tmp_11_fu_2054_p1.read());
    } else {
        q7_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ntt::thread_q7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read())) {
        q7_address1 = q7_addr_11_reg_5148.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read())) {
        q7_address1 =  (sc_lv<5>) (tmp_374_fu_3553_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q7_address1 = q7_addr_10_reg_4944.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        q7_address1 =  (sc_lv<5>) (tmp_314_fu_3270_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        q7_address1 = q7_addr_7_reg_4649.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        q7_address1 =  (sc_lv<5>) (tmp_286_fu_3011_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()))) {
        q7_address1 = q7_addr_6_reg_4450.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        q7_address1 =  (sc_lv<5>) (tmp_200_fu_2728_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp3_iter3.read(), ap_const_logic_1))) {
        q7_address1 = q7_addr_3_reg_4107_pp3_iter3_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        q7_address1 = q7_addr_4_reg_4195.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp2_iter7.read(), ap_const_logic_1))) {
        q7_address1 = q7_addr_2_reg_3922_pp2_iter6_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp1_iter7.read(), ap_const_logic_1))) {
        q7_address1 = q7_addr_1_reg_3800_pp1_iter6_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter7.read(), ap_const_logic_1))) {
        q7_address1 = q7_addr_reg_3691_pp0_iter6_reg.read();
    } else {
        q7_address1 =  (sc_lv<5>) ("XXXXX");
    }
}

void ntt::thread_q7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state88.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        q7_ce0 = ap_const_logic_1;
    } else {
        q7_ce0 = ap_const_logic_0;
    }
}

void ntt::thread_q7_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state87.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter7.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp2_iter7.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp1_iter7.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter3.read(), ap_const_logic_1)))) {
        q7_ce1 = ap_const_logic_1;
    } else {
        q7_ce1 = ap_const_logic_0;
    }
}

void ntt::thread_q7_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q7_d0 = grp_fu_2030_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q7_d0 = grp_fu_2022_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage2.read(), ap_const_boolean_0))) {
        q7_d0 = tmp_176_fu_2566_p2.read();
    } else {
        q7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ntt::thread_q7_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()))) {
        q7_d1 = grp_fu_2022_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()))) {
        q7_d1 = grp_fu_2030_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp3_iter3.read(), ap_const_logic_1))) {
        q7_d1 = tmp_175_reg_4254.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp2_iter7.read(), ap_const_logic_1))) {
        q7_d1 = tmp_84_reg_3977.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp1_iter7.read(), ap_const_logic_1))) {
        q7_d1 = tmp_53_reg_3850.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter7.read(), ap_const_logic_1))) {
        q7_d1 = tmp_30_reg_3746.read();
    } else {
        q7_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ntt::thread_q7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter2_reg.read())))) {
        q7_we0 = ap_const_logic_1;
    } else {
        q7_we0 = ap_const_logic_0;
    }
}

void ntt::thread_q7_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state91.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp0_iter7.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_3664_pp0_iter6_reg.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp2_iter7.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_3895_pp2_iter6_reg.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp1_iter7.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_3773_pp1_iter6_reg.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_enable_reg_pp3_iter3.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4062_pp3_iter3_reg.read())))) {
        q7_we1 = ap_const_logic_1;
    } else {
        q7_we1 = ap_const_logic_0;
    }
}

void ntt::thread_start_1_fu_3109_p2() {
    start_1_fu_3109_p2 = (!j_8_reg_1559.read().is_01() || !ap_const_lv6_8.is_01())? sc_lv<6>(): (sc_biguint<6>(j_8_reg_1559.read()) + sc_biguint<6>(ap_const_lv6_8));
}

void ntt::thread_start_2_fu_3380_p2() {
    start_2_fu_3380_p2 = (!j_13_reg_1593.read().is_01() || !ap_const_lv6_4.is_01())? sc_lv<6>(): (sc_biguint<6>(j_13_reg_1593.read()) + sc_biguint<6>(ap_const_lv6_4));
}

void ntt::thread_start_3_fu_3645_p2() {
    start_3_fu_3645_p2 = (!j_11_reg_1627.read().is_01() || !ap_const_lv6_2.is_01())? sc_lv<6>(): (sc_biguint<6>(j_11_reg_1627.read()) + sc_biguint<6>(ap_const_lv6_2));
}

void ntt::thread_start_fu_2838_p2() {
    start_fu_2838_p2 = (!j_reg_1525.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<6>(): (sc_biguint<6>(j_reg_1525.read()) + sc_biguint<6>(ap_const_lv6_10));
}

void ntt::thread_tmp_100_fu_2866_p2() {
    tmp_100_fu_2866_p2 = (!ap_const_lv6_8.is_01() || !k_5_reg_1571.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_8) + sc_biguint<6>(k_5_reg_1571.read()));
}

void ntt::thread_tmp_101_fu_2311_p1() {
    tmp_101_fu_2311_p1 = esl_sext<64,32>(reg_1836.read());
}

void ntt::thread_tmp_102_fu_2315_p1() {
    tmp_102_fu_2315_p1 = esl_sext<64,32>(reg_1840.read());
}

void ntt::thread_tmp_103_fu_2319_p1() {
    tmp_103_fu_2319_p1 = esl_sext<64,32>(reg_1849.read());
}

void ntt::thread_tmp_104_fu_2323_p1() {
    tmp_104_fu_2323_p1 = esl_sext<64,32>(reg_1853.read());
}

void ntt::thread_tmp_105_fu_2327_p1() {
    tmp_105_fu_2327_p1 = esl_sext<64,32>(reg_1857.read());
}

void ntt::thread_tmp_106_fu_2331_p1() {
    tmp_106_fu_2331_p1 = esl_sext<64,32>(reg_1861.read());
}

void ntt::thread_tmp_107_fu_2335_p1() {
    tmp_107_fu_2335_p1 = esl_sext<64,32>(zetas_q1.read());
}

void ntt::thread_tmp_108_fu_2339_p1() {
    tmp_108_fu_2339_p1 = esl_sext<64,32>(zetas_q0.read());
}

void ntt::thread_tmp_109_fu_2872_p1() {
    tmp_109_fu_2872_p1 = esl_zext<64,6>(tmp_100_fu_2866_p2.read());
}

void ntt::thread_tmp_10_fu_2132_p1() {
    tmp_10_fu_2132_p1 = esl_sext<64,32>(zetas_q1.read());
}

void ntt::thread_tmp_110_fu_2877_p2() {
    tmp_110_fu_2877_p2 = (!ap_const_lv6_C.is_01() || !k_5_reg_1571.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_C) + sc_biguint<6>(k_5_reg_1571.read()));
}

void ntt::thread_tmp_111_fu_2883_p1() {
    tmp_111_fu_2883_p1 = esl_zext<64,6>(tmp_110_fu_2877_p2.read());
}

void ntt::thread_tmp_112_fu_2888_p2() {
    tmp_112_fu_2888_p2 = (!ap_const_lv6_10.is_01() || !k_5_reg_1571.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_10) + sc_biguint<6>(k_5_reg_1571.read()));
}

void ntt::thread_tmp_113_fu_2894_p1() {
    tmp_113_fu_2894_p1 = esl_zext<64,6>(tmp_112_fu_2888_p2.read());
}

void ntt::thread_tmp_114_fu_2899_p2() {
    tmp_114_fu_2899_p2 = (!ap_const_lv6_14.is_01() || !k_5_reg_1571.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_14) + sc_biguint<6>(k_5_reg_1571.read()));
}

void ntt::thread_tmp_115_fu_2905_p1() {
    tmp_115_fu_2905_p1 = esl_zext<64,6>(tmp_114_fu_2899_p2.read());
}

void ntt::thread_tmp_116_fu_2910_p2() {
    tmp_116_fu_2910_p2 = (!ap_const_lv6_18.is_01() || !k_5_reg_1571.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_18) + sc_biguint<6>(k_5_reg_1571.read()));
}

void ntt::thread_tmp_117_fu_2916_p1() {
    tmp_117_fu_2916_p1 = esl_zext<64,6>(tmp_116_fu_2910_p2.read());
}

void ntt::thread_tmp_118_fu_2921_p2() {
    tmp_118_fu_2921_p2 = (!ap_const_lv6_1C.is_01() || !k_5_reg_1571.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1C) + sc_biguint<6>(k_5_reg_1571.read()));
}

void ntt::thread_tmp_119_fu_2927_p1() {
    tmp_119_fu_2927_p1 = esl_zext<64,6>(tmp_118_fu_2921_p2.read());
}

void ntt::thread_tmp_11_fu_2054_p1() {
    tmp_11_fu_2054_p1 = esl_zext<64,6>(j1_reg_1480.read());
}

void ntt::thread_tmp_120_cast_fu_2952_p1() {
    tmp_120_cast_fu_2952_p1 = esl_zext<32,5>(tmp_120_fu_2946_p2.read());
}

void ntt::thread_tmp_120_fu_2946_p2() {
    tmp_120_fu_2946_p2 = (tmp_400_fu_2938_p1.read() | ap_const_lv5_4);
}

void ntt::thread_tmp_121_fu_2956_p1() {
    tmp_121_fu_2956_p1 = esl_sext<64,32>(reg_1836.read());
}

void ntt::thread_tmp_122_fu_2960_p1() {
    tmp_122_fu_2960_p1 = esl_sext<64,32>(reg_1840.read());
}

void ntt::thread_tmp_123_fu_2964_p1() {
    tmp_123_fu_2964_p1 = esl_sext<64,32>(reg_1849.read());
}

void ntt::thread_tmp_124_fu_2968_p1() {
    tmp_124_fu_2968_p1 = esl_sext<64,32>(reg_1853.read());
}

void ntt::thread_tmp_125_fu_2972_p1() {
    tmp_125_fu_2972_p1 = esl_sext<64,32>(reg_1857.read());
}

void ntt::thread_tmp_126_fu_2976_p1() {
    tmp_126_fu_2976_p1 = esl_sext<64,32>(reg_1861.read());
}

void ntt::thread_tmp_127_fu_2980_p1() {
    tmp_127_fu_2980_p1 = esl_sext<64,32>(zetas_q1.read());
}

void ntt::thread_tmp_128_fu_2984_p1() {
    tmp_128_fu_2984_p1 = esl_sext<64,32>(zetas_q0.read());
}

void ntt::thread_tmp_129_fu_2717_p2() {
    tmp_129_fu_2717_p2 = (!j_4_reg_1549.read().is_01() || !tmp_88_cast_reg_4312.read().is_01())? sc_lv<1>(): (sc_biguint<32>(j_4_reg_1549.read()) < sc_biguint<32>(tmp_88_cast_reg_4312.read()));
}

void ntt::thread_tmp_130_fu_3121_p1() {
    tmp_130_fu_3121_p1 = esl_zext<64,7>(k_6_reg_1605.read());
}

void ntt::thread_tmp_131_fu_3126_p2() {
    tmp_131_fu_3126_p2 = (!ap_const_lv7_8.is_01() || !k_6_reg_1605.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_8) + sc_biguint<7>(k_6_reg_1605.read()));
}

void ntt::thread_tmp_132_fu_3132_p1() {
    tmp_132_fu_3132_p1 = esl_zext<64,7>(tmp_131_fu_3126_p2.read());
}

void ntt::thread_tmp_133_fu_3137_p2() {
    tmp_133_fu_3137_p2 = (!ap_const_lv7_10.is_01() || !k_6_reg_1605.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_10) + sc_biguint<7>(k_6_reg_1605.read()));
}

void ntt::thread_tmp_134_fu_2355_p2() {
    tmp_134_fu_2355_p2 = (ap_phi_mux_j_3_phi_fu_1517_p4.read() ^ ap_const_lv5_10);
}

void ntt::thread_tmp_135_fu_2361_p1() {
    tmp_135_fu_2361_p1 = esl_zext<64,5>(tmp_134_fu_2355_p2.read());
}

void ntt::thread_tmp_137_fu_2377_p0() {
    tmp_137_fu_2377_p0 =  (sc_lv<32>) (tmp_137_fu_2377_p00.read());
}

void ntt::thread_tmp_137_fu_2377_p00() {
    tmp_137_fu_2377_p00 = esl_zext<64,32>(reg_1865.read());
}

void ntt::thread_tmp_137_fu_2377_p1() {
    tmp_137_fu_2377_p1 =  (sc_lv<32>) (tmp_101_reg_4022.read());
}

void ntt::thread_tmp_137_fu_2377_p2() {
    tmp_137_fu_2377_p2 = (!tmp_137_fu_2377_p0.read().is_01() || !tmp_137_fu_2377_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_137_fu_2377_p0.read()) * sc_bigint<32>(tmp_137_fu_2377_p1.read());
}

void ntt::thread_tmp_139_fu_2386_p0() {
    tmp_139_fu_2386_p0 =  (sc_lv<32>) (tmp_139_fu_2386_p00.read());
}

void ntt::thread_tmp_139_fu_2386_p00() {
    tmp_139_fu_2386_p00 = esl_zext<64,32>(reg_1844.read());
}

void ntt::thread_tmp_139_fu_2386_p1() {
    tmp_139_fu_2386_p1 =  (sc_lv<32>) (tmp_102_reg_4027.read());
}

void ntt::thread_tmp_139_fu_2386_p2() {
    tmp_139_fu_2386_p2 = (!tmp_139_fu_2386_p0.read().is_01() || !tmp_139_fu_2386_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_139_fu_2386_p0.read()) * sc_bigint<32>(tmp_139_fu_2386_p1.read());
}

void ntt::thread_tmp_13_fu_2070_p0() {
    tmp_13_fu_2070_p0 =  (sc_lv<32>) (tmp_13_fu_2070_p00.read());
}

void ntt::thread_tmp_13_fu_2070_p00() {
    tmp_13_fu_2070_p00 = esl_zext<64,32>(reg_1787.read());
}

void ntt::thread_tmp_13_fu_2070_p1() {
    tmp_13_fu_2070_p1 =  (sc_lv<32>) (tmp_3_reg_3656.read());
}

void ntt::thread_tmp_13_fu_2070_p2() {
    tmp_13_fu_2070_p2 = (!tmp_13_fu_2070_p0.read().is_01() || !tmp_13_fu_2070_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_13_fu_2070_p0.read()) * sc_bigint<32>(tmp_13_fu_2070_p1.read());
}

void ntt::thread_tmp_141_fu_2395_p0() {
    tmp_141_fu_2395_p0 =  (sc_lv<32>) (tmp_141_fu_2395_p00.read());
}

void ntt::thread_tmp_141_fu_2395_p00() {
    tmp_141_fu_2395_p00 = esl_zext<64,32>(reg_1820.read());
}

void ntt::thread_tmp_141_fu_2395_p1() {
    tmp_141_fu_2395_p1 =  (sc_lv<32>) (tmp_103_reg_4032.read());
}

void ntt::thread_tmp_141_fu_2395_p2() {
    tmp_141_fu_2395_p2 = (!tmp_141_fu_2395_p0.read().is_01() || !tmp_141_fu_2395_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_141_fu_2395_p0.read()) * sc_bigint<32>(tmp_141_fu_2395_p1.read());
}

void ntt::thread_tmp_143_fu_2404_p0() {
    tmp_143_fu_2404_p0 =  (sc_lv<32>) (tmp_143_fu_2404_p00.read());
}

void ntt::thread_tmp_143_fu_2404_p00() {
    tmp_143_fu_2404_p00 = esl_zext<64,32>(reg_1825.read());
}

void ntt::thread_tmp_143_fu_2404_p1() {
    tmp_143_fu_2404_p1 =  (sc_lv<32>) (tmp_104_reg_4037.read());
}

void ntt::thread_tmp_143_fu_2404_p2() {
    tmp_143_fu_2404_p2 = (!tmp_143_fu_2404_p0.read().is_01() || !tmp_143_fu_2404_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_143_fu_2404_p0.read()) * sc_bigint<32>(tmp_143_fu_2404_p1.read());
}

void ntt::thread_tmp_145_fu_2413_p0() {
    tmp_145_fu_2413_p0 =  (sc_lv<32>) (tmp_145_fu_2413_p00.read());
}

void ntt::thread_tmp_145_fu_2413_p00() {
    tmp_145_fu_2413_p00 = esl_zext<64,32>(reg_1787.read());
}

void ntt::thread_tmp_145_fu_2413_p1() {
    tmp_145_fu_2413_p1 =  (sc_lv<32>) (tmp_105_reg_4042.read());
}

void ntt::thread_tmp_145_fu_2413_p2() {
    tmp_145_fu_2413_p2 = (!tmp_145_fu_2413_p0.read().is_01() || !tmp_145_fu_2413_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_145_fu_2413_p0.read()) * sc_bigint<32>(tmp_145_fu_2413_p1.read());
}

void ntt::thread_tmp_147_fu_2422_p0() {
    tmp_147_fu_2422_p0 =  (sc_lv<32>) (tmp_147_fu_2422_p00.read());
}

void ntt::thread_tmp_147_fu_2422_p00() {
    tmp_147_fu_2422_p00 = esl_zext<64,32>(reg_1792.read());
}

void ntt::thread_tmp_147_fu_2422_p1() {
    tmp_147_fu_2422_p1 =  (sc_lv<32>) (tmp_106_reg_4047.read());
}

void ntt::thread_tmp_147_fu_2422_p2() {
    tmp_147_fu_2422_p2 = (!tmp_147_fu_2422_p0.read().is_01() || !tmp_147_fu_2422_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_147_fu_2422_p0.read()) * sc_bigint<32>(tmp_147_fu_2422_p1.read());
}

void ntt::thread_tmp_149_fu_2431_p0() {
    tmp_149_fu_2431_p0 =  (sc_lv<32>) (tmp_149_fu_2431_p00.read());
}

void ntt::thread_tmp_149_fu_2431_p00() {
    tmp_149_fu_2431_p00 = esl_zext<64,32>(reg_1797.read());
}

void ntt::thread_tmp_149_fu_2431_p1() {
    tmp_149_fu_2431_p1 =  (sc_lv<32>) (tmp_107_reg_4052.read());
}

void ntt::thread_tmp_149_fu_2431_p2() {
    tmp_149_fu_2431_p2 = (!tmp_149_fu_2431_p0.read().is_01() || !tmp_149_fu_2431_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_149_fu_2431_p0.read()) * sc_bigint<32>(tmp_149_fu_2431_p1.read());
}

void ntt::thread_tmp_151_fu_2440_p0() {
    tmp_151_fu_2440_p0 =  (sc_lv<32>) (tmp_151_fu_2440_p00.read());
}

void ntt::thread_tmp_151_fu_2440_p00() {
    tmp_151_fu_2440_p00 = esl_zext<64,32>(reg_1802.read());
}

void ntt::thread_tmp_151_fu_2440_p1() {
    tmp_151_fu_2440_p1 =  (sc_lv<32>) (tmp_108_reg_4057.read());
}

void ntt::thread_tmp_151_fu_2440_p2() {
    tmp_151_fu_2440_p2 = (!tmp_151_fu_2440_p0.read().is_01() || !tmp_151_fu_2440_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_151_fu_2440_p0.read()) * sc_bigint<32>(tmp_151_fu_2440_p1.read());
}

void ntt::thread_tmp_152_fu_2445_p1() {
    tmp_152_fu_2445_p1 = esl_zext<64,5>(j_3_reg_1513_pp3_iter1_reg.read());
}

void ntt::thread_tmp_153_fu_2457_p2() {
    tmp_153_fu_2457_p2 = (!ap_const_lv32_FFC002.is_01() || !t0_3_reg_4201.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_FFC002) - sc_biguint<32>(t0_3_reg_4201.read()));
}

void ntt::thread_tmp_154_fu_2462_p2() {
    tmp_154_fu_2462_p2 = (!q0_q1.read().is_01() || !tmp_153_fu_2457_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q0_q1.read()) + sc_biguint<32>(tmp_153_fu_2457_p2.read()));
}

void ntt::thread_tmp_155_fu_2468_p2() {
    tmp_155_fu_2468_p2 = (!reg_1865.read().is_01() || !t0_3_reg_4201.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1865.read()) + sc_biguint<32>(t0_3_reg_4201.read()));
}

void ntt::thread_tmp_156_fu_2474_p2() {
    tmp_156_fu_2474_p2 = (!ap_const_lv32_FFC002.is_01() || !t1_3_reg_4207.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_FFC002) - sc_biguint<32>(t1_3_reg_4207.read()));
}

void ntt::thread_tmp_157_fu_2479_p2() {
    tmp_157_fu_2479_p2 = (!q1_q1.read().is_01() || !tmp_156_fu_2474_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q1_q1.read()) + sc_biguint<32>(tmp_156_fu_2474_p2.read()));
}

void ntt::thread_tmp_158_fu_2485_p2() {
    tmp_158_fu_2485_p2 = (!reg_1844.read().is_01() || !t1_3_reg_4207.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1844.read()) + sc_biguint<32>(t1_3_reg_4207.read()));
}

void ntt::thread_tmp_159_fu_2491_p2() {
    tmp_159_fu_2491_p2 = (!ap_const_lv32_FFC002.is_01() || !t2_3_reg_4213.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_FFC002) - sc_biguint<32>(t2_3_reg_4213.read()));
}

void ntt::thread_tmp_15_fu_2079_p0() {
    tmp_15_fu_2079_p0 =  (sc_lv<32>) (tmp_15_fu_2079_p00.read());
}

void ntt::thread_tmp_15_fu_2079_p00() {
    tmp_15_fu_2079_p00 = esl_zext<64,32>(reg_1792.read());
}

void ntt::thread_tmp_15_fu_2079_p1() {
    tmp_15_fu_2079_p1 =  (sc_lv<32>) (tmp_3_reg_3656.read());
}

void ntt::thread_tmp_15_fu_2079_p2() {
    tmp_15_fu_2079_p2 = (!tmp_15_fu_2079_p0.read().is_01() || !tmp_15_fu_2079_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_15_fu_2079_p0.read()) * sc_bigint<32>(tmp_15_fu_2079_p1.read());
}

void ntt::thread_tmp_160_fu_2496_p2() {
    tmp_160_fu_2496_p2 = (!q2_q1.read().is_01() || !tmp_159_fu_2491_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q2_q1.read()) + sc_biguint<32>(tmp_159_fu_2491_p2.read()));
}

void ntt::thread_tmp_161_fu_2502_p2() {
    tmp_161_fu_2502_p2 = (!reg_1820.read().is_01() || !t2_3_reg_4213.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1820.read()) + sc_biguint<32>(t2_3_reg_4213.read()));
}

void ntt::thread_tmp_163_fu_2508_p2() {
    tmp_163_fu_2508_p2 = (!q3_q1.read().is_01() || !grp_fu_1700_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q3_q1.read()) + sc_biguint<32>(grp_fu_1700_p2.read()));
}

void ntt::thread_tmp_164_fu_2514_p2() {
    tmp_164_fu_2514_p2 = (!reg_1870.read().is_01() || !grp_montgomery_reduce_fu_1660_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1870.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1660_ap_return.read()));
}

void ntt::thread_tmp_166_fu_2521_p2() {
    tmp_166_fu_2521_p2 = (!q4_q1.read().is_01() || !grp_fu_1719_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q4_q1.read()) + sc_biguint<32>(grp_fu_1719_p2.read()));
}

void ntt::thread_tmp_167_fu_2527_p2() {
    tmp_167_fu_2527_p2 = (!reg_1875.read().is_01() || !grp_montgomery_reduce_fu_1665_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1875.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1665_ap_return.read()));
}

void ntt::thread_tmp_169_fu_2534_p2() {
    tmp_169_fu_2534_p2 = (!q5_q1.read().is_01() || !grp_fu_1738_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q5_q1.read()) + sc_biguint<32>(grp_fu_1738_p2.read()));
}

void ntt::thread_tmp_170_fu_2540_p2() {
    tmp_170_fu_2540_p2 = (!reg_1880.read().is_01() || !grp_montgomery_reduce_fu_1670_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1880.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1670_ap_return.read()));
}

void ntt::thread_tmp_172_fu_2547_p2() {
    tmp_172_fu_2547_p2 = (!reg_1885.read().is_01() || !grp_fu_1700_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1885.read()) + sc_biguint<32>(grp_fu_1700_p2.read()));
}

void ntt::thread_tmp_173_fu_2553_p2() {
    tmp_173_fu_2553_p2 = (!q6_q0.read().is_01() || !grp_montgomery_reduce_fu_1660_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q6_q0.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1660_ap_return.read()));
}

void ntt::thread_tmp_175_fu_2560_p2() {
    tmp_175_fu_2560_p2 = (!reg_1890.read().is_01() || !grp_fu_1719_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_1890.read()) + sc_biguint<32>(grp_fu_1719_p2.read()));
}

void ntt::thread_tmp_176_fu_2566_p2() {
    tmp_176_fu_2566_p2 = (!q7_q0.read().is_01() || !grp_montgomery_reduce_fu_1665_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q7_q0.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1665_ap_return.read()));
}

void ntt::thread_tmp_177_fu_3143_p1() {
    tmp_177_fu_3143_p1 = esl_zext<64,7>(tmp_133_fu_3137_p2.read());
}

void ntt::thread_tmp_178_fu_3148_p2() {
    tmp_178_fu_3148_p2 = (!ap_const_lv7_18.is_01() || !k_6_reg_1605.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_18) + sc_biguint<7>(k_6_reg_1605.read()));
}

void ntt::thread_tmp_179_fu_3154_p1() {
    tmp_179_fu_3154_p1 = esl_zext<64,7>(tmp_178_fu_3148_p2.read());
}

void ntt::thread_tmp_17_fu_2088_p0() {
    tmp_17_fu_2088_p0 =  (sc_lv<32>) (tmp_17_fu_2088_p00.read());
}

void ntt::thread_tmp_17_fu_2088_p00() {
    tmp_17_fu_2088_p00 = esl_zext<64,32>(reg_1797.read());
}

void ntt::thread_tmp_17_fu_2088_p1() {
    tmp_17_fu_2088_p1 =  (sc_lv<32>) (tmp_3_reg_3656.read());
}

void ntt::thread_tmp_17_fu_2088_p2() {
    tmp_17_fu_2088_p2 = (!tmp_17_fu_2088_p0.read().is_01() || !tmp_17_fu_2088_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_17_fu_2088_p0.read()) * sc_bigint<32>(tmp_17_fu_2088_p1.read());
}

void ntt::thread_tmp_180_fu_3159_p2() {
    tmp_180_fu_3159_p2 = (!ap_const_lv7_20.is_01() || !k_6_reg_1605.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_20) + sc_biguint<7>(k_6_reg_1605.read()));
}

void ntt::thread_tmp_181_fu_3165_p1() {
    tmp_181_fu_3165_p1 = esl_zext<64,7>(tmp_180_fu_3159_p2.read());
}

void ntt::thread_tmp_182_fu_3170_p2() {
    tmp_182_fu_3170_p2 = (!ap_const_lv7_28.is_01() || !k_6_reg_1605.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_28) + sc_biguint<7>(k_6_reg_1605.read()));
}

void ntt::thread_tmp_183_fu_3176_p1() {
    tmp_183_fu_3176_p1 = esl_zext<64,7>(tmp_182_fu_3170_p2.read());
}

void ntt::thread_tmp_184_fu_3181_p2() {
    tmp_184_fu_3181_p2 = (!ap_const_lv7_30.is_01() || !k_6_reg_1605.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_30) + sc_biguint<7>(k_6_reg_1605.read()));
}

void ntt::thread_tmp_185_fu_3187_p1() {
    tmp_185_fu_3187_p1 = esl_zext<64,7>(tmp_184_fu_3181_p2.read());
}

void ntt::thread_tmp_186_fu_3192_p2() {
    tmp_186_fu_3192_p2 = (!ap_const_lv7_38.is_01() || !k_6_reg_1605.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_38) + sc_biguint<7>(k_6_reg_1605.read()));
}

void ntt::thread_tmp_187_fu_3198_p1() {
    tmp_187_fu_3198_p1 = esl_zext<64,7>(tmp_186_fu_3192_p2.read());
}

void ntt::thread_tmp_188_cast_fu_3223_p1() {
    tmp_188_cast_fu_3223_p1 = esl_zext<32,5>(tmp_188_fu_3217_p2.read());
}

void ntt::thread_tmp_188_fu_3217_p2() {
    tmp_188_fu_3217_p2 = (tmp_401_fu_3209_p1.read() | ap_const_lv5_2);
}

void ntt::thread_tmp_189_fu_3227_p1() {
    tmp_189_fu_3227_p1 = esl_sext<64,32>(reg_1836.read());
}

void ntt::thread_tmp_190_fu_3231_p1() {
    tmp_190_fu_3231_p1 = esl_sext<64,32>(reg_1840.read());
}

void ntt::thread_tmp_191_fu_3235_p1() {
    tmp_191_fu_3235_p1 = esl_sext<64,32>(reg_1849.read());
}

void ntt::thread_tmp_192_fu_3239_p1() {
    tmp_192_fu_3239_p1 = esl_sext<64,32>(reg_1853.read());
}

void ntt::thread_tmp_193_fu_3243_p1() {
    tmp_193_fu_3243_p1 = esl_sext<64,32>(reg_1857.read());
}

void ntt::thread_tmp_194_fu_3247_p1() {
    tmp_194_fu_3247_p1 = esl_sext<64,32>(reg_1861.read());
}

void ntt::thread_tmp_195_fu_3251_p1() {
    tmp_195_fu_3251_p1 = esl_sext<64,32>(zetas_q1.read());
}

void ntt::thread_tmp_196_fu_3255_p1() {
    tmp_196_fu_3255_p1 = esl_sext<64,32>(zetas_q0.read());
}

void ntt::thread_tmp_197_fu_2988_p2() {
    tmp_197_fu_2988_p2 = (!j_5_reg_1583.read().is_01() || !tmp_120_cast_reg_4559.read().is_01())? sc_lv<1>(): (sc_biguint<32>(j_5_reg_1583.read()) < sc_biguint<32>(tmp_120_cast_reg_4559.read()));
}

void ntt::thread_tmp_199_fu_2722_p2() {
    tmp_199_fu_2722_p2 = (!j_4_reg_1549.read().is_01() || !ap_const_lv32_8.is_01())? sc_lv<32>(): (sc_biguint<32>(j_4_reg_1549.read()) + sc_biguint<32>(ap_const_lv32_8));
}

void ntt::thread_tmp_19_fu_2097_p0() {
    tmp_19_fu_2097_p0 =  (sc_lv<32>) (tmp_19_fu_2097_p00.read());
}

void ntt::thread_tmp_19_fu_2097_p00() {
    tmp_19_fu_2097_p00 = esl_zext<64,32>(reg_1802.read());
}

void ntt::thread_tmp_19_fu_2097_p1() {
    tmp_19_fu_2097_p1 =  (sc_lv<32>) (tmp_3_reg_3656.read());
}

void ntt::thread_tmp_19_fu_2097_p2() {
    tmp_19_fu_2097_p2 = (!tmp_19_fu_2097_p0.read().is_01() || !tmp_19_fu_2097_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_19_fu_2097_p0.read()) * sc_bigint<32>(tmp_19_fu_2097_p1.read());
}

void ntt::thread_tmp_200_fu_2728_p1() {
    tmp_200_fu_2728_p1 = esl_zext<64,32>(tmp_199_fu_2722_p2.read());
}

void ntt::thread_tmp_202_fu_2756_p0() {
    tmp_202_fu_2756_p0 =  (sc_lv<32>) (tmp_202_fu_2756_p00.read());
}

void ntt::thread_tmp_202_fu_2756_p00() {
    tmp_202_fu_2756_p00 = esl_zext<64,32>(q0_q1.read());
}

void ntt::thread_tmp_202_fu_2756_p1() {
    tmp_202_fu_2756_p1 =  (sc_lv<32>) (tmp_89_reg_4317.read());
}

void ntt::thread_tmp_202_fu_2756_p2() {
    tmp_202_fu_2756_p2 = (!tmp_202_fu_2756_p0.read().is_01() || !tmp_202_fu_2756_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_202_fu_2756_p0.read()) * sc_bigint<32>(tmp_202_fu_2756_p1.read());
}

void ntt::thread_tmp_204_fu_2766_p0() {
    tmp_204_fu_2766_p0 =  (sc_lv<32>) (tmp_204_fu_2766_p00.read());
}

void ntt::thread_tmp_204_fu_2766_p00() {
    tmp_204_fu_2766_p00 = esl_zext<64,32>(q1_q1.read());
}

void ntt::thread_tmp_204_fu_2766_p1() {
    tmp_204_fu_2766_p1 =  (sc_lv<32>) (tmp_90_reg_4322.read());
}

void ntt::thread_tmp_204_fu_2766_p2() {
    tmp_204_fu_2766_p2 = (!tmp_204_fu_2766_p0.read().is_01() || !tmp_204_fu_2766_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_204_fu_2766_p0.read()) * sc_bigint<32>(tmp_204_fu_2766_p1.read());
}

void ntt::thread_tmp_206_fu_2776_p0() {
    tmp_206_fu_2776_p0 =  (sc_lv<32>) (tmp_206_fu_2776_p00.read());
}

void ntt::thread_tmp_206_fu_2776_p00() {
    tmp_206_fu_2776_p00 = esl_zext<64,32>(q2_q1.read());
}

void ntt::thread_tmp_206_fu_2776_p1() {
    tmp_206_fu_2776_p1 =  (sc_lv<32>) (tmp_91_reg_4327.read());
}

void ntt::thread_tmp_206_fu_2776_p2() {
    tmp_206_fu_2776_p2 = (!tmp_206_fu_2776_p0.read().is_01() || !tmp_206_fu_2776_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_206_fu_2776_p0.read()) * sc_bigint<32>(tmp_206_fu_2776_p1.read());
}

void ntt::thread_tmp_208_fu_2786_p0() {
    tmp_208_fu_2786_p0 =  (sc_lv<32>) (tmp_208_fu_2786_p00.read());
}

void ntt::thread_tmp_208_fu_2786_p00() {
    tmp_208_fu_2786_p00 = esl_zext<64,32>(q3_q1.read());
}

void ntt::thread_tmp_208_fu_2786_p1() {
    tmp_208_fu_2786_p1 =  (sc_lv<32>) (tmp_92_reg_4332.read());
}

void ntt::thread_tmp_208_fu_2786_p2() {
    tmp_208_fu_2786_p2 = (!tmp_208_fu_2786_p0.read().is_01() || !tmp_208_fu_2786_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_208_fu_2786_p0.read()) * sc_bigint<32>(tmp_208_fu_2786_p1.read());
}

void ntt::thread_tmp_210_fu_2796_p0() {
    tmp_210_fu_2796_p0 =  (sc_lv<32>) (tmp_210_fu_2796_p00.read());
}

void ntt::thread_tmp_210_fu_2796_p00() {
    tmp_210_fu_2796_p00 = esl_zext<64,32>(q4_q1.read());
}

void ntt::thread_tmp_210_fu_2796_p1() {
    tmp_210_fu_2796_p1 =  (sc_lv<32>) (tmp_93_reg_4337.read());
}

void ntt::thread_tmp_210_fu_2796_p2() {
    tmp_210_fu_2796_p2 = (!tmp_210_fu_2796_p0.read().is_01() || !tmp_210_fu_2796_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_210_fu_2796_p0.read()) * sc_bigint<32>(tmp_210_fu_2796_p1.read());
}

void ntt::thread_tmp_212_fu_2806_p0() {
    tmp_212_fu_2806_p0 =  (sc_lv<32>) (tmp_212_fu_2806_p00.read());
}

void ntt::thread_tmp_212_fu_2806_p00() {
    tmp_212_fu_2806_p00 = esl_zext<64,32>(q5_q1.read());
}

void ntt::thread_tmp_212_fu_2806_p1() {
    tmp_212_fu_2806_p1 =  (sc_lv<32>) (tmp_94_reg_4342.read());
}

void ntt::thread_tmp_212_fu_2806_p2() {
    tmp_212_fu_2806_p2 = (!tmp_212_fu_2806_p0.read().is_01() || !tmp_212_fu_2806_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_212_fu_2806_p0.read()) * sc_bigint<32>(tmp_212_fu_2806_p1.read());
}

void ntt::thread_tmp_214_fu_2816_p0() {
    tmp_214_fu_2816_p0 =  (sc_lv<32>) (tmp_214_fu_2816_p00.read());
}

void ntt::thread_tmp_214_fu_2816_p00() {
    tmp_214_fu_2816_p00 = esl_zext<64,32>(q6_q1.read());
}

void ntt::thread_tmp_214_fu_2816_p1() {
    tmp_214_fu_2816_p1 =  (sc_lv<32>) (tmp_95_reg_4347.read());
}

void ntt::thread_tmp_214_fu_2816_p2() {
    tmp_214_fu_2816_p2 = (!tmp_214_fu_2816_p0.read().is_01() || !tmp_214_fu_2816_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_214_fu_2816_p0.read()) * sc_bigint<32>(tmp_214_fu_2816_p1.read());
}

void ntt::thread_tmp_216_fu_2826_p0() {
    tmp_216_fu_2826_p0 =  (sc_lv<32>) (tmp_216_fu_2826_p00.read());
}

void ntt::thread_tmp_216_fu_2826_p00() {
    tmp_216_fu_2826_p00 = esl_zext<64,32>(q7_q1.read());
}

void ntt::thread_tmp_216_fu_2826_p1() {
    tmp_216_fu_2826_p1 =  (sc_lv<32>) (tmp_96_reg_4352.read());
}

void ntt::thread_tmp_216_fu_2826_p2() {
    tmp_216_fu_2826_p2 = (!tmp_216_fu_2826_p0.read().is_01() || !tmp_216_fu_2826_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_216_fu_2826_p0.read()) * sc_bigint<32>(tmp_216_fu_2826_p1.read());
}

void ntt::thread_tmp_217_fu_2740_p1() {
    tmp_217_fu_2740_p1 = esl_zext<64,32>(j_4_reg_1549.read());
}

void ntt::thread_tmp_242_fu_3392_p1() {
    tmp_242_fu_3392_p1 = esl_zext<64,8>(k_7_reg_1639.read());
}

void ntt::thread_tmp_243_fu_3397_p2() {
    tmp_243_fu_3397_p2 = (!ap_const_lv8_10.is_01() || !k_7_reg_1639.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_10) + sc_biguint<8>(k_7_reg_1639.read()));
}

void ntt::thread_tmp_244_fu_3403_p1() {
    tmp_244_fu_3403_p1 = esl_zext<64,8>(tmp_243_fu_3397_p2.read());
}

void ntt::thread_tmp_245_fu_3408_p2() {
    tmp_245_fu_3408_p2 = (!ap_const_lv8_20.is_01() || !k_7_reg_1639.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_20) + sc_biguint<8>(k_7_reg_1639.read()));
}

void ntt::thread_tmp_246_fu_3414_p1() {
    tmp_246_fu_3414_p1 = esl_zext<64,8>(tmp_245_fu_3408_p2.read());
}

void ntt::thread_tmp_247_fu_3419_p2() {
    tmp_247_fu_3419_p2 = (!ap_const_lv8_30.is_01() || !k_7_reg_1639.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_30) + sc_biguint<8>(k_7_reg_1639.read()));
}

void ntt::thread_tmp_248_fu_3425_p1() {
    tmp_248_fu_3425_p1 = esl_zext<64,8>(tmp_247_fu_3419_p2.read());
}

void ntt::thread_tmp_249_fu_3430_p2() {
    tmp_249_fu_3430_p2 = (!ap_const_lv8_40.is_01() || !k_7_reg_1639.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_40) + sc_biguint<8>(k_7_reg_1639.read()));
}

void ntt::thread_tmp_250_fu_3436_p1() {
    tmp_250_fu_3436_p1 = esl_zext<64,8>(tmp_249_fu_3430_p2.read());
}

void ntt::thread_tmp_251_fu_3441_p2() {
    tmp_251_fu_3441_p2 = (!ap_const_lv8_50.is_01() || !k_7_reg_1639.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_50) + sc_biguint<8>(k_7_reg_1639.read()));
}

void ntt::thread_tmp_252_fu_3447_p1() {
    tmp_252_fu_3447_p1 = esl_zext<64,8>(tmp_251_fu_3441_p2.read());
}

void ntt::thread_tmp_253_fu_3452_p2() {
    tmp_253_fu_3452_p2 = (!ap_const_lv8_60.is_01() || !k_7_reg_1639.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_60) + sc_biguint<8>(k_7_reg_1639.read()));
}

void ntt::thread_tmp_254_fu_3458_p1() {
    tmp_254_fu_3458_p1 = esl_zext<64,8>(tmp_253_fu_3452_p2.read());
}

void ntt::thread_tmp_255_fu_3463_p2() {
    tmp_255_fu_3463_p2 = (!ap_const_lv8_70.is_01() || !k_7_reg_1639.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_70) + sc_biguint<8>(k_7_reg_1639.read()));
}

void ntt::thread_tmp_256_fu_3469_p1() {
    tmp_256_fu_3469_p1 = esl_zext<64,8>(tmp_255_fu_3463_p2.read());
}

void ntt::thread_tmp_257_cast_fu_3494_p1() {
    tmp_257_cast_fu_3494_p1 = esl_zext<32,5>(tmp_257_fu_3488_p2.read());
}

void ntt::thread_tmp_257_fu_3488_p2() {
    tmp_257_fu_3488_p2 = (tmp_402_fu_3480_p1.read() | ap_const_lv5_1);
}

void ntt::thread_tmp_258_fu_3498_p1() {
    tmp_258_fu_3498_p1 = esl_sext<64,32>(reg_1836.read());
}

void ntt::thread_tmp_259_fu_3502_p1() {
    tmp_259_fu_3502_p1 = esl_sext<64,32>(reg_1840.read());
}

void ntt::thread_tmp_260_fu_3506_p1() {
    tmp_260_fu_3506_p1 = esl_sext<64,32>(reg_1849.read());
}

void ntt::thread_tmp_261_fu_3510_p1() {
    tmp_261_fu_3510_p1 = esl_sext<64,32>(reg_1853.read());
}

void ntt::thread_tmp_262_fu_3514_p1() {
    tmp_262_fu_3514_p1 = esl_sext<64,32>(reg_1857.read());
}

void ntt::thread_tmp_263_fu_3518_p1() {
    tmp_263_fu_3518_p1 = esl_sext<64,32>(reg_1861.read());
}

void ntt::thread_tmp_264_fu_3522_p1() {
    tmp_264_fu_3522_p1 = esl_sext<64,32>(zetas_q1.read());
}

void ntt::thread_tmp_265_fu_3526_p1() {
    tmp_265_fu_3526_p1 = esl_sext<64,32>(zetas_q0.read());
}

void ntt::thread_tmp_266_fu_3259_p2() {
    tmp_266_fu_3259_p2 = (!j_6_reg_1617.read().is_01() || !tmp_188_cast_reg_4806.read().is_01())? sc_lv<1>(): (sc_biguint<32>(j_6_reg_1617.read()) < sc_biguint<32>(tmp_188_cast_reg_4806.read()));
}

void ntt::thread_tmp_268_fu_2993_p2() {
    tmp_268_fu_2993_p2 = (!j_5_reg_1583.read().is_01() || !ap_const_lv32_4.is_01())? sc_lv<32>(): (sc_biguint<32>(j_5_reg_1583.read()) + sc_biguint<32>(ap_const_lv32_4));
}

void ntt::thread_tmp_269_fu_2999_p1() {
    tmp_269_fu_2999_p1 = esl_zext<64,32>(tmp_268_fu_2993_p2.read());
}

void ntt::thread_tmp_271_fu_3027_p0() {
    tmp_271_fu_3027_p0 =  (sc_lv<32>) (tmp_271_fu_3027_p00.read());
}

void ntt::thread_tmp_271_fu_3027_p00() {
    tmp_271_fu_3027_p00 = esl_zext<64,32>(q0_q0.read());
}

void ntt::thread_tmp_271_fu_3027_p1() {
    tmp_271_fu_3027_p1 =  (sc_lv<32>) (tmp_121_reg_4564.read());
}

void ntt::thread_tmp_271_fu_3027_p2() {
    tmp_271_fu_3027_p2 = (!tmp_271_fu_3027_p0.read().is_01() || !tmp_271_fu_3027_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_271_fu_3027_p0.read()) * sc_bigint<32>(tmp_271_fu_3027_p1.read());
}

void ntt::thread_tmp_273_fu_3037_p0() {
    tmp_273_fu_3037_p0 =  (sc_lv<32>) (tmp_273_fu_3037_p00.read());
}

void ntt::thread_tmp_273_fu_3037_p00() {
    tmp_273_fu_3037_p00 = esl_zext<64,32>(q1_q0.read());
}

void ntt::thread_tmp_273_fu_3037_p1() {
    tmp_273_fu_3037_p1 =  (sc_lv<32>) (tmp_122_reg_4569.read());
}

void ntt::thread_tmp_273_fu_3037_p2() {
    tmp_273_fu_3037_p2 = (!tmp_273_fu_3037_p0.read().is_01() || !tmp_273_fu_3037_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_273_fu_3037_p0.read()) * sc_bigint<32>(tmp_273_fu_3037_p1.read());
}

void ntt::thread_tmp_275_fu_3047_p0() {
    tmp_275_fu_3047_p0 =  (sc_lv<32>) (tmp_275_fu_3047_p00.read());
}

void ntt::thread_tmp_275_fu_3047_p00() {
    tmp_275_fu_3047_p00 = esl_zext<64,32>(q2_q0.read());
}

void ntt::thread_tmp_275_fu_3047_p1() {
    tmp_275_fu_3047_p1 =  (sc_lv<32>) (tmp_123_reg_4574.read());
}

void ntt::thread_tmp_275_fu_3047_p2() {
    tmp_275_fu_3047_p2 = (!tmp_275_fu_3047_p0.read().is_01() || !tmp_275_fu_3047_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_275_fu_3047_p0.read()) * sc_bigint<32>(tmp_275_fu_3047_p1.read());
}

void ntt::thread_tmp_277_fu_3057_p0() {
    tmp_277_fu_3057_p0 =  (sc_lv<32>) (tmp_277_fu_3057_p00.read());
}

void ntt::thread_tmp_277_fu_3057_p00() {
    tmp_277_fu_3057_p00 = esl_zext<64,32>(q3_q0.read());
}

void ntt::thread_tmp_277_fu_3057_p1() {
    tmp_277_fu_3057_p1 =  (sc_lv<32>) (tmp_124_reg_4579.read());
}

void ntt::thread_tmp_277_fu_3057_p2() {
    tmp_277_fu_3057_p2 = (!tmp_277_fu_3057_p0.read().is_01() || !tmp_277_fu_3057_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_277_fu_3057_p0.read()) * sc_bigint<32>(tmp_277_fu_3057_p1.read());
}

void ntt::thread_tmp_279_fu_3067_p0() {
    tmp_279_fu_3067_p0 =  (sc_lv<32>) (tmp_279_fu_3067_p00.read());
}

void ntt::thread_tmp_279_fu_3067_p00() {
    tmp_279_fu_3067_p00 = esl_zext<64,32>(q4_q0.read());
}

void ntt::thread_tmp_279_fu_3067_p1() {
    tmp_279_fu_3067_p1 =  (sc_lv<32>) (tmp_125_reg_4584.read());
}

void ntt::thread_tmp_279_fu_3067_p2() {
    tmp_279_fu_3067_p2 = (!tmp_279_fu_3067_p0.read().is_01() || !tmp_279_fu_3067_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_279_fu_3067_p0.read()) * sc_bigint<32>(tmp_279_fu_3067_p1.read());
}

void ntt::thread_tmp_27_fu_2102_p2() {
    tmp_27_fu_2102_p2 = (!q2_q0.read().is_01() || !grp_fu_1738_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q2_q0.read()) + sc_biguint<32>(grp_fu_1738_p2.read()));
}

void ntt::thread_tmp_281_fu_3077_p0() {
    tmp_281_fu_3077_p0 =  (sc_lv<32>) (tmp_281_fu_3077_p00.read());
}

void ntt::thread_tmp_281_fu_3077_p00() {
    tmp_281_fu_3077_p00 = esl_zext<64,32>(q5_q0.read());
}

void ntt::thread_tmp_281_fu_3077_p1() {
    tmp_281_fu_3077_p1 =  (sc_lv<32>) (tmp_126_reg_4589.read());
}

void ntt::thread_tmp_281_fu_3077_p2() {
    tmp_281_fu_3077_p2 = (!tmp_281_fu_3077_p0.read().is_01() || !tmp_281_fu_3077_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_281_fu_3077_p0.read()) * sc_bigint<32>(tmp_281_fu_3077_p1.read());
}

void ntt::thread_tmp_283_fu_3087_p0() {
    tmp_283_fu_3087_p0 =  (sc_lv<32>) (tmp_283_fu_3087_p00.read());
}

void ntt::thread_tmp_283_fu_3087_p00() {
    tmp_283_fu_3087_p00 = esl_zext<64,32>(q6_q0.read());
}

void ntt::thread_tmp_283_fu_3087_p1() {
    tmp_283_fu_3087_p1 =  (sc_lv<32>) (tmp_127_reg_4594.read());
}

void ntt::thread_tmp_283_fu_3087_p2() {
    tmp_283_fu_3087_p2 = (!tmp_283_fu_3087_p0.read().is_01() || !tmp_283_fu_3087_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_283_fu_3087_p0.read()) * sc_bigint<32>(tmp_283_fu_3087_p1.read());
}

void ntt::thread_tmp_285_fu_3097_p0() {
    tmp_285_fu_3097_p0 =  (sc_lv<32>) (tmp_285_fu_3097_p00.read());
}

void ntt::thread_tmp_285_fu_3097_p00() {
    tmp_285_fu_3097_p00 = esl_zext<64,32>(q7_q0.read());
}

void ntt::thread_tmp_285_fu_3097_p1() {
    tmp_285_fu_3097_p1 =  (sc_lv<32>) (tmp_128_reg_4599.read());
}

void ntt::thread_tmp_285_fu_3097_p2() {
    tmp_285_fu_3097_p2 = (!tmp_285_fu_3097_p0.read().is_01() || !tmp_285_fu_3097_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_285_fu_3097_p0.read()) * sc_bigint<32>(tmp_285_fu_3097_p1.read());
}

void ntt::thread_tmp_286_fu_3011_p1() {
    tmp_286_fu_3011_p1 = esl_zext<64,32>(j_5_reg_1583.read());
}

void ntt::thread_tmp_28_fu_2108_p2() {
    tmp_28_fu_2108_p2 = (!q2_q0.read().is_01() || !grp_montgomery_reduce_fu_1670_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q2_q0.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1670_ap_return.read()));
}

void ntt::thread_tmp_30_fu_2115_p2() {
    tmp_30_fu_2115_p2 = (!q3_q0.read().is_01() || !grp_fu_1744_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q3_q0.read()) + sc_biguint<32>(grp_fu_1744_p2.read()));
}

void ntt::thread_tmp_311_fu_3530_p2() {
    tmp_311_fu_3530_p2 = (!j_7_reg_1651.read().is_01() || !tmp_257_cast_reg_5053.read().is_01())? sc_lv<1>(): (sc_biguint<32>(j_7_reg_1651.read()) < sc_biguint<32>(tmp_257_cast_reg_5053.read()));
}

void ntt::thread_tmp_313_fu_3264_p2() {
    tmp_313_fu_3264_p2 = (!j_6_reg_1617.read().is_01() || !ap_const_lv32_2.is_01())? sc_lv<32>(): (sc_biguint<32>(j_6_reg_1617.read()) + sc_biguint<32>(ap_const_lv32_2));
}

void ntt::thread_tmp_314_fu_3270_p1() {
    tmp_314_fu_3270_p1 = esl_zext<64,32>(tmp_313_fu_3264_p2.read());
}

void ntt::thread_tmp_316_fu_3298_p0() {
    tmp_316_fu_3298_p0 =  (sc_lv<32>) (tmp_316_fu_3298_p00.read());
}

void ntt::thread_tmp_316_fu_3298_p00() {
    tmp_316_fu_3298_p00 = esl_zext<64,32>(q0_q1.read());
}

void ntt::thread_tmp_316_fu_3298_p1() {
    tmp_316_fu_3298_p1 =  (sc_lv<32>) (tmp_189_reg_4811.read());
}

void ntt::thread_tmp_316_fu_3298_p2() {
    tmp_316_fu_3298_p2 = (!tmp_316_fu_3298_p0.read().is_01() || !tmp_316_fu_3298_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_316_fu_3298_p0.read()) * sc_bigint<32>(tmp_316_fu_3298_p1.read());
}

void ntt::thread_tmp_318_fu_3308_p0() {
    tmp_318_fu_3308_p0 =  (sc_lv<32>) (tmp_318_fu_3308_p00.read());
}

void ntt::thread_tmp_318_fu_3308_p00() {
    tmp_318_fu_3308_p00 = esl_zext<64,32>(q1_q1.read());
}

void ntt::thread_tmp_318_fu_3308_p1() {
    tmp_318_fu_3308_p1 =  (sc_lv<32>) (tmp_190_reg_4816.read());
}

void ntt::thread_tmp_318_fu_3308_p2() {
    tmp_318_fu_3308_p2 = (!tmp_318_fu_3308_p0.read().is_01() || !tmp_318_fu_3308_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_318_fu_3308_p0.read()) * sc_bigint<32>(tmp_318_fu_3308_p1.read());
}

void ntt::thread_tmp_31_fu_2121_p2() {
    tmp_31_fu_2121_p2 = (!q3_q0.read().is_01() || !grp_montgomery_reduce_fu_1675_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q3_q0.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1675_ap_return.read()));
}

void ntt::thread_tmp_320_fu_3318_p0() {
    tmp_320_fu_3318_p0 =  (sc_lv<32>) (tmp_320_fu_3318_p00.read());
}

void ntt::thread_tmp_320_fu_3318_p00() {
    tmp_320_fu_3318_p00 = esl_zext<64,32>(q2_q1.read());
}

void ntt::thread_tmp_320_fu_3318_p1() {
    tmp_320_fu_3318_p1 =  (sc_lv<32>) (tmp_191_reg_4821.read());
}

void ntt::thread_tmp_320_fu_3318_p2() {
    tmp_320_fu_3318_p2 = (!tmp_320_fu_3318_p0.read().is_01() || !tmp_320_fu_3318_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_320_fu_3318_p0.read()) * sc_bigint<32>(tmp_320_fu_3318_p1.read());
}

void ntt::thread_tmp_322_fu_3328_p0() {
    tmp_322_fu_3328_p0 =  (sc_lv<32>) (tmp_322_fu_3328_p00.read());
}

void ntt::thread_tmp_322_fu_3328_p00() {
    tmp_322_fu_3328_p00 = esl_zext<64,32>(q3_q1.read());
}

void ntt::thread_tmp_322_fu_3328_p1() {
    tmp_322_fu_3328_p1 =  (sc_lv<32>) (tmp_192_reg_4826.read());
}

void ntt::thread_tmp_322_fu_3328_p2() {
    tmp_322_fu_3328_p2 = (!tmp_322_fu_3328_p0.read().is_01() || !tmp_322_fu_3328_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_322_fu_3328_p0.read()) * sc_bigint<32>(tmp_322_fu_3328_p1.read());
}

void ntt::thread_tmp_324_fu_3338_p0() {
    tmp_324_fu_3338_p0 =  (sc_lv<32>) (tmp_324_fu_3338_p00.read());
}

void ntt::thread_tmp_324_fu_3338_p00() {
    tmp_324_fu_3338_p00 = esl_zext<64,32>(q4_q1.read());
}

void ntt::thread_tmp_324_fu_3338_p1() {
    tmp_324_fu_3338_p1 =  (sc_lv<32>) (tmp_193_reg_4831.read());
}

void ntt::thread_tmp_324_fu_3338_p2() {
    tmp_324_fu_3338_p2 = (!tmp_324_fu_3338_p0.read().is_01() || !tmp_324_fu_3338_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_324_fu_3338_p0.read()) * sc_bigint<32>(tmp_324_fu_3338_p1.read());
}

void ntt::thread_tmp_326_fu_3348_p0() {
    tmp_326_fu_3348_p0 =  (sc_lv<32>) (tmp_326_fu_3348_p00.read());
}

void ntt::thread_tmp_326_fu_3348_p00() {
    tmp_326_fu_3348_p00 = esl_zext<64,32>(q5_q1.read());
}

void ntt::thread_tmp_326_fu_3348_p1() {
    tmp_326_fu_3348_p1 =  (sc_lv<32>) (tmp_194_reg_4836.read());
}

void ntt::thread_tmp_326_fu_3348_p2() {
    tmp_326_fu_3348_p2 = (!tmp_326_fu_3348_p0.read().is_01() || !tmp_326_fu_3348_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_326_fu_3348_p0.read()) * sc_bigint<32>(tmp_326_fu_3348_p1.read());
}

void ntt::thread_tmp_328_fu_3358_p0() {
    tmp_328_fu_3358_p0 =  (sc_lv<32>) (tmp_328_fu_3358_p00.read());
}

void ntt::thread_tmp_328_fu_3358_p00() {
    tmp_328_fu_3358_p00 = esl_zext<64,32>(q6_q1.read());
}

void ntt::thread_tmp_328_fu_3358_p1() {
    tmp_328_fu_3358_p1 =  (sc_lv<32>) (tmp_195_reg_4841.read());
}

void ntt::thread_tmp_328_fu_3358_p2() {
    tmp_328_fu_3358_p2 = (!tmp_328_fu_3358_p0.read().is_01() || !tmp_328_fu_3358_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_328_fu_3358_p0.read()) * sc_bigint<32>(tmp_328_fu_3358_p1.read());
}

void ntt::thread_tmp_32_fu_2606_p2() {
    tmp_32_fu_2606_p2 = (!ap_const_lv5_6.is_01() || !k_4_reg_1537.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_6) + sc_biguint<5>(k_4_reg_1537.read()));
}

void ntt::thread_tmp_330_fu_3368_p0() {
    tmp_330_fu_3368_p0 =  (sc_lv<32>) (tmp_330_fu_3368_p00.read());
}

void ntt::thread_tmp_330_fu_3368_p00() {
    tmp_330_fu_3368_p00 = esl_zext<64,32>(q7_q1.read());
}

void ntt::thread_tmp_330_fu_3368_p1() {
    tmp_330_fu_3368_p1 =  (sc_lv<32>) (tmp_196_reg_4846.read());
}

void ntt::thread_tmp_330_fu_3368_p2() {
    tmp_330_fu_3368_p2 = (!tmp_330_fu_3368_p0.read().is_01() || !tmp_330_fu_3368_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_330_fu_3368_p0.read()) * sc_bigint<32>(tmp_330_fu_3368_p1.read());
}

void ntt::thread_tmp_331_fu_3282_p1() {
    tmp_331_fu_3282_p1 = esl_zext<64,32>(j_6_reg_1617.read());
}

void ntt::thread_tmp_33_fu_2612_p1() {
    tmp_33_fu_2612_p1 = esl_zext<64,5>(tmp_32_fu_2606_p2.read());
}

void ntt::thread_tmp_34_fu_2148_p1() {
    tmp_34_fu_2148_p1 = esl_zext<64,6>(j_1_reg_1491.read());
}

void ntt::thread_tmp_357_fu_3541_p1() {
    tmp_357_fu_3541_p1 = esl_zext<64,32>(j_17_fu_3535_p2.read());
}

void ntt::thread_tmp_359_fu_3569_p0() {
    tmp_359_fu_3569_p0 =  (sc_lv<32>) (tmp_359_fu_3569_p00.read());
}

void ntt::thread_tmp_359_fu_3569_p00() {
    tmp_359_fu_3569_p00 = esl_zext<64,32>(q0_q0.read());
}

void ntt::thread_tmp_359_fu_3569_p1() {
    tmp_359_fu_3569_p1 =  (sc_lv<32>) (tmp_258_reg_5058.read());
}

void ntt::thread_tmp_359_fu_3569_p2() {
    tmp_359_fu_3569_p2 = (!tmp_359_fu_3569_p0.read().is_01() || !tmp_359_fu_3569_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_359_fu_3569_p0.read()) * sc_bigint<32>(tmp_359_fu_3569_p1.read());
}

void ntt::thread_tmp_361_fu_3579_p0() {
    tmp_361_fu_3579_p0 =  (sc_lv<32>) (tmp_361_fu_3579_p00.read());
}

void ntt::thread_tmp_361_fu_3579_p00() {
    tmp_361_fu_3579_p00 = esl_zext<64,32>(q1_q0.read());
}

void ntt::thread_tmp_361_fu_3579_p1() {
    tmp_361_fu_3579_p1 =  (sc_lv<32>) (tmp_259_reg_5063.read());
}

void ntt::thread_tmp_361_fu_3579_p2() {
    tmp_361_fu_3579_p2 = (!tmp_361_fu_3579_p0.read().is_01() || !tmp_361_fu_3579_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_361_fu_3579_p0.read()) * sc_bigint<32>(tmp_361_fu_3579_p1.read());
}

void ntt::thread_tmp_363_fu_3589_p0() {
    tmp_363_fu_3589_p0 =  (sc_lv<32>) (tmp_363_fu_3589_p00.read());
}

void ntt::thread_tmp_363_fu_3589_p00() {
    tmp_363_fu_3589_p00 = esl_zext<64,32>(q2_q0.read());
}

void ntt::thread_tmp_363_fu_3589_p1() {
    tmp_363_fu_3589_p1 =  (sc_lv<32>) (tmp_260_reg_5068.read());
}

void ntt::thread_tmp_363_fu_3589_p2() {
    tmp_363_fu_3589_p2 = (!tmp_363_fu_3589_p0.read().is_01() || !tmp_363_fu_3589_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_363_fu_3589_p0.read()) * sc_bigint<32>(tmp_363_fu_3589_p1.read());
}

void ntt::thread_tmp_365_fu_3599_p0() {
    tmp_365_fu_3599_p0 =  (sc_lv<32>) (tmp_365_fu_3599_p00.read());
}

void ntt::thread_tmp_365_fu_3599_p00() {
    tmp_365_fu_3599_p00 = esl_zext<64,32>(q3_q0.read());
}

void ntt::thread_tmp_365_fu_3599_p1() {
    tmp_365_fu_3599_p1 =  (sc_lv<32>) (tmp_261_reg_5073.read());
}

void ntt::thread_tmp_365_fu_3599_p2() {
    tmp_365_fu_3599_p2 = (!tmp_365_fu_3599_p0.read().is_01() || !tmp_365_fu_3599_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_365_fu_3599_p0.read()) * sc_bigint<32>(tmp_365_fu_3599_p1.read());
}

void ntt::thread_tmp_367_fu_3609_p0() {
    tmp_367_fu_3609_p0 =  (sc_lv<32>) (tmp_367_fu_3609_p00.read());
}

void ntt::thread_tmp_367_fu_3609_p00() {
    tmp_367_fu_3609_p00 = esl_zext<64,32>(q4_q0.read());
}

void ntt::thread_tmp_367_fu_3609_p1() {
    tmp_367_fu_3609_p1 =  (sc_lv<32>) (tmp_262_reg_5078.read());
}

void ntt::thread_tmp_367_fu_3609_p2() {
    tmp_367_fu_3609_p2 = (!tmp_367_fu_3609_p0.read().is_01() || !tmp_367_fu_3609_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_367_fu_3609_p0.read()) * sc_bigint<32>(tmp_367_fu_3609_p1.read());
}

void ntt::thread_tmp_369_fu_3619_p0() {
    tmp_369_fu_3619_p0 =  (sc_lv<32>) (tmp_369_fu_3619_p00.read());
}

void ntt::thread_tmp_369_fu_3619_p00() {
    tmp_369_fu_3619_p00 = esl_zext<64,32>(q5_q0.read());
}

void ntt::thread_tmp_369_fu_3619_p1() {
    tmp_369_fu_3619_p1 =  (sc_lv<32>) (tmp_263_reg_5083.read());
}

void ntt::thread_tmp_369_fu_3619_p2() {
    tmp_369_fu_3619_p2 = (!tmp_369_fu_3619_p0.read().is_01() || !tmp_369_fu_3619_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_369_fu_3619_p0.read()) * sc_bigint<32>(tmp_369_fu_3619_p1.read());
}

void ntt::thread_tmp_36_fu_2164_p0() {
    tmp_36_fu_2164_p0 =  (sc_lv<32>) (tmp_36_fu_2164_p00.read());
}

void ntt::thread_tmp_36_fu_2164_p00() {
    tmp_36_fu_2164_p00 = esl_zext<64,32>(reg_1820.read());
}

void ntt::thread_tmp_36_fu_2164_p1() {
    tmp_36_fu_2164_p1 =  (sc_lv<32>) (tmp_6_reg_3761.read());
}

void ntt::thread_tmp_36_fu_2164_p2() {
    tmp_36_fu_2164_p2 = (!tmp_36_fu_2164_p0.read().is_01() || !tmp_36_fu_2164_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_36_fu_2164_p0.read()) * sc_bigint<32>(tmp_36_fu_2164_p1.read());
}

void ntt::thread_tmp_371_fu_3629_p0() {
    tmp_371_fu_3629_p0 =  (sc_lv<32>) (tmp_371_fu_3629_p00.read());
}

void ntt::thread_tmp_371_fu_3629_p00() {
    tmp_371_fu_3629_p00 = esl_zext<64,32>(q6_q0.read());
}

void ntt::thread_tmp_371_fu_3629_p1() {
    tmp_371_fu_3629_p1 =  (sc_lv<32>) (tmp_264_reg_5088.read());
}

void ntt::thread_tmp_371_fu_3629_p2() {
    tmp_371_fu_3629_p2 = (!tmp_371_fu_3629_p0.read().is_01() || !tmp_371_fu_3629_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_371_fu_3629_p0.read()) * sc_bigint<32>(tmp_371_fu_3629_p1.read());
}

void ntt::thread_tmp_373_fu_3639_p0() {
    tmp_373_fu_3639_p0 =  (sc_lv<32>) (tmp_373_fu_3639_p00.read());
}

void ntt::thread_tmp_373_fu_3639_p00() {
    tmp_373_fu_3639_p00 = esl_zext<64,32>(q7_q0.read());
}

void ntt::thread_tmp_373_fu_3639_p1() {
    tmp_373_fu_3639_p1 =  (sc_lv<32>) (tmp_265_reg_5093.read());
}

void ntt::thread_tmp_373_fu_3639_p2() {
    tmp_373_fu_3639_p2 = (!tmp_373_fu_3639_p0.read().is_01() || !tmp_373_fu_3639_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_373_fu_3639_p0.read()) * sc_bigint<32>(tmp_373_fu_3639_p1.read());
}

void ntt::thread_tmp_374_fu_3553_p1() {
    tmp_374_fu_3553_p1 = esl_zext<64,32>(j_7_reg_1651.read());
}

void ntt::thread_tmp_38_fu_2173_p0() {
    tmp_38_fu_2173_p0 =  (sc_lv<32>) (tmp_38_fu_2173_p00.read());
}

void ntt::thread_tmp_38_fu_2173_p00() {
    tmp_38_fu_2173_p00 = esl_zext<64,32>(reg_1825.read());
}

void ntt::thread_tmp_38_fu_2173_p1() {
    tmp_38_fu_2173_p1 =  (sc_lv<32>) (tmp_6_reg_3761.read());
}

void ntt::thread_tmp_38_fu_2173_p2() {
    tmp_38_fu_2173_p2 = (!tmp_38_fu_2173_p0.read().is_01() || !tmp_38_fu_2173_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_38_fu_2173_p0.read()) * sc_bigint<32>(tmp_38_fu_2173_p1.read());
}

void ntt::thread_tmp_399_fu_2667_p1() {
    tmp_399_fu_2667_p1 = j_reg_1525.read().range(5-1, 0);
}

void ntt::thread_tmp_3_fu_2038_p1() {
    tmp_3_fu_2038_p1 = esl_sext<64,32>(zetas_q0.read());
}

void ntt::thread_tmp_400_fu_2938_p1() {
    tmp_400_fu_2938_p1 = j_8_reg_1559.read().range(5-1, 0);
}

void ntt::thread_tmp_401_fu_3209_p1() {
    tmp_401_fu_3209_p1 = j_13_reg_1593.read().range(5-1, 0);
}

void ntt::thread_tmp_402_fu_3480_p1() {
    tmp_402_fu_3480_p1 = j_11_reg_1627.read().range(5-1, 0);
}

void ntt::thread_tmp_40_fu_2182_p0() {
    tmp_40_fu_2182_p0 =  (sc_lv<32>) (tmp_40_fu_2182_p00.read());
}

void ntt::thread_tmp_40_fu_2182_p00() {
    tmp_40_fu_2182_p00 = esl_zext<64,32>(reg_1797.read());
}

void ntt::thread_tmp_40_fu_2182_p1() {
    tmp_40_fu_2182_p1 =  (sc_lv<32>) (tmp_10_reg_3767.read());
}

void ntt::thread_tmp_40_fu_2182_p2() {
    tmp_40_fu_2182_p2 = (!tmp_40_fu_2182_p0.read().is_01() || !tmp_40_fu_2182_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_40_fu_2182_p0.read()) * sc_bigint<32>(tmp_40_fu_2182_p1.read());
}

void ntt::thread_tmp_42_fu_2191_p0() {
    tmp_42_fu_2191_p0 =  (sc_lv<32>) (tmp_42_fu_2191_p00.read());
}

void ntt::thread_tmp_42_fu_2191_p00() {
    tmp_42_fu_2191_p00 = esl_zext<64,32>(reg_1802.read());
}

void ntt::thread_tmp_42_fu_2191_p1() {
    tmp_42_fu_2191_p1 =  (sc_lv<32>) (tmp_10_reg_3767.read());
}

void ntt::thread_tmp_42_fu_2191_p2() {
    tmp_42_fu_2191_p2 = (!tmp_42_fu_2191_p0.read().is_01() || !tmp_42_fu_2191_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_42_fu_2191_p0.read()) * sc_bigint<32>(tmp_42_fu_2191_p1.read());
}

void ntt::thread_tmp_53_fu_2196_p2() {
    tmp_53_fu_2196_p2 = (!q5_q0.read().is_01() || !grp_fu_1744_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q5_q0.read()) + sc_biguint<32>(grp_fu_1744_p2.read()));
}

void ntt::thread_tmp_54_fu_2202_p2() {
    tmp_54_fu_2202_p2 = (!q5_q0.read().is_01() || !grp_montgomery_reduce_fu_1675_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q5_q0.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1675_ap_return.read()));
}

void ntt::thread_tmp_55_fu_2617_p2() {
    tmp_55_fu_2617_p2 = (!ap_const_lv5_8.is_01() || !k_4_reg_1537.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_8) + sc_biguint<5>(k_4_reg_1537.read()));
}

void ntt::thread_tmp_56_fu_2623_p1() {
    tmp_56_fu_2623_p1 = esl_zext<64,5>(tmp_55_fu_2617_p2.read());
}

void ntt::thread_tmp_57_fu_2628_p2() {
    tmp_57_fu_2628_p2 = (!ap_const_lv5_A.is_01() || !k_4_reg_1537.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) + sc_biguint<5>(k_4_reg_1537.read()));
}

void ntt::thread_tmp_58_fu_2634_p1() {
    tmp_58_fu_2634_p1 = esl_zext<64,5>(tmp_57_fu_2628_p2.read());
}

void ntt::thread_tmp_59_fu_2639_p2() {
    tmp_59_fu_2639_p2 = (!ap_const_lv5_C.is_01() || !k_4_reg_1537.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_C) + sc_biguint<5>(k_4_reg_1537.read()));
}

void ntt::thread_tmp_5_fu_2584_p2() {
    tmp_5_fu_2584_p2 = (!ap_const_lv5_2.is_01() || !k_4_reg_1537.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_2) + sc_biguint<5>(k_4_reg_1537.read()));
}

void ntt::thread_tmp_60_fu_2209_p1() {
    tmp_60_fu_2209_p1 = esl_sext<64,32>(reg_1836.read());
}

void ntt::thread_tmp_61_fu_2213_p1() {
    tmp_61_fu_2213_p1 = esl_sext<64,32>(reg_1840.read());
}

void ntt::thread_tmp_62_fu_2217_p1() {
    tmp_62_fu_2217_p1 = esl_sext<64,32>(zetas_q1.read());
}

void ntt::thread_tmp_63_fu_2221_p1() {
    tmp_63_fu_2221_p1 = esl_sext<64,32>(zetas_q0.read());
}

void ntt::thread_tmp_64_fu_2645_p1() {
    tmp_64_fu_2645_p1 = esl_zext<64,5>(tmp_59_fu_2639_p2.read());
}

void ntt::thread_tmp_65_fu_2237_p1() {
    tmp_65_fu_2237_p1 = esl_zext<64,6>(j_2_reg_1502.read());
}

void ntt::thread_tmp_67_fu_2253_p0() {
    tmp_67_fu_2253_p0 =  (sc_lv<32>) (tmp_67_fu_2253_p00.read());
}

void ntt::thread_tmp_67_fu_2253_p00() {
    tmp_67_fu_2253_p00 = esl_zext<64,32>(reg_1844.read());
}

void ntt::thread_tmp_67_fu_2253_p1() {
    tmp_67_fu_2253_p1 =  (sc_lv<32>) (tmp_60_reg_3875.read());
}

void ntt::thread_tmp_67_fu_2253_p2() {
    tmp_67_fu_2253_p2 = (!tmp_67_fu_2253_p0.read().is_01() || !tmp_67_fu_2253_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_67_fu_2253_p0.read()) * sc_bigint<32>(tmp_67_fu_2253_p1.read());
}

void ntt::thread_tmp_69_fu_2262_p0() {
    tmp_69_fu_2262_p0 =  (sc_lv<32>) (tmp_69_fu_2262_p00.read());
}

void ntt::thread_tmp_69_fu_2262_p00() {
    tmp_69_fu_2262_p00 = esl_zext<64,32>(reg_1825.read());
}

void ntt::thread_tmp_69_fu_2262_p1() {
    tmp_69_fu_2262_p1 =  (sc_lv<32>) (tmp_61_reg_3880.read());
}

void ntt::thread_tmp_69_fu_2262_p2() {
    tmp_69_fu_2262_p2 = (!tmp_69_fu_2262_p0.read().is_01() || !tmp_69_fu_2262_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_69_fu_2262_p0.read()) * sc_bigint<32>(tmp_69_fu_2262_p1.read());
}

void ntt::thread_tmp_6_fu_2128_p1() {
    tmp_6_fu_2128_p1 = esl_sext<64,32>(zetas_q0.read());
}

void ntt::thread_tmp_71_fu_2271_p0() {
    tmp_71_fu_2271_p0 =  (sc_lv<32>) (tmp_71_fu_2271_p00.read());
}

void ntt::thread_tmp_71_fu_2271_p00() {
    tmp_71_fu_2271_p00 = esl_zext<64,32>(reg_1792.read());
}

void ntt::thread_tmp_71_fu_2271_p1() {
    tmp_71_fu_2271_p1 =  (sc_lv<32>) (tmp_62_reg_3885.read());
}

void ntt::thread_tmp_71_fu_2271_p2() {
    tmp_71_fu_2271_p2 = (!tmp_71_fu_2271_p0.read().is_01() || !tmp_71_fu_2271_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_71_fu_2271_p0.read()) * sc_bigint<32>(tmp_71_fu_2271_p1.read());
}

void ntt::thread_tmp_73_fu_2280_p0() {
    tmp_73_fu_2280_p0 =  (sc_lv<32>) (tmp_73_fu_2280_p00.read());
}

void ntt::thread_tmp_73_fu_2280_p00() {
    tmp_73_fu_2280_p00 = esl_zext<64,32>(reg_1802.read());
}

void ntt::thread_tmp_73_fu_2280_p1() {
    tmp_73_fu_2280_p1 =  (sc_lv<32>) (tmp_63_reg_3890.read());
}

void ntt::thread_tmp_73_fu_2280_p2() {
    tmp_73_fu_2280_p2 = (!tmp_73_fu_2280_p0.read().is_01() || !tmp_73_fu_2280_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(tmp_73_fu_2280_p0.read()) * sc_bigint<32>(tmp_73_fu_2280_p1.read());
}

void ntt::thread_tmp_78_fu_2285_p2() {
    tmp_78_fu_2285_p2 = (!q2_q0.read().is_01() || !grp_fu_1719_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q2_q0.read()) + sc_biguint<32>(grp_fu_1719_p2.read()));
}

void ntt::thread_tmp_79_fu_2291_p2() {
    tmp_79_fu_2291_p2 = (!q2_q0.read().is_01() || !grp_montgomery_reduce_fu_1665_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q2_q0.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1665_ap_return.read()));
}

void ntt::thread_tmp_7_fu_2590_p1() {
    tmp_7_fu_2590_p1 = esl_zext<64,5>(tmp_5_fu_2584_p2.read());
}

void ntt::thread_tmp_84_fu_2298_p2() {
    tmp_84_fu_2298_p2 = (!q6_q0.read().is_01() || !grp_fu_1744_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q6_q0.read()) + sc_biguint<32>(grp_fu_1744_p2.read()));
}

void ntt::thread_tmp_85_fu_2304_p2() {
    tmp_85_fu_2304_p2 = (!q6_q0.read().is_01() || !grp_montgomery_reduce_fu_1675_ap_return.read().is_01())? sc_lv<32>(): (sc_biguint<32>(q6_q0.read()) + sc_biguint<32>(grp_montgomery_reduce_fu_1675_ap_return.read()));
}

void ntt::thread_tmp_86_fu_2650_p2() {
    tmp_86_fu_2650_p2 = (!ap_const_lv5_E.is_01() || !k_4_reg_1537.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_E) + sc_biguint<5>(k_4_reg_1537.read()));
}

void ntt::thread_tmp_87_fu_2656_p1() {
    tmp_87_fu_2656_p1 = esl_zext<64,5>(tmp_86_fu_2650_p2.read());
}

void ntt::thread_tmp_88_cast_fu_2681_p1() {
    tmp_88_cast_fu_2681_p1 = esl_zext<32,5>(tmp_88_fu_2675_p2.read());
}

void ntt::thread_tmp_88_fu_2675_p2() {
    tmp_88_fu_2675_p2 = (tmp_399_fu_2667_p1.read() | ap_const_lv5_8);
}

void ntt::thread_tmp_89_fu_2685_p1() {
    tmp_89_fu_2685_p1 = esl_sext<64,32>(reg_1836.read());
}

void ntt::thread_tmp_8_fu_2595_p2() {
    tmp_8_fu_2595_p2 = (!ap_const_lv5_4.is_01() || !k_4_reg_1537.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_4) + sc_biguint<5>(k_4_reg_1537.read()));
}

void ntt::thread_tmp_90_fu_2689_p1() {
    tmp_90_fu_2689_p1 = esl_sext<64,32>(reg_1840.read());
}

void ntt::thread_tmp_91_fu_2693_p1() {
    tmp_91_fu_2693_p1 = esl_sext<64,32>(reg_1849.read());
}

void ntt::thread_tmp_92_fu_2697_p1() {
    tmp_92_fu_2697_p1 = esl_sext<64,32>(reg_1853.read());
}

void ntt::thread_tmp_93_fu_2701_p1() {
    tmp_93_fu_2701_p1 = esl_sext<64,32>(reg_1857.read());
}

void ntt::thread_tmp_94_fu_2705_p1() {
    tmp_94_fu_2705_p1 = esl_sext<64,32>(reg_1861.read());
}

void ntt::thread_tmp_95_fu_2709_p1() {
    tmp_95_fu_2709_p1 = esl_sext<64,32>(zetas_q1.read());
}

void ntt::thread_tmp_96_fu_2713_p1() {
    tmp_96_fu_2713_p1 = esl_sext<64,32>(zetas_q0.read());
}

void ntt::thread_tmp_97_fu_2850_p1() {
    tmp_97_fu_2850_p1 = esl_zext<64,6>(k_5_reg_1571.read());
}

void ntt::thread_tmp_98_fu_2855_p2() {
    tmp_98_fu_2855_p2 = (!ap_const_lv6_4.is_01() || !k_5_reg_1571.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_4) + sc_biguint<6>(k_5_reg_1571.read()));
}

void ntt::thread_tmp_99_fu_2861_p1() {
    tmp_99_fu_2861_p1 = esl_zext<64,6>(tmp_98_fu_2855_p2.read());
}

void ntt::thread_tmp_9_fu_2601_p1() {
    tmp_9_fu_2601_p1 = esl_zext<64,5>(tmp_8_fu_2595_p2.read());
}

void ntt::thread_tmp_s_fu_2579_p1() {
    tmp_s_fu_2579_p1 = esl_zext<64,5>(k_4_reg_1537.read());
}

void ntt::thread_zetas_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read())) {
        zetas_address0 =  (sc_lv<8>) (tmp_256_fu_3469_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read())) {
        zetas_address0 =  (sc_lv<8>) (tmp_252_fu_3447_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read())) {
        zetas_address0 =  (sc_lv<8>) (tmp_248_fu_3425_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        zetas_address0 =  (sc_lv<8>) (tmp_244_fu_3403_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        zetas_address0 =  (sc_lv<8>) (tmp_187_fu_3198_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        zetas_address0 =  (sc_lv<8>) (tmp_183_fu_3176_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        zetas_address0 =  (sc_lv<8>) (tmp_179_fu_3154_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        zetas_address0 =  (sc_lv<8>) (tmp_132_fu_3132_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        zetas_address0 =  (sc_lv<8>) (tmp_119_fu_2927_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        zetas_address0 =  (sc_lv<8>) (tmp_115_fu_2905_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        zetas_address0 =  (sc_lv<8>) (tmp_111_fu_2883_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        zetas_address0 =  (sc_lv<8>) (tmp_99_fu_2861_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        zetas_address0 =  (sc_lv<8>) (tmp_87_fu_2656_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        zetas_address0 =  (sc_lv<8>) (tmp_58_fu_2634_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        zetas_address0 =  (sc_lv<8>) (tmp_33_fu_2612_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        zetas_address0 =  (sc_lv<8>) (tmp_7_fu_2590_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        zetas_address0 =  (sc_lv<8>) (ap_const_lv64_F);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        zetas_address0 =  (sc_lv<8>) (ap_const_lv64_D);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        zetas_address0 =  (sc_lv<8>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        zetas_address0 =  (sc_lv<8>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        zetas_address0 =  (sc_lv<8>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        zetas_address0 =  (sc_lv<8>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        zetas_address0 =  (sc_lv<8>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        zetas_address0 =  (sc_lv<8>) (ap_const_lv64_1);
    } else {
        zetas_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ntt::thread_zetas_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read())) {
        zetas_address1 =  (sc_lv<8>) (tmp_254_fu_3458_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read())) {
        zetas_address1 =  (sc_lv<8>) (tmp_250_fu_3436_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read())) {
        zetas_address1 =  (sc_lv<8>) (tmp_246_fu_3414_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        zetas_address1 =  (sc_lv<8>) (tmp_242_fu_3392_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        zetas_address1 =  (sc_lv<8>) (tmp_185_fu_3187_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        zetas_address1 =  (sc_lv<8>) (tmp_181_fu_3165_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
        zetas_address1 =  (sc_lv<8>) (tmp_177_fu_3143_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        zetas_address1 =  (sc_lv<8>) (tmp_130_fu_3121_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        zetas_address1 =  (sc_lv<8>) (tmp_117_fu_2916_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        zetas_address1 =  (sc_lv<8>) (tmp_113_fu_2894_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        zetas_address1 =  (sc_lv<8>) (tmp_109_fu_2872_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        zetas_address1 =  (sc_lv<8>) (tmp_97_fu_2850_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        zetas_address1 =  (sc_lv<8>) (tmp_64_fu_2645_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        zetas_address1 =  (sc_lv<8>) (tmp_56_fu_2623_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        zetas_address1 =  (sc_lv<8>) (tmp_9_fu_2601_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        zetas_address1 =  (sc_lv<8>) (tmp_s_fu_2579_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        zetas_address1 =  (sc_lv<8>) (ap_const_lv64_E);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        zetas_address1 =  (sc_lv<8>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        zetas_address1 =  (sc_lv<8>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        zetas_address1 =  (sc_lv<8>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        zetas_address1 =  (sc_lv<8>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        zetas_address1 =  (sc_lv<8>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        zetas_address1 =  (sc_lv<8>) (ap_const_lv64_3);
    } else {
        zetas_address1 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ntt::thread_zetas_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         (esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()))) {
        zetas_ce0 = ap_const_logic_1;
    } else {
        zetas_ce0 = ap_const_logic_0;
    }
}

void ntt::thread_zetas_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state84.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state85.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()))) {
        zetas_ce1 = ap_const_logic_1;
    } else {
        zetas_ce1 = ap_const_logic_0;
    }
}

}

