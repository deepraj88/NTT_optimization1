# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2 \
    name q0 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename q0 \
    op interface \
    ports { q0_address0 { O 5 vector } q0_ce0 { O 1 bit } q0_we0 { O 1 bit } q0_d0 { O 32 vector } q0_q0 { I 32 vector } q0_address1 { O 5 vector } q0_ce1 { O 1 bit } q0_we1 { O 1 bit } q0_d1 { O 32 vector } q0_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'q0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3 \
    name q1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename q1 \
    op interface \
    ports { q1_address0 { O 5 vector } q1_ce0 { O 1 bit } q1_we0 { O 1 bit } q1_d0 { O 32 vector } q1_q0 { I 32 vector } q1_address1 { O 5 vector } q1_ce1 { O 1 bit } q1_we1 { O 1 bit } q1_d1 { O 32 vector } q1_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'q1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 4 \
    name q2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename q2 \
    op interface \
    ports { q2_address0 { O 5 vector } q2_ce0 { O 1 bit } q2_we0 { O 1 bit } q2_d0 { O 32 vector } q2_q0 { I 32 vector } q2_address1 { O 5 vector } q2_ce1 { O 1 bit } q2_we1 { O 1 bit } q2_d1 { O 32 vector } q2_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'q2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 5 \
    name q3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename q3 \
    op interface \
    ports { q3_address0 { O 5 vector } q3_ce0 { O 1 bit } q3_we0 { O 1 bit } q3_d0 { O 32 vector } q3_q0 { I 32 vector } q3_address1 { O 5 vector } q3_ce1 { O 1 bit } q3_we1 { O 1 bit } q3_d1 { O 32 vector } q3_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'q3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 6 \
    name q4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename q4 \
    op interface \
    ports { q4_address0 { O 5 vector } q4_ce0 { O 1 bit } q4_we0 { O 1 bit } q4_d0 { O 32 vector } q4_q0 { I 32 vector } q4_address1 { O 5 vector } q4_ce1 { O 1 bit } q4_we1 { O 1 bit } q4_d1 { O 32 vector } q4_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'q4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 7 \
    name q5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename q5 \
    op interface \
    ports { q5_address0 { O 5 vector } q5_ce0 { O 1 bit } q5_we0 { O 1 bit } q5_d0 { O 32 vector } q5_q0 { I 32 vector } q5_address1 { O 5 vector } q5_ce1 { O 1 bit } q5_we1 { O 1 bit } q5_d1 { O 32 vector } q5_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'q5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 8 \
    name q6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename q6 \
    op interface \
    ports { q6_address0 { O 5 vector } q6_ce0 { O 1 bit } q6_we0 { O 1 bit } q6_d0 { O 32 vector } q6_q0 { I 32 vector } q6_address1 { O 5 vector } q6_ce1 { O 1 bit } q6_we1 { O 1 bit } q6_d1 { O 32 vector } q6_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'q6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 9 \
    name q7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename q7 \
    op interface \
    ports { q7_address0 { O 5 vector } q7_ce0 { O 1 bit } q7_we0 { O 1 bit } q7_d0 { O 32 vector } q7_q0 { I 32 vector } q7_address1 { O 5 vector } q7_ce1 { O 1 bit } q7_we1 { O 1 bit } q7_d1 { O 32 vector } q7_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'q7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 10 \
    name zetas \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename zetas \
    op interface \
    ports { zetas_address0 { O 8 vector } zetas_ce0 { O 1 bit } zetas_q0 { I 32 vector } zetas_address1 { O 8 vector } zetas_ce1 { O 1 bit } zetas_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'zetas'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


