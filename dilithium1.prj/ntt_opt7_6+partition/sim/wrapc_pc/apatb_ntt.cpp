// ==============================================================
// File generated on Sat Dec 12 09:55:42 EST 2020
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


// wrapc file define: "p_0"
#define AUTOTB_TVIN_p_0  "../tv/cdatafile/c.ntt.autotvin_p_0.dat"
#define AUTOTB_TVOUT_p_0  "../tv/cdatafile/c.ntt.autotvout_p_0.dat"
// wrapc file define: "p_1"
#define AUTOTB_TVIN_p_1  "../tv/cdatafile/c.ntt.autotvin_p_1.dat"
#define AUTOTB_TVOUT_p_1  "../tv/cdatafile/c.ntt.autotvout_p_1.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "p_0"
#define AUTOTB_TVOUT_PC_p_0  "../tv/rtldatafile/rtl.ntt.autotvout_p_0.dat"
// tvout file define: "p_1"
#define AUTOTB_TVOUT_PC_p_1  "../tv/rtldatafile/rtl.ntt.autotvout_p_1.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			p_0_depth = 0;
			p_1_depth = 0;
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
			total_list << "{p_0 " << p_0_depth << "}\n";
			total_list << "{p_1 " << p_1_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int p_0_depth;
		int p_1_depth;
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


		// output port post check: "p_0"
		aesl_fh.read(AUTOTB_TVOUT_PC_p_0, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_p_0, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_p_0, AESL_token); // data

			sc_bv<32> *p_0_pc_buffer = new sc_bv<32>[128];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'p_0', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'p_0', possible cause: There are uninitialized variables in the C design." << endl;
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
					p_0_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_p_0, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_p_0))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: p_0
				{
					// bitslice(31, 0)
					// {
						// celement: p(31, 0)
						// {
							sc_lv<32>* p_lv0_0_127_1 = new sc_lv<32>[128];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: p(31, 0)
						{
							// carray: (0) => (127) @ (1)
							for (int i_0 = 0; i_0 <= 127; i_0 += 1)
							{
								if (&(p[0]) != NULL) // check the null address if the c port is array or others
								{
									p_lv0_0_127_1[hls_map_index].range(31, 0) = sc_bv<32>(p_0_pc_buffer[hls_map_index].range(31, 0));
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
							// carray: (0) => (127) @ (1)
							for (int i_0 = 0; i_0 <= 127; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : p[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : p[0]
								// output_left_conversion : p[i_0]
								// output_type_conversion : (p_lv0_0_127_1[hls_map_index]).to_uint64()
								if (&(p[0]) != NULL) // check the null address if the c port is array or others
								{
									p[i_0] = (p_lv0_0_127_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] p_0_pc_buffer;
		}

		// output port post check: "p_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_p_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_p_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_p_1, AESL_token); // data

			sc_bv<32> *p_1_pc_buffer = new sc_bv<32>[128];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'p_1', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'p_1', possible cause: There are uninitialized variables in the C design." << endl;
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
					p_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_p_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_p_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: p_1
				{
					// bitslice(31, 0)
					// {
						// celement: p(31, 0)
						// {
							sc_lv<32>* p_lv0_128_255_1 = new sc_lv<32>[128];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: p(31, 0)
						{
							// carray: (128) => (255) @ (1)
							for (int i_0 = 128; i_0 <= 255; i_0 += 1)
							{
								if (&(p[0]) != NULL) // check the null address if the c port is array or others
								{
									p_lv0_128_255_1[hls_map_index].range(31, 0) = sc_bv<32>(p_1_pc_buffer[hls_map_index].range(31, 0));
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
							// carray: (128) => (255) @ (1)
							for (int i_0 = 128; i_0 <= 255; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : p[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : p[0]
								// output_left_conversion : p[i_0]
								// output_type_conversion : (p_lv0_128_255_1[hls_map_index]).to_uint64()
								if (&(p[0]) != NULL) // check the null address if the c port is array or others
								{
									p[i_0] = (p_lv0_128_255_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] p_1_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "p_0"
		char* tvin_p_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_p_0);
		char* tvout_p_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_p_0);

		// "p_1"
		char* tvin_p_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_p_1);
		char* tvout_p_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_p_1);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_p_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_p_0, tvin_p_0);

		sc_bv<32>* p_0_tvin_wrapc_buffer = new sc_bv<32>[128];

		// RTL Name: p_0
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: p(31, 0)
				{
					// carray: (0) => (127) @ (1)
					for (int i_0 = 0; i_0 <= 127; i_0 += 1)
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
							p_0_tvin_wrapc_buffer[hls_map_index].range(31, 0) = p_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 128; i++)
		{
			sprintf(tvin_p_0, "%s\n", (p_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_p_0, tvin_p_0);
		}

		tcl_file.set_num(128, &tcl_file.p_0_depth);
		sprintf(tvin_p_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_p_0, tvin_p_0);

		// release memory allocation
		delete [] p_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_p_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_p_1, tvin_p_1);

		sc_bv<32>* p_1_tvin_wrapc_buffer = new sc_bv<32>[128];

		// RTL Name: p_1
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: p(31, 0)
				{
					// carray: (128) => (255) @ (1)
					for (int i_0 = 128; i_0 <= 255; i_0 += 1)
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
							p_1_tvin_wrapc_buffer[hls_map_index].range(31, 0) = p_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 128; i++)
		{
			sprintf(tvin_p_1, "%s\n", (p_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_p_1, tvin_p_1);
		}

		tcl_file.set_num(128, &tcl_file.p_1_depth);
		sprintf(tvin_p_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_p_1, tvin_p_1);

		// release memory allocation
		delete [] p_1_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		ntt(p);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_p_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_p_0, tvout_p_0);

		sc_bv<32>* p_0_tvout_wrapc_buffer = new sc_bv<32>[128];

		// RTL Name: p_0
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: p(31, 0)
				{
					// carray: (0) => (127) @ (1)
					for (int i_0 = 0; i_0 <= 127; i_0 += 1)
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
							p_0_tvout_wrapc_buffer[hls_map_index].range(31, 0) = p_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 128; i++)
		{
			sprintf(tvout_p_0, "%s\n", (p_0_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_p_0, tvout_p_0);
		}

		tcl_file.set_num(128, &tcl_file.p_0_depth);
		sprintf(tvout_p_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_p_0, tvout_p_0);

		// release memory allocation
		delete [] p_0_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_p_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_p_1, tvout_p_1);

		sc_bv<32>* p_1_tvout_wrapc_buffer = new sc_bv<32>[128];

		// RTL Name: p_1
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: p(31, 0)
				{
					// carray: (128) => (255) @ (1)
					for (int i_0 = 128; i_0 <= 255; i_0 += 1)
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
							p_1_tvout_wrapc_buffer[hls_map_index].range(31, 0) = p_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 128; i++)
		{
			sprintf(tvout_p_1, "%s\n", (p_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_p_1, tvout_p_1);
		}

		tcl_file.set_num(128, &tcl_file.p_1_depth);
		sprintf(tvout_p_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_p_1, tvout_p_1);

		// release memory allocation
		delete [] p_1_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "p_0"
		delete [] tvin_p_0;
		delete [] tvout_p_0;
		// release memory allocation: "p_1"
		delete [] tvin_p_1;
		delete [] tvout_p_1;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

