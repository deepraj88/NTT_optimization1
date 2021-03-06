-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity ntt is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    p_address0 : OUT STD_LOGIC_VECTOR (7 downto 0);
    p_ce0 : OUT STD_LOGIC;
    p_we0 : OUT STD_LOGIC;
    p_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    p_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    p_address1 : OUT STD_LOGIC_VECTOR (7 downto 0);
    p_ce1 : OUT STD_LOGIC;
    p_q1 : IN STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of ntt is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "ntt,hls_ip_2018_3,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7a200tfbg676-2,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=7.724000,HLS_SYN_LAT=-1,HLS_SYN_TPT=none,HLS_SYN_MEM=1,HLS_SYN_DSP=8,HLS_SYN_FF=518,HLS_SYN_LUT=677,HLS_VERSION=2018_3}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (13 downto 0) := "00000000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (13 downto 0) := "00000000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (13 downto 0) := "00000000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (13 downto 0) := "00000000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (13 downto 0) := "00000000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (13 downto 0) := "00000000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (13 downto 0) := "00000001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (13 downto 0) := "00000010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (13 downto 0) := "00000100000000";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (13 downto 0) := "00001000000000";
    constant ap_ST_fsm_state11 : STD_LOGIC_VECTOR (13 downto 0) := "00010000000000";
    constant ap_ST_fsm_state12 : STD_LOGIC_VECTOR (13 downto 0) := "00100000000000";
    constant ap_ST_fsm_state13 : STD_LOGIC_VECTOR (13 downto 0) := "01000000000000";
    constant ap_ST_fsm_state14 : STD_LOGIC_VECTOR (13 downto 0) := "10000000000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv32_C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001100";
    constant ap_const_lv32_D : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001101";
    constant ap_const_lv29_80 : STD_LOGIC_VECTOR (28 downto 0) := "00000000000000000000010000000";
    constant ap_const_lv31_0 : STD_LOGIC_VECTOR (30 downto 0) := "0000000000000000000000000000000";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv32_B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001011";
    constant ap_const_lv29_0 : STD_LOGIC_VECTOR (28 downto 0) := "00000000000000000000000000000";
    constant ap_const_lv32_1E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011110";
    constant ap_const_lv23_0 : STD_LOGIC_VECTOR (22 downto 0) := "00000000000000000000000";
    constant ap_const_lv32_1C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011100";
    constant ap_const_lv32_FC7FDFFF : STD_LOGIC_VECTOR (31 downto 0) := "11111100011111111101111111111111";
    constant ap_const_lv55_7FE001 : STD_LOGIC_VECTOR (54 downto 0) := "0000000000000000000000000000000011111111110000000000001";
    constant ap_const_lv32_20 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100000";
    constant ap_const_lv32_37 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000110111";
    constant ap_const_lv24_FFC002 : STD_LOGIC_VECTOR (23 downto 0) := "111111111100000000000010";
    constant ap_const_lv31_1 : STD_LOGIC_VECTOR (30 downto 0) := "0000000000000000000000000000001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (13 downto 0) := "00000000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal zetas_address0 : STD_LOGIC_VECTOR (7 downto 0);
    signal zetas_ce0 : STD_LOGIC;
    signal zetas_q0 : STD_LOGIC_VECTOR (22 downto 0);
    signal len_cast_cast4_fu_156_p1 : STD_LOGIC_VECTOR (30 downto 0);
    signal len_cast_cast4_reg_355 : STD_LOGIC_VECTOR (30 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal tmp_fu_150_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal icmp_fu_170_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal len_1_fu_194_p1 : STD_LOGIC_VECTOR (28 downto 0);
    signal k_1_fu_198_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal k_1_reg_380 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal tmp_4_fu_203_p2 : STD_LOGIC_VECTOR (30 downto 0);
    signal tmp_4_reg_385 : STD_LOGIC_VECTOR (30 downto 0);
    signal start_cast_fu_230_p1 : STD_LOGIC_VECTOR (30 downto 0);
    signal start_cast_reg_390 : STD_LOGIC_VECTOR (30 downto 0);
    signal tmp_6_cast_fu_234_p1 : STD_LOGIC_VECTOR (54 downto 0);
    signal tmp_6_cast_reg_395 : STD_LOGIC_VECTOR (54 downto 0);
    signal p_addr_reg_403 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal tmp_8_fu_238_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_addr_1_reg_408 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_load_reg_414 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal p_load_1_reg_419 : STD_LOGIC_VECTOR (31 downto 0);
    signal temp_1_fu_261_p2 : STD_LOGIC_VECTOR (54 downto 0);
    signal temp_1_reg_424 : STD_LOGIC_VECTOR (54 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal tmp_19_fu_266_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_19_reg_429 : STD_LOGIC_VECTOR (31 downto 0);
    signal temp_fu_270_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal temp_reg_434 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal t_1_fu_278_p2 : STD_LOGIC_VECTOR (54 downto 0);
    signal t_1_reg_439 : STD_LOGIC_VECTOR (54 downto 0);
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal tmp_15_reg_444 : STD_LOGIC_VECTOR (23 downto 0);
    signal ap_CS_fsm_state10 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state10 : signal is "none";
    signal j_1_fu_331_p2 : STD_LOGIC_VECTOR (30 downto 0);
    signal ap_CS_fsm_state13 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state13 : signal is "none";
    signal tmp_13_fu_337_p2 : STD_LOGIC_VECTOR (30 downto 0);
    signal ap_CS_fsm_state14 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state14 : signal is "none";
    signal len_reg_110 : STD_LOGIC_VECTOR (28 downto 0);
    signal j_reg_122 : STD_LOGIC_VECTOR (30 downto 0);
    signal j1_reg_134 : STD_LOGIC_VECTOR (30 downto 0);
    signal tmp_3_fu_179_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_s_fu_248_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_7_fu_253_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal k_fu_68 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state11 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state11 : signal is "none";
    signal tmp_11_fu_315_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state12 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state12 : signal is "none";
    signal tmp_12_fu_324_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_1_fu_160_p4 : STD_LOGIC_VECTOR (22 downto 0);
    signal tmp_18_fu_184_p4 : STD_LOGIC_VECTOR (27 downto 0);
    signal tmp_5_fu_208_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_14_fu_214_p1 : STD_LOGIC_VECTOR (29 downto 0);
    signal tmp_16_fu_218_p1 : STD_LOGIC_VECTOR (29 downto 0);
    signal start_fu_222_p3 : STD_LOGIC_VECTOR (29 downto 0);
    signal tmp_9_fu_243_p2 : STD_LOGIC_VECTOR (30 downto 0);
    signal temp_1_fu_261_p0 : STD_LOGIC_VECTOR (31 downto 0);
    signal temp_1_fu_261_p1 : STD_LOGIC_VECTOR (22 downto 0);
    signal t_1_fu_278_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal t_1_cast_fu_287_p1 : STD_LOGIC_VECTOR (55 downto 0);
    signal a_assign_cast1_fu_284_p1 : STD_LOGIC_VECTOR (55 downto 0);
    signal t_2_fu_290_p2 : STD_LOGIC_VECTOR (55 downto 0);
    signal tmp_10_fu_306_p2 : STD_LOGIC_VECTOR (23 downto 0);
    signal tmp_11_cast_fu_311_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal t_3_fu_321_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (13 downto 0);
    signal t_1_fu_278_p10 : STD_LOGIC_VECTOR (54 downto 0);
    signal temp_1_fu_261_p00 : STD_LOGIC_VECTOR (54 downto 0);

    component ntt_zetas IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (7 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (22 downto 0) );
    end component;



begin
    zetas_U : component ntt_zetas
    generic map (
        DataWidth => 23,
        AddressRange => 256,
        AddressWidth => 8)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => zetas_address0,
        ce0 => zetas_ce0,
        q0 => zetas_q0);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    j1_reg_134_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state13)) then 
                j1_reg_134 <= j_1_fu_331_p2;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
                j1_reg_134 <= j_reg_122;
            end if; 
        end if;
    end process;

    j_reg_122_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state14)) then 
                j_reg_122 <= tmp_13_fu_337_p2;
            elsif (((tmp_fu_150_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                j_reg_122 <= ap_const_lv31_0;
            end if; 
        end if;
    end process;

    k_fu_68_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state14)) then 
                k_fu_68 <= k_1_reg_380;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                k_fu_68 <= ap_const_lv32_1;
            end if; 
        end if;
    end process;

    len_reg_110_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_fu_170_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                                len_reg_110(7 downto 0) <= len_1_fu_194_p1(7 downto 0);
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                len_reg_110(0) <= '0';
                len_reg_110(1) <= '0';
                len_reg_110(2) <= '0';
                len_reg_110(3) <= '0';
                len_reg_110(4) <= '0';
                len_reg_110(5) <= '0';
                len_reg_110(6) <= '0';
                len_reg_110(7) <= '1';
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                k_1_reg_380 <= k_1_fu_198_p2;
                    start_cast_reg_390(29 downto 0) <= start_cast_fu_230_p1(29 downto 0);
                tmp_4_reg_385 <= tmp_4_fu_203_p2;
                    tmp_6_cast_reg_395(22 downto 0) <= tmp_6_cast_fu_234_p1(22 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_fu_150_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    len_cast_cast4_reg_355(7 downto 0) <= len_cast_cast4_fu_156_p1(7 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_8_fu_238_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then
                p_addr_1_reg_408 <= tmp_7_fu_253_p1(8 - 1 downto 0);
                p_addr_reg_403 <= tmp_s_fu_248_p1(8 - 1 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then
                p_load_1_reg_419 <= p_q1;
                p_load_reg_414 <= p_q0;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state9)) then
                t_1_reg_439 <= t_1_fu_278_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state7)) then
                temp_1_reg_424 <= temp_1_fu_261_p2;
                tmp_19_reg_429 <= tmp_19_fu_266_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then
                temp_reg_434 <= temp_fu_270_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state10)) then
                tmp_15_reg_444 <= t_2_fu_290_p2(55 downto 32);
            end if;
        end if;
    end process;
    len_cast_cast4_reg_355(30 downto 8) <= "00000000000000000000000";
    start_cast_reg_390(30) <= '0';
    tmp_6_cast_reg_395(54 downto 23) <= "00000000000000000000000000000000";
    len_reg_110(28 downto 8) <= "000000000000000000000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, tmp_fu_150_p2, ap_CS_fsm_state3, icmp_fu_170_p2, ap_CS_fsm_state5, tmp_8_fu_238_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((tmp_fu_150_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((icmp_fu_170_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                if (((tmp_8_fu_238_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then
                    ap_NS_fsm <= ap_ST_fsm_state6;
                else
                    ap_NS_fsm <= ap_ST_fsm_state14;
                end if;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state9;
            when ap_ST_fsm_state9 => 
                ap_NS_fsm <= ap_ST_fsm_state10;
            when ap_ST_fsm_state10 => 
                ap_NS_fsm <= ap_ST_fsm_state11;
            when ap_ST_fsm_state11 => 
                ap_NS_fsm <= ap_ST_fsm_state12;
            when ap_ST_fsm_state12 => 
                ap_NS_fsm <= ap_ST_fsm_state13;
            when ap_ST_fsm_state13 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state14 => 
                ap_NS_fsm <= ap_ST_fsm_state3;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXXXXXX";
        end case;
    end process;
    a_assign_cast1_fu_284_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(temp_1_reg_424),56));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state10 <= ap_CS_fsm(9);
    ap_CS_fsm_state11 <= ap_CS_fsm(10);
    ap_CS_fsm_state12 <= ap_CS_fsm(11);
    ap_CS_fsm_state13 <= ap_CS_fsm(12);
    ap_CS_fsm_state14 <= ap_CS_fsm(13);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);
    ap_CS_fsm_state9 <= ap_CS_fsm(8);

    ap_done_assign_proc : process(ap_CS_fsm_state2, tmp_fu_150_p2)
    begin
        if (((tmp_fu_150_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state2, tmp_fu_150_p2)
    begin
        if (((tmp_fu_150_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    icmp_fu_170_p2 <= "1" when (tmp_1_fu_160_p4 = ap_const_lv23_0) else "0";
    j_1_fu_331_p2 <= std_logic_vector(unsigned(ap_const_lv31_1) + unsigned(j1_reg_134));
    k_1_fu_198_p2 <= std_logic_vector(unsigned(ap_const_lv32_1) + unsigned(k_fu_68));
    len_1_fu_194_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_18_fu_184_p4),29));
    len_cast_cast4_fu_156_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(len_reg_110),31));

    p_address0_assign_proc : process(p_addr_reg_403, ap_CS_fsm_state5, p_addr_1_reg_408, ap_CS_fsm_state13, tmp_s_fu_248_p1, ap_CS_fsm_state11)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state13)) then 
            p_address0 <= p_addr_1_reg_408;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state11)) then 
            p_address0 <= p_addr_reg_403;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            p_address0 <= tmp_s_fu_248_p1(8 - 1 downto 0);
        else 
            p_address0 <= "XXXXXXXX";
        end if; 
    end process;


    p_address1_assign_proc : process(ap_CS_fsm_state5, p_addr_1_reg_408, tmp_7_fu_253_p1, ap_CS_fsm_state12)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state12)) then 
            p_address1 <= p_addr_1_reg_408;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            p_address1 <= tmp_7_fu_253_p1(8 - 1 downto 0);
        else 
            p_address1 <= "XXXXXXXX";
        end if; 
    end process;


    p_ce0_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state13, ap_CS_fsm_state11)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state11) or (ap_const_logic_1 = ap_CS_fsm_state13))) then 
            p_ce0 <= ap_const_logic_1;
        else 
            p_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    p_ce1_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state12)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state12))) then 
            p_ce1 <= ap_const_logic_1;
        else 
            p_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    p_d0_assign_proc : process(ap_CS_fsm_state13, ap_CS_fsm_state11, tmp_11_fu_315_p2, tmp_12_fu_324_p2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state13)) then 
            p_d0 <= tmp_12_fu_324_p2;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state11)) then 
            p_d0 <= tmp_11_fu_315_p2;
        else 
            p_d0 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;


    p_we0_assign_proc : process(ap_CS_fsm_state13, ap_CS_fsm_state11)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state11) or (ap_const_logic_1 = ap_CS_fsm_state13))) then 
            p_we0 <= ap_const_logic_1;
        else 
            p_we0 <= ap_const_logic_0;
        end if; 
    end process;

    start_cast_fu_230_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(start_fu_222_p3),31));
    start_fu_222_p3 <= 
        tmp_14_fu_214_p1 when (tmp_5_fu_208_p2(0) = '1') else 
        tmp_16_fu_218_p1;
    t_1_cast_fu_287_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(t_1_reg_439),56));
    t_1_fu_278_p1 <= t_1_fu_278_p10(32 - 1 downto 0);
    t_1_fu_278_p10 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(temp_reg_434),55));
    t_1_fu_278_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ap_const_lv55_7FE001) * unsigned(t_1_fu_278_p1), 55));
    t_2_fu_290_p2 <= std_logic_vector(unsigned(t_1_cast_fu_287_p1) + unsigned(a_assign_cast1_fu_284_p1));
    t_3_fu_321_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_15_reg_444),32));
    temp_1_fu_261_p0 <= temp_1_fu_261_p00(32 - 1 downto 0);
    temp_1_fu_261_p00 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_load_reg_414),55));
    temp_1_fu_261_p1 <= tmp_6_cast_reg_395(23 - 1 downto 0);
    temp_1_fu_261_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(temp_1_fu_261_p0) * unsigned(temp_1_fu_261_p1), 55));
    temp_fu_270_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(std_logic_vector(signed(ap_const_lv32_FC7FDFFF) * signed(tmp_19_reg_429))), 32));
    tmp_10_fu_306_p2 <= std_logic_vector(signed(ap_const_lv24_FFC002) - signed(tmp_15_reg_444));
    tmp_11_cast_fu_311_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_10_fu_306_p2),32));
    tmp_11_fu_315_p2 <= std_logic_vector(unsigned(p_load_1_reg_419) + unsigned(tmp_11_cast_fu_311_p1));
    tmp_12_fu_324_p2 <= std_logic_vector(unsigned(p_q1) + unsigned(t_3_fu_321_p1));
    tmp_13_fu_337_p2 <= std_logic_vector(unsigned(len_cast_cast4_reg_355) + unsigned(start_cast_reg_390));
    tmp_14_fu_214_p1 <= j_reg_122(30 - 1 downto 0);
    tmp_16_fu_218_p1 <= tmp_4_fu_203_p2(30 - 1 downto 0);
    tmp_18_fu_184_p4 <= len_reg_110(28 downto 1);
    tmp_19_fu_266_p1 <= temp_1_fu_261_p2(32 - 1 downto 0);
    tmp_1_fu_160_p4 <= j_reg_122(30 downto 8);
    tmp_3_fu_179_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(k_fu_68),64));
    tmp_4_fu_203_p2 <= std_logic_vector(unsigned(len_cast_cast4_reg_355) + unsigned(j_reg_122));
    tmp_5_fu_208_p2 <= "1" when (unsigned(j_reg_122) > unsigned(tmp_4_fu_203_p2)) else "0";
    tmp_6_cast_fu_234_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(zetas_q0),55));
    tmp_7_fu_253_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j1_reg_134),64));
    tmp_8_fu_238_p2 <= "1" when (unsigned(j1_reg_134) < unsigned(tmp_4_reg_385)) else "0";
    tmp_9_fu_243_p2 <= std_logic_vector(unsigned(j1_reg_134) + unsigned(len_cast_cast4_reg_355));
    tmp_fu_150_p2 <= "1" when (len_reg_110 = ap_const_lv29_0) else "0";
    tmp_s_fu_248_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_9_fu_243_p2),64));
    zetas_address0 <= tmp_3_fu_179_p1(8 - 1 downto 0);

    zetas_ce0_assign_proc : process(ap_CS_fsm_state3)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            zetas_ce0 <= ap_const_logic_1;
        else 
            zetas_ce0 <= ap_const_logic_0;
        end if; 
    end process;

end behav;
