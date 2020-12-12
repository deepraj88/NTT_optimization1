// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="ntt,hls_ip_2018_3,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7a200tfbg676-2,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=7.724000,HLS_SYN_LAT=-1,HLS_SYN_TPT=none,HLS_SYN_MEM=1,HLS_SYN_DSP=8,HLS_SYN_FF=516,HLS_SYN_LUT=659,HLS_VERSION=2018_3}" *)

module ntt (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        p_address0,
        p_ce0,
        p_we0,
        p_d0,
        p_q0
);

parameter    ap_ST_fsm_state1 = 13'd1;
parameter    ap_ST_fsm_state2 = 13'd2;
parameter    ap_ST_fsm_state3 = 13'd4;
parameter    ap_ST_fsm_state4 = 13'd8;
parameter    ap_ST_fsm_state5 = 13'd16;
parameter    ap_ST_fsm_state6 = 13'd32;
parameter    ap_ST_fsm_state7 = 13'd64;
parameter    ap_ST_fsm_state8 = 13'd128;
parameter    ap_ST_fsm_state9 = 13'd256;
parameter    ap_ST_fsm_state10 = 13'd512;
parameter    ap_ST_fsm_state11 = 13'd1024;
parameter    ap_ST_fsm_state12 = 13'd2048;
parameter    ap_ST_fsm_state13 = 13'd4096;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [7:0] p_address0;
output   p_ce0;
output   p_we0;
output  [31:0] p_d0;
input  [31:0] p_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[7:0] p_address0;
reg p_ce0;
reg p_we0;
reg[31:0] p_d0;

(* fsm_encoding = "none" *) reg   [12:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [7:0] zetas_address0;
reg    zetas_ce0;
wire   [22:0] zetas_q0;
wire   [30:0] len_cast_cast4_fu_136_p1;
reg   [30:0] len_cast_cast4_reg_339;
wire    ap_CS_fsm_state2;
wire    ap_CS_fsm_state3;
wire   [0:0] icmp_fu_156_p2;
wire   [28:0] len_1_fu_180_p1;
wire   [31:0] k_1_fu_184_p2;
reg   [31:0] k_1_reg_367;
wire    ap_CS_fsm_state4;
wire   [30:0] tmp_4_fu_189_p2;
reg   [30:0] tmp_4_reg_372;
wire   [30:0] start_cast_fu_216_p1;
reg   [30:0] start_cast_reg_377;
wire   [54:0] tmp_6_cast_fu_220_p1;
reg   [54:0] tmp_6_cast_reg_382;
reg   [7:0] p_addr_reg_390;
wire    ap_CS_fsm_state5;
wire   [0:0] tmp_8_fu_224_p2;
reg   [7:0] p_addr_1_reg_395;
wire   [30:0] j_1_fu_244_p2;
reg   [30:0] j_1_reg_400;
wire   [30:0] tmp_12_fu_250_p2;
reg   [31:0] p_load_reg_410;
wire    ap_CS_fsm_state6;
wire   [54:0] temp_1_fu_261_p2;
reg   [54:0] temp_1_reg_415;
wire    ap_CS_fsm_state7;
wire  signed [31:0] tmp_18_fu_266_p1;
reg  signed [31:0] tmp_18_reg_420;
wire   [31:0] temp_fu_270_p2;
reg   [31:0] temp_reg_425;
wire    ap_CS_fsm_state8;
wire   [54:0] t_1_fu_278_p2;
reg   [54:0] t_1_reg_430;
wire    ap_CS_fsm_state9;
reg   [23:0] tmp_14_reg_435;
wire    ap_CS_fsm_state10;
reg   [28:0] len_reg_97;
reg   [30:0] j_reg_109;
wire   [0:0] tmp_fu_140_p2;
reg   [30:0] j1_reg_121;
wire    ap_CS_fsm_state13;
wire   [63:0] tmp_3_fu_165_p1;
wire   [63:0] tmp_s_fu_234_p1;
wire   [63:0] tmp_6_fu_239_p1;
reg   [31:0] k_fu_60;
wire    ap_CS_fsm_state11;
wire   [31:0] tmp_10_fu_315_p2;
wire    ap_CS_fsm_state12;
wire   [31:0] tmp_11_fu_325_p2;
wire   [22:0] tmp_1_fu_146_p4;
wire   [27:0] tmp_17_fu_170_p4;
wire   [0:0] tmp_5_fu_194_p2;
wire   [29:0] tmp_13_fu_200_p1;
wire   [29:0] tmp_15_fu_204_p1;
wire   [29:0] start_fu_208_p3;
wire   [30:0] tmp_9_fu_229_p2;
wire   [31:0] temp_1_fu_261_p0;
wire   [22:0] temp_1_fu_261_p1;
wire   [31:0] t_1_fu_278_p1;
wire   [55:0] t_1_cast_fu_287_p1;
wire   [55:0] a_assign_cast1_fu_284_p1;
wire   [55:0] t_2_fu_290_p2;
wire   [23:0] tmp_7_fu_306_p2;
wire   [31:0] tmp_11_cast_fu_311_p1;
wire   [31:0] t_3_fu_322_p1;
reg   [12:0] ap_NS_fsm;
wire   [54:0] t_1_fu_278_p10;
wire   [54:0] temp_1_fu_261_p00;

// power-on initialization
initial begin
#0 ap_CS_fsm = 13'd1;
end

ntt_zetas #(
    .DataWidth( 23 ),
    .AddressRange( 256 ),
    .AddressWidth( 8 ))
