#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/dss545/ntt_optimized/ntt_check/solution1/.autopilot/db/a.g.bc ${1+"$@"}
