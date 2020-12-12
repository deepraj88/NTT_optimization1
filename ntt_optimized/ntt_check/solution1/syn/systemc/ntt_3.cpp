#include "ntt.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

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
        mHdltvoutHandle << " , " <<  " \"q0_address0\" :  \"" << q0_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q0_ce0\" :  \"" << q0_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q0_we0\" :  \"" << q0_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q0_d0\" :  \"" << q0_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"q0_q0\" :  \"" << q0_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q0_address1\" :  \"" << q0_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q0_ce1\" :  \"" << q0_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q0_we1\" :  \"" << q0_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q0_d1\" :  \"" << q0_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"q0_q1\" :  \"" << q0_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q1_address0\" :  \"" << q1_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q1_ce0\" :  \"" << q1_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q1_we0\" :  \"" << q1_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q1_d0\" :  \"" << q1_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"q1_q0\" :  \"" << q1_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q1_address1\" :  \"" << q1_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q1_ce1\" :  \"" << q1_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q1_we1\" :  \"" << q1_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q1_d1\" :  \"" << q1_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"q1_q1\" :  \"" << q1_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q2_address0\" :  \"" << q2_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q2_ce0\" :  \"" << q2_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q2_we0\" :  \"" << q2_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q2_d0\" :  \"" << q2_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"q2_q0\" :  \"" << q2_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q2_address1\" :  \"" << q2_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q2_ce1\" :  \"" << q2_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q2_we1\" :  \"" << q2_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q2_d1\" :  \"" << q2_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"q2_q1\" :  \"" << q2_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q3_address0\" :  \"" << q3_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q3_ce0\" :  \"" << q3_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q3_we0\" :  \"" << q3_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q3_d0\" :  \"" << q3_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"q3_q0\" :  \"" << q3_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q3_address1\" :  \"" << q3_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q3_ce1\" :  \"" << q3_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q3_we1\" :  \"" << q3_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q3_d1\" :  \"" << q3_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"q3_q1\" :  \"" << q3_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q4_address0\" :  \"" << q4_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q4_ce0\" :  \"" << q4_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q4_we0\" :  \"" << q4_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q4_d0\" :  \"" << q4_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"q4_q0\" :  \"" << q4_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q4_address1\" :  \"" << q4_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q4_ce1\" :  \"" << q4_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q4_we1\" :  \"" << q4_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q4_d1\" :  \"" << q4_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"q4_q1\" :  \"" << q4_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q5_address0\" :  \"" << q5_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q5_ce0\" :  \"" << q5_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q5_we0\" :  \"" << q5_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q5_d0\" :  \"" << q5_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"q5_q0\" :  \"" << q5_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q5_address1\" :  \"" << q5_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q5_ce1\" :  \"" << q5_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q5_we1\" :  \"" << q5_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q5_d1\" :  \"" << q5_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"q5_q1\" :  \"" << q5_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q6_address0\" :  \"" << q6_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q6_ce0\" :  \"" << q6_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q6_we0\" :  \"" << q6_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q6_d0\" :  \"" << q6_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"q6_q0\" :  \"" << q6_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q6_address1\" :  \"" << q6_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q6_ce1\" :  \"" << q6_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q6_we1\" :  \"" << q6_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q6_d1\" :  \"" << q6_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"q6_q1\" :  \"" << q6_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q7_address0\" :  \"" << q7_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q7_ce0\" :  \"" << q7_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q7_we0\" :  \"" << q7_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q7_d0\" :  \"" << q7_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"q7_q0\" :  \"" << q7_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q7_address1\" :  \"" << q7_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q7_ce1\" :  \"" << q7_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q7_we1\" :  \"" << q7_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"q7_d1\" :  \"" << q7_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"q7_q1\" :  \"" << q7_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"zetas_address0\" :  \"" << zetas_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"zetas_ce0\" :  \"" << zetas_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"zetas_q0\" :  \"" << zetas_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"zetas_address1\" :  \"" << zetas_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"zetas_ce1\" :  \"" << zetas_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"zetas_q1\" :  \"" << zetas_q1.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

