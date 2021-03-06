// ==============================================================
// File generated on Sat Dec 12 09:54:58 EST 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __ntt_zetas_1_H__
#define __ntt_zetas_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct ntt_zetas_1_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 23;
  static const unsigned AddressRange = 128;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(ntt_zetas_1_ram) {
        ram[0] = "0b00111111110101010010011";
        ram[1] = "0b01100111111111101011010";
        ram[2] = "0b01000110101100011010100";
        ram[3] = "0b01110100100000111111000";
        ram[4] = "0b10011001101111101110011";
        ram[5] = "0b01000100011110111111011";
        ram[6] = "0b10110101000101110100000";
        ram[7] = "0b10010011000010000100011";
        ram[8] = "0b00001000001001011110101";
        ram[9] = "0b01001010010010110000111";
        ram[10] = "0b11011010000010011110001";
        ram[11] = "0b01101011001101101011101";
        ram[12] = "0b10010100010100010100001";
        ram[13] = "0b10001101000001011111101";
        ram[14] = "0b11011011001101101010111";
        ram[15] = "0b10011110010010111011111";
        ram[16] = "0b00011011011111001011110";
        ram[17] = "0b00111000101111000011010";
        ram[18] = "0b00011011110000011100110";
        ram[19] = "0b00011000111111101011010";
        ram[20] = "0b00001111000111110000011";
        ram[21] = "0b11001110100001010001011";
        ram[22] = "0b11111110011011100000101";
        ram[23] = "0b11101111110011011111101";
        ram[24] = "0b11101011110000000100010";
        ram[25] = "0b10100000011101011110111";
        ram[26] = "0b00111110000000010000100";
        ram[27] = "0b01100001110111110000110";
        ram[28] = "0b10010011001100101111110";
        ram[29] = "0b11101111101110011010111";
        ram[30] = "0b11101000010010110010011";
        ram[31] = "0b10010010000000111000011";
        ram[32] = "0b00001010011100100011001";
        ram[33] = "0b00001000110000100001100";
        ram[34] = "0b10110101010110101000010";
        ram[35] = "0b01111101011000000011011";
        ram[36] = "0b01101000111001011100111";
        ram[37] = "0b10011001110000000111100";
        ram[38] = "0b00110100111110011000111";
        ram[39] = "0b00000110001100100100100";
        ram[40] = "0b01010110101111011100101";
        ram[41] = "0b01010010001000110011001";
        ram[42] = "0b10110000101101000111011";
        ram[43] = "0b00100110100110101110001";
        ram[44] = "0b01111011110000100011100";
        ram[45] = "0b00100110000100110000100";
        ram[46] = "0b01001011111000001010001";
        ram[47] = "0b00110000101101001000110";
        ram[48] = "0b10001100110010100011001";
        ram[49] = "0b00100110001010010111110";
        ram[50] = "0b01010000011100010010001";
        ram[51] = "0b10010011011101110010001";
        ram[52] = "0b10100100011000010001010";
        ram[53] = "0b00111001000010100111111";
        ram[54] = "0b00111010000101101001011";
        ram[55] = "0b11011111101011010100111";
        ram[56] = "0b11010111000100010111111";
        ram[57] = "0b00100101110000100011011";
        ram[58] = "0b10011010011111000111111";
        ram[59] = "0b11010100000110100110000";
        ram[60] = "0b11110001111110111100101";
        ram[61] = "0b00101000000011011000111";
        ram[62] = "0b01100100111001010000011";
        ram[63] = "0b11000011110110101101111";
        ram[64] = "0b11011000101100101010100";
        ram[65] = "0b00111010100000010011001";
        ram[66] = "0b10110010000010101111001";
        ram[67] = "0b11010101110010110101110";
        ram[68] = "0b00101101110010000000101";
        ram[69] = "0b00010111101101111100111";
        ram[70] = "0b01000100001110111101000";
        ram[71] = "0b01100111111100011001111";
        ram[72] = "0b11101111001100100110101";
        ram[73] = "0b10101001010101000001101";
        ram[74] = "0b11001100101111111111001";
        ram[75] = "0b11000111011000101011000";
        ram[76] = "0b10110000111000100011100";
        ram[77] = "0b10001110000110000010011";
        ram[78] = "0b00010010001000011011000";
        ram[79] = "0b10001100011111000100000";
        ram[80] = "0b11000010010011001011001";
        ram[81] = "0b01001010001110110001011";
        ram[82] = "0b01001010111001110110111";
        ram[83] = "0b11111010101110010010000";
        ram[84] = "0b00111011101110110011000";
        ram[85] = "0b01100110110100010011000";
        ram[86] = "0b00000101101010010111011";
        ram[87] = "0b11011010111001110101000";
        ram[88] = "0b10011110100110010111111";
        ram[89] = "0b00000100111110000011100";
        ram[90] = "0b00110001010101000001000";
        ram[91] = "0b01011011111110101110001";
        ram[92] = "0b00011000101110010100101";
        ram[93] = "0b00110010011011110011010";
        ram[94] = "0b10001111000000101101000";
        ram[95] = "0b11001000110110000111110";
        ram[96] = "0b10100011000000100111101";
        ram[97] = "0b01101011100010100111001";
        ram[98] = "0b01110110000000100010101";
        ram[99] = "0b00001000001110111000000";
        ram[100] = "0b01000011100010011110111";
        ram[101] = "0b11100001111101111110101";
        ram[102] = "0b00110100011010111100111";
        ram[103] = "0b00001110011010000001110";
        ram[104] = "0b11110010101110101000110";
        ram[105] = "0b00110100100110011010000";
        ram[106] = "0b11001000101110010101111";
        ram[107] = "0b00111010010011001101000";
        ram[108] = "0b11001100110111010011001";
        ram[109] = "0b11011110000011000110100";
        ram[110] = "0b11110111110010111011011";
        ram[111] = "0b10001010101111111011100";
        ram[112] = "0b10100110000011101100101";
        ram[113] = "0b10111011100000110110000";
        ram[114] = "0b11110010111001111011110";
        ram[115] = "0b10111001111110100001010";
        ram[116] = "0b00000101100110010010011";
        ram[117] = "0b11100001111100000000110";
        ram[118] = "0b00110001001110000101010";
        ram[119] = "0b10010011100010110101010";
        ram[120] = "0b11101110110101001010001";
        ram[121] = "0b01110111100111100101100";
        ram[122] = "0b11111110010001101001111";
        ram[123] = "0b11010110001011011100000";
        ram[124] = "0b01111000001010111001010";
        ram[125] = "0b00101010101111001101000";
        ram[126] = "0b11100101111011010110111";
        ram[127] = "0b00111100010100111001110";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(ntt_zetas_1) {


static const unsigned DataWidth = 23;
static const unsigned AddressRange = 128;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


ntt_zetas_1_ram* meminst;


SC_CTOR(ntt_zetas_1) {
meminst = new ntt_zetas_1_ram("ntt_zetas_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~ntt_zetas_1() {
    delete meminst;
}


};//endmodule
#endif
