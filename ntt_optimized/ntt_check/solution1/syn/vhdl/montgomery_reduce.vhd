-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.2
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity montgomery_reduce is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    a : IN STD_LOGIC_VECTOR (63 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (31 downto 0);
    ap_ce : IN STD_LOGIC );
end;


architecture behav of montgomery_reduce is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv32_FC7FDFFF : STD_LOGIC_VECTOR (31 downto 0) := "11111100011111111101111111111111";
    constant ap_const_lv55_7FE001 : STD_LOGIC_VECTOR (54 downto 0) := "0000000000000000000000000000000011111111110000000000001";
    constant ap_const_lv32_20 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100000";
    constant ap_const_lv32_3F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000111111";

    signal a_read_reg_57 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_block_state1_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state2_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_state3_pp0_stage0_iter2 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal a_read_reg_57_pp0_iter1_reg : STD_LOGIC_VECTOR (63 downto 0);
    signal t_fu_24_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal t_reg_62 : STD_LOGIC_VECTOR (31 downto 0);
    signal t_1_fu_33_p2 : STD_LOGIC_VECTOR (54 downto 0);
    signal t_1_reg_67 : STD_LOGIC_VECTOR (54 downto 0);
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal tmp_403_fu_20_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal t_1_fu_33_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal t_2_cast_fu_39_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal t_2_fu_42_p2 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_ce_reg : STD_LOGIC;
    signal a_int_reg : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_return_int_reg : STD_LOGIC_VECTOR (31 downto 0);
    signal t_1_fu_33_p10 : STD_LOGIC_VECTOR (54 downto 0);


begin




    ap_ce_reg_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            ap_ce_reg <= ap_ce;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_ce)) then
                a_int_reg <= a;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_ce_reg) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                a_read_reg_57 <= a_int_reg;
                a_read_reg_57_pp0_iter1_reg <= a_read_reg_57;
                t_1_reg_67 <= t_1_fu_33_p2;
                t_reg_62 <= t_fu_24_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_ce_reg)) then
                ap_return_int_reg <= t_2_fu_42_p2(63 downto 32);
            end if;
        end if;
    end process;
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state1_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state2_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state3_pp0_stage0_iter2 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_return_assign_proc : process(t_2_fu_42_p2, ap_ce_reg, ap_return_int_reg)
    begin
        if ((ap_const_logic_0 = ap_ce_reg)) then 
            ap_return <= ap_return_int_reg;
        elsif ((ap_const_logic_1 = ap_ce_reg)) then 
            ap_return <= t_2_fu_42_p2(63 downto 32);
        end if; 
    end process;

    t_1_fu_33_p1 <= t_1_fu_33_p10(32 - 1 downto 0);
    t_1_fu_33_p10 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(t_reg_62),55));
    t_1_fu_33_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ap_const_lv55_7FE001) * unsigned(t_1_fu_33_p1), 55));
    t_2_cast_fu_39_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(t_1_reg_67),64));
    t_2_fu_42_p2 <= std_logic_vector(unsigned(a_read_reg_57_pp0_iter1_reg) + unsigned(t_2_cast_fu_39_p1));
    t_fu_24_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(std_logic_vector(signed(ap_const_lv32_FC7FDFFF) * signed(tmp_403_fu_20_p1))), 32));
    tmp_403_fu_20_p1 <= a_int_reg(32 - 1 downto 0);
end behav;
