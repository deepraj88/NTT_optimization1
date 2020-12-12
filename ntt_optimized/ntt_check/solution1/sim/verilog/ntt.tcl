
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set cinoutgroup [add_wave_group "C InOuts" -into $designtopgroup]
set q7_group [add_wave_group q7(memory) -into $cinoutgroup]
add_wave /apatb_ntt_top/AESL_inst_ntt/q7_q1 -into $q7_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q7_d1 -into $q7_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q7_we1 -into $q7_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q7_ce1 -into $q7_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q7_address1 -into $q7_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q7_q0 -into $q7_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q7_d0 -into $q7_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q7_we0 -into $q7_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q7_ce0 -into $q7_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q7_address0 -into $q7_group -radix hex
set q6_group [add_wave_group q6(memory) -into $cinoutgroup]
add_wave /apatb_ntt_top/AESL_inst_ntt/q6_q1 -into $q6_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q6_d1 -into $q6_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q6_we1 -into $q6_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q6_ce1 -into $q6_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q6_address1 -into $q6_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q6_q0 -into $q6_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q6_d0 -into $q6_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q6_we0 -into $q6_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q6_ce0 -into $q6_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q6_address0 -into $q6_group -radix hex
set q5_group [add_wave_group q5(memory) -into $cinoutgroup]
add_wave /apatb_ntt_top/AESL_inst_ntt/q5_q1 -into $q5_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q5_d1 -into $q5_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q5_we1 -into $q5_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q5_ce1 -into $q5_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q5_address1 -into $q5_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q5_q0 -into $q5_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q5_d0 -into $q5_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q5_we0 -into $q5_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q5_ce0 -into $q5_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q5_address0 -into $q5_group -radix hex
set q4_group [add_wave_group q4(memory) -into $cinoutgroup]
add_wave /apatb_ntt_top/AESL_inst_ntt/q4_q1 -into $q4_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q4_d1 -into $q4_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q4_we1 -into $q4_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q4_ce1 -into $q4_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q4_address1 -into $q4_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q4_q0 -into $q4_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q4_d0 -into $q4_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q4_we0 -into $q4_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q4_ce0 -into $q4_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q4_address0 -into $q4_group -radix hex
set q3_group [add_wave_group q3(memory) -into $cinoutgroup]
add_wave /apatb_ntt_top/AESL_inst_ntt/q3_q1 -into $q3_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q3_d1 -into $q3_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q3_we1 -into $q3_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q3_ce1 -into $q3_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q3_address1 -into $q3_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q3_q0 -into $q3_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q3_d0 -into $q3_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q3_we0 -into $q3_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q3_ce0 -into $q3_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q3_address0 -into $q3_group -radix hex
set q2_group [add_wave_group q2(memory) -into $cinoutgroup]
add_wave /apatb_ntt_top/AESL_inst_ntt/q2_q1 -into $q2_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q2_d1 -into $q2_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q2_we1 -into $q2_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q2_ce1 -into $q2_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q2_address1 -into $q2_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q2_q0 -into $q2_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q2_d0 -into $q2_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q2_we0 -into $q2_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q2_ce0 -into $q2_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q2_address0 -into $q2_group -radix hex
set q1_group [add_wave_group q1(memory) -into $cinoutgroup]
add_wave /apatb_ntt_top/AESL_inst_ntt/q1_q1 -into $q1_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q1_d1 -into $q1_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q1_we1 -into $q1_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q1_ce1 -into $q1_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q1_address1 -into $q1_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q1_q0 -into $q1_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q1_d0 -into $q1_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q1_we0 -into $q1_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q1_ce0 -into $q1_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q1_address0 -into $q1_group -radix hex
set q0_group [add_wave_group q0(memory) -into $cinoutgroup]
add_wave /apatb_ntt_top/AESL_inst_ntt/q0_q1 -into $q0_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q0_d1 -into $q0_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q0_we1 -into $q0_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q0_ce1 -into $q0_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q0_address1 -into $q0_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q0_q0 -into $q0_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q0_d0 -into $q0_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q0_we0 -into $q0_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q0_ce0 -into $q0_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/q0_address0 -into $q0_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set zetas_group [add_wave_group zetas(memory) -into $cinputgroup]
add_wave /apatb_ntt_top/AESL_inst_ntt/zetas_q1 -into $zetas_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/zetas_ce1 -into $zetas_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/zetas_address1 -into $zetas_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/zetas_q0 -into $zetas_group -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/zetas_ce0 -into $zetas_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/AESL_inst_ntt/zetas_address0 -into $zetas_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_ntt_top/AESL_inst_ntt/ap_start -into $blocksiggroup
add_wave /apatb_ntt_top/AESL_inst_ntt/ap_done -into $blocksiggroup
add_wave /apatb_ntt_top/AESL_inst_ntt/ap_idle -into $blocksiggroup
add_wave /apatb_ntt_top/AESL_inst_ntt/ap_ready -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_ntt_top/AESL_inst_ntt/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_ntt_top/AESL_inst_ntt/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_ntt_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_ntt_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_ntt_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_ntt_top/LENGTH_q0 -into $tb_portdepth_group -radix hex
add_wave /apatb_ntt_top/LENGTH_q1 -into $tb_portdepth_group -radix hex
add_wave /apatb_ntt_top/LENGTH_q2 -into $tb_portdepth_group -radix hex
add_wave /apatb_ntt_top/LENGTH_q3 -into $tb_portdepth_group -radix hex
add_wave /apatb_ntt_top/LENGTH_q4 -into $tb_portdepth_group -radix hex
add_wave /apatb_ntt_top/LENGTH_q5 -into $tb_portdepth_group -radix hex
add_wave /apatb_ntt_top/LENGTH_q6 -into $tb_portdepth_group -radix hex
add_wave /apatb_ntt_top/LENGTH_q7 -into $tb_portdepth_group -radix hex
add_wave /apatb_ntt_top/LENGTH_zetas -into $tb_portdepth_group -radix hex
set tbcinoutgroup [add_wave_group "C InOuts" -into $testbenchgroup]
set tb_q7_group [add_wave_group q7(memory) -into $tbcinoutgroup]
add_wave /apatb_ntt_top/q7_q1 -into $tb_q7_group -radix hex
add_wave /apatb_ntt_top/q7_d1 -into $tb_q7_group -radix hex
add_wave /apatb_ntt_top/q7_we1 -into $tb_q7_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q7_ce1 -into $tb_q7_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q7_address1 -into $tb_q7_group -radix hex
add_wave /apatb_ntt_top/q7_q0 -into $tb_q7_group -radix hex
add_wave /apatb_ntt_top/q7_d0 -into $tb_q7_group -radix hex
add_wave /apatb_ntt_top/q7_we0 -into $tb_q7_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q7_ce0 -into $tb_q7_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q7_address0 -into $tb_q7_group -radix hex
set tb_q6_group [add_wave_group q6(memory) -into $tbcinoutgroup]
add_wave /apatb_ntt_top/q6_q1 -into $tb_q6_group -radix hex
add_wave /apatb_ntt_top/q6_d1 -into $tb_q6_group -radix hex
add_wave /apatb_ntt_top/q6_we1 -into $tb_q6_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q6_ce1 -into $tb_q6_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q6_address1 -into $tb_q6_group -radix hex
add_wave /apatb_ntt_top/q6_q0 -into $tb_q6_group -radix hex
add_wave /apatb_ntt_top/q6_d0 -into $tb_q6_group -radix hex
add_wave /apatb_ntt_top/q6_we0 -into $tb_q6_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q6_ce0 -into $tb_q6_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q6_address0 -into $tb_q6_group -radix hex
set tb_q5_group [add_wave_group q5(memory) -into $tbcinoutgroup]
add_wave /apatb_ntt_top/q5_q1 -into $tb_q5_group -radix hex
add_wave /apatb_ntt_top/q5_d1 -into $tb_q5_group -radix hex
add_wave /apatb_ntt_top/q5_we1 -into $tb_q5_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q5_ce1 -into $tb_q5_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q5_address1 -into $tb_q5_group -radix hex
add_wave /apatb_ntt_top/q5_q0 -into $tb_q5_group -radix hex
add_wave /apatb_ntt_top/q5_d0 -into $tb_q5_group -radix hex
add_wave /apatb_ntt_top/q5_we0 -into $tb_q5_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q5_ce0 -into $tb_q5_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q5_address0 -into $tb_q5_group -radix hex
set tb_q4_group [add_wave_group q4(memory) -into $tbcinoutgroup]
add_wave /apatb_ntt_top/q4_q1 -into $tb_q4_group -radix hex
add_wave /apatb_ntt_top/q4_d1 -into $tb_q4_group -radix hex
add_wave /apatb_ntt_top/q4_we1 -into $tb_q4_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q4_ce1 -into $tb_q4_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q4_address1 -into $tb_q4_group -radix hex
add_wave /apatb_ntt_top/q4_q0 -into $tb_q4_group -radix hex
add_wave /apatb_ntt_top/q4_d0 -into $tb_q4_group -radix hex
add_wave /apatb_ntt_top/q4_we0 -into $tb_q4_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q4_ce0 -into $tb_q4_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q4_address0 -into $tb_q4_group -radix hex
set tb_q3_group [add_wave_group q3(memory) -into $tbcinoutgroup]
add_wave /apatb_ntt_top/q3_q1 -into $tb_q3_group -radix hex
add_wave /apatb_ntt_top/q3_d1 -into $tb_q3_group -radix hex
add_wave /apatb_ntt_top/q3_we1 -into $tb_q3_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q3_ce1 -into $tb_q3_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q3_address1 -into $tb_q3_group -radix hex
add_wave /apatb_ntt_top/q3_q0 -into $tb_q3_group -radix hex
add_wave /apatb_ntt_top/q3_d0 -into $tb_q3_group -radix hex
add_wave /apatb_ntt_top/q3_we0 -into $tb_q3_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q3_ce0 -into $tb_q3_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q3_address0 -into $tb_q3_group -radix hex
set tb_q2_group [add_wave_group q2(memory) -into $tbcinoutgroup]
add_wave /apatb_ntt_top/q2_q1 -into $tb_q2_group -radix hex
add_wave /apatb_ntt_top/q2_d1 -into $tb_q2_group -radix hex
add_wave /apatb_ntt_top/q2_we1 -into $tb_q2_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q2_ce1 -into $tb_q2_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q2_address1 -into $tb_q2_group -radix hex
add_wave /apatb_ntt_top/q2_q0 -into $tb_q2_group -radix hex
add_wave /apatb_ntt_top/q2_d0 -into $tb_q2_group -radix hex
add_wave /apatb_ntt_top/q2_we0 -into $tb_q2_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q2_ce0 -into $tb_q2_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q2_address0 -into $tb_q2_group -radix hex
set tb_q1_group [add_wave_group q1(memory) -into $tbcinoutgroup]
add_wave /apatb_ntt_top/q1_q1 -into $tb_q1_group -radix hex
add_wave /apatb_ntt_top/q1_d1 -into $tb_q1_group -radix hex
add_wave /apatb_ntt_top/q1_we1 -into $tb_q1_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q1_ce1 -into $tb_q1_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q1_address1 -into $tb_q1_group -radix hex
add_wave /apatb_ntt_top/q1_q0 -into $tb_q1_group -radix hex
add_wave /apatb_ntt_top/q1_d0 -into $tb_q1_group -radix hex
add_wave /apatb_ntt_top/q1_we0 -into $tb_q1_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q1_ce0 -into $tb_q1_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q1_address0 -into $tb_q1_group -radix hex
set tb_q0_group [add_wave_group q0(memory) -into $tbcinoutgroup]
add_wave /apatb_ntt_top/q0_q1 -into $tb_q0_group -radix hex
add_wave /apatb_ntt_top/q0_d1 -into $tb_q0_group -radix hex
add_wave /apatb_ntt_top/q0_we1 -into $tb_q0_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q0_ce1 -into $tb_q0_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q0_address1 -into $tb_q0_group -radix hex
add_wave /apatb_ntt_top/q0_q0 -into $tb_q0_group -radix hex
add_wave /apatb_ntt_top/q0_d0 -into $tb_q0_group -radix hex
add_wave /apatb_ntt_top/q0_we0 -into $tb_q0_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q0_ce0 -into $tb_q0_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/q0_address0 -into $tb_q0_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_zetas_group [add_wave_group zetas(memory) -into $tbcinputgroup]
add_wave /apatb_ntt_top/zetas_q1 -into $tb_zetas_group -radix hex
add_wave /apatb_ntt_top/zetas_ce1 -into $tb_zetas_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/zetas_address1 -into $tb_zetas_group -radix hex
add_wave /apatb_ntt_top/zetas_q0 -into $tb_zetas_group -radix hex
add_wave /apatb_ntt_top/zetas_ce0 -into $tb_zetas_group -color #ffff00 -radix hex
add_wave /apatb_ntt_top/zetas_address0 -into $tb_zetas_group -radix hex
save_wave_config ntt.wcfg
run all
quit

