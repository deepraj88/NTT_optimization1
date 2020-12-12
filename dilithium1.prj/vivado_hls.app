<project xmlns="com.autoesl.autopilot.project" name="dilithium1.prj" top="ntt">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow askAgain="false" name="csim" csimMode="2" lastCsimMode="0"/>
    </Simulation>
    <files xmlns="">
        <file name="../../newtest_sign.c" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="sign.c" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="rounding.c" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="rng.c" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="reduce.c" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="polyvec.c" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="poly.c" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="packing.c" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="ntt.c" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="fips202.c" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="aes.c" sc="0" tb="false" cflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="ntt_unoptimized" status="inactive"/>
        <solution name="ntt_opt1__outloop_unroll" status="inactive"/>
        <solution name="ntt_opt2__outloop_pipe" status="inactive"/>
        <solution name="ntt_opt3__inloop_unroll" status="inactive"/>
        <solution name="ntt_opt4__inloop_pipe" status="inactive"/>
        <solution name="ntt_opt5__microarch" status="inactive"/>
        <solution name="ntt_opt6_1+2+5" status="inactive"/>
        <solution name="ntt_opt7_6+partition" status="active"/>
    </solutions>
</project>

