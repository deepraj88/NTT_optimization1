#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/dss545/vivado_hls/SHARING/CRYSTALS-Dilithium/Dilithium/Reference_Implementation/crypto_sign/project19/dilithium1.prj/ntt_opt6_1+2+5/.autopilot/db/a.g.bc ${1+"$@"}
