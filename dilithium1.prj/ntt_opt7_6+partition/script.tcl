############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project dilithium1.prj
set_top ntt
add_files aes.c
add_files fips202.c
add_files ntt.c
add_files packing.c
add_files poly.c
add_files polyvec.c
add_files reduce.c
add_files rng.c
add_files rounding.c
add_files sign.c
add_files -tb newtest_sign.c -cflags "-Wno-unknown-pragmas"
open_solution "ntt_opt7_6+partition"
set_part {xc7a200tfbg676-2}
create_clock -period 10 -name default
source "./dilithium1.prj/ntt_opt7_6+partition/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