zetas_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(zetas_address0),
    .ce0(zetas_ce0),
    .q0(zetas_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        j1_reg_121 <= j_1_reg_400;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        j1_reg_121 <= j_reg_109;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_8_fu_224_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        j_reg_109 <= tmp_12_fu_250_p2;
    end else if (((tmp_fu_140_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_reg_109 <= 31'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_8_fu_224_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        k_fu_60 <= k_1_reg_367;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        k_fu_60 <= 32'd1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_fu_156_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                len_reg_97[7 : 0] <= len_1_fu_180_p1[7 : 0];
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                len_reg_97[0] <= 1'b0;
        len_reg_97[1] <= 1'b0;
        len_reg_97[2] <= 1'b0;
        len_reg_97[3] <= 1'b0;
        len_reg_97[4] <= 1'b0;
        len_reg_97[5] <= 1'b0;
        len_reg_97[6] <= 1'b0;
        len_reg_97[7] <= 1'b1;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_8_fu_224_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
        j_1_reg_400 <= j_1_fu_244_p2;
        p_addr_1_reg_395 <= tmp_6_fu_239_p1;
        p_addr_reg_390 <= tmp_s_fu_234_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        k_1_reg_367 <= k_1_fu_184_p2;
        start_cast_reg_377[29 : 0] <= start_cast_fu_216_p1[29 : 0];
        tmp_4_reg_372 <= tmp_4_fu_189_p2;
        tmp_6_cast_reg_382[22 : 0] <= tmp_6_cast_fu_220_p1[22 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        len_cast_cast4_reg_339[7 : 0] <= len_cast_cast4_fu_136_p1[7 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        p_load_reg_410 <= p_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        t_1_reg_430 <= t_1_fu_278_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        temp_1_reg_415 <= temp_1_fu_261_p2;
        tmp_18_reg_420 <= tmp_18_fu_266_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        temp_reg_425 <= temp_fu_270_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        tmp_14_reg_435 <= {{t_2_fu_290_p2[55:32]}};
    end
end

always @ (*) begin
    if (((tmp_fu_140_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_fu_140_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        p_address0 = p_addr_reg_390;
    end else if (((1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state10))) begin
        p_address0 = p_addr_1_reg_395;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        p_address0 = tmp_s_fu_234_p1;
    end else begin
        p_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state10))) begin
        p_ce0 = 1'b1;
    end else begin
        p_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        p_d0 = tmp_11_fu_325_p2;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        p_d0 = tmp_10_fu_315_p2;
    end else begin
        p_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state13))) begin
        p_we0 = 1'b1;
    end else begin
        p_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        zetas_ce0 = 1'b1;
    end else begin
        zetas_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((tmp_fu_140_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((icmp_fu_156_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            if (((tmp_8_fu_224_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_assign_cast1_fu_284_p1 = temp_1_reg_415;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign icmp_fu_156_p2 = ((tmp_1_fu_146_p4 == 23'd0) ? 1'b1 : 1'b0);

assign j_1_fu_244_p2 = (31'd1 + j1_reg_121);

assign k_1_fu_184_p2 = (32'd1 + k_fu_60);

assign len_1_fu_180_p1 = tmp_17_fu_170_p4;

assign len_cast_cast4_fu_136_p1 = len_reg_97;

assign start_cast_fu_216_p1 = start_fu_208_p3;

assign start_fu_208_p3 = ((tmp_5_fu_194_p2[0:0] === 1'b1) ? tmp_13_fu_200_p1 : tmp_15_fu_204_p1);

assign t_1_cast_fu_287_p1 = t_1_reg_430;

assign t_1_fu_278_p1 = t_1_fu_278_p10;

assign t_1_fu_278_p10 = temp_reg_425;

assign t_1_fu_278_p2 = (55'd8380417 * t_1_fu_278_p1);

assign t_2_fu_290_p2 = (t_1_cast_fu_287_p1 + a_assign_cast1_fu_284_p1);

assign t_3_fu_322_p1 = tmp_14_reg_435;

assign temp_1_fu_261_p0 = temp_1_fu_261_p00;

assign temp_1_fu_261_p00 = p_load_reg_410;

assign temp_1_fu_261_p1 = tmp_6_cast_reg_382;

assign temp_1_fu_261_p2 = (temp_1_fu_261_p0 * temp_1_fu_261_p1);

assign temp_fu_270_p2 = ($signed(32'd4236238847) * $signed(tmp_18_reg_420));

assign tmp_10_fu_315_p2 = (p_q0 + tmp_11_cast_fu_311_p1);

assign tmp_11_cast_fu_311_p1 = tmp_7_fu_306_p2;

assign tmp_11_fu_325_p2 = (p_q0 + t_3_fu_322_p1);

assign tmp_12_fu_250_p2 = (len_cast_cast4_reg_339 + start_cast_reg_377);

assign tmp_13_fu_200_p1 = j_reg_109[29:0];

assign tmp_15_fu_204_p1 = tmp_4_fu_189_p2[29:0];

assign tmp_17_fu_170_p4 = {{len_reg_97[28:1]}};

assign tmp_18_fu_266_p1 = temp_1_fu_261_p2[31:0];

assign tmp_1_fu_146_p4 = {{j_reg_109[30:8]}};

assign tmp_3_fu_165_p1 = k_fu_60;

assign tmp_4_fu_189_p2 = (len_cast_cast4_reg_339 + j_reg_109);

assign tmp_5_fu_194_p2 = ((j_reg_109 > tmp_4_fu_189_p2) ? 1'b1 : 1'b0);

assign tmp_6_cast_fu_220_p1 = zetas_q0;

assign tmp_6_fu_239_p1 = j1_reg_121;

assign tmp_7_fu_306_p2 = ($signed(24'd16760834) - $signed(tmp_14_reg_435));

assign tmp_8_fu_224_p2 = ((j1_reg_121 < tmp_4_reg_372) ? 1'b1 : 1'b0);

assign tmp_9_fu_229_p2 = (j1_reg_121 + len_cast_cast4_reg_339);

assign tmp_fu_140_p2 = ((len_reg_97 == 29'd0) ? 1'b1 : 1'b0);

assign tmp_s_fu_234_p1 = tmp_9_fu_229_p2;

assign zetas_address0 = tmp_3_fu_165_p1;

always @ (posedge ap_clk) begin
    len_cast_cast4_reg_339[30:8] <= 23'b00000000000000000000000;
    start_cast_reg_377[30] <= 1'b0;
    tmp_6_cast_reg_382[54:23] <= 32'b00000000000000000000000000000000;
    len_reg_97[28:8] <= 21'b000000000000000000000;
end

endmodule //ntt