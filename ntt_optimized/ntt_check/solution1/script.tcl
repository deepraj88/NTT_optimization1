############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project ntt_check
set_top ntt
add_files ntt.cpp
add_files -tb ntt_test.cpp -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7a200tfbg676-2} -tool vivado
create_clock -period 10 -name default
#source "./ntt_check/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all
export_design -format ip_catalog
