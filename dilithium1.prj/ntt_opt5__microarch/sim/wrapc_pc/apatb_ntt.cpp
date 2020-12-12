// ==============================================================
// File generated on Sat Dec 12 08:58:12 EST 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "p"
#define AUTOTB_TVIN_p  "../tv/cdatafile/c.ntt.autotvin_p.dat"
#define AUTOTB_TVOUT_p  "../tv/cdatafile/c.ntt.autotvout_p.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "p"
#define AUTOTB_TVOUT_PC_p  "../tv/rtldatafile/rtl.ntt.autotvout_p.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			p_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{p " << p_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int p_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern "C" void ntt (
int p[256]);

extern "C" void AESL_WRAP_ntt (
int p[256])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "p"
		aesl_fh.read(AUTOTB_TVOUT_PC_p, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_p, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_p, AESL_token); // data

			sc_bv<32> *p_pc_buffer = new sc_bv<32>[256];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'p', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'p', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					p_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_p, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_p))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: p
				{
					// bitslice(31, 0)
					// {
						// celement: p(31, 0)
						// {
							sc_lv<32>* p_lv0_0_255_1 = new sc_lv<32>[256];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: p(31, 0)
						{
							// carray: (0) => (255) @ (1)
							for (int i_0 = 0; i_0 <= 255; i_0 += 1)
							{
								if (&(p[0]) != NULL) // check the null address if the c port is array or others
								{
									p_lv0_0_255_1[hls_map_index].range(31, 0) = sc_bv<32>(p_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: p(31, 0)
						{
							// carray: (0) => (255) @ (1)
							for (int i_0 = 0; i_0 <= 255; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : p[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : p[0]
								// output_left_conversion : p[i_0]
								// output_type_conversion : (p_lv0_0_255_1[hls_map_index]).to_uint64()
								if (&(p[0]) != NULL) // check the null address if the c port is array or others
								{
									p[i_0] = (p_lv0_0_255_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] p_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "p"
		char* tvin_p = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_p);
		char* tvout_p = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_p);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_p, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_p, tvin_p);

		sc_bv<32>* p_tvin_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: p
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: p(31, 0)
				{
					// carray: (0) => (255) @ (1)
					for (int i_0 = 0; i_0 <= 255; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : p[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : p[0]
						// regulate_c_name       : p
						// input_type_conversion : p[i_0]
						if (&(p[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> p_tmp_mem;
							p_tmp_mem = p[i_0];
							p_tvin_wrapc_buffer[hls_map_index].range(31, 0) = p_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvin_p, "%s\n", (p_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_p, tvin_p);
		}

		tcl_file.set_num(256, &tcl_file.p_depth);
		sprintf(tvin_p, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_p, tvin_p);

		// release memory allocation
		delete [] p_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		ntt(p);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_p, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_p, tvout_p);

		sc_bv<32>* p_tvout_wrapc_buffer = new sc_bv<32>[256];

		// RTL Name: p
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: p(31, 0)
				{
					// carray: (0) => (255) @ (1)
					for (int i_0 = 0; i_0 <= 255; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : p[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : p[0]
						// regulate_c_name       : p
						// input_type_conversion : p[i_0]
						if (&(p[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> p_tmp_mem;
							p_tmp_mem = p[i_0];
							p_tvout_wrapc_buffer[hls_map_index].range(31, 0) = p_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 256; i++)
		{
			sprintf(tvout_p, "%s\n", (p_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_p, tvout_p);
		}

		tcl_file.set_num(256, &tcl_file.p_depth);
		sprintf(tvout_p, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_p, tvout_p);

		// release memory allocation
		delete [] p_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "p"
		delete [] tvin_p;
		delete [] tvout_p;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

