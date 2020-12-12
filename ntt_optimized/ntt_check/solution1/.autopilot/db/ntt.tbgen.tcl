set C_TypeInfoList {{ 
"ntt" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"q0": [[], {"array": ["0", [32]]}] }, {"q1": [[], {"array": ["0", [32]]}] }, {"q2": [[], {"array": ["0", [32]]}] }, {"q3": [[], {"array": ["0", [32]]}] }, {"q4": [[], {"array": ["0", [32]]}] }, {"q5": [[], {"array": ["0", [32]]}] }, {"q6": [[], {"array": ["0", [32]]}] }, {"q7": [[], {"array": ["0", [32]]}] }, {"zetas": [[], {"array": ["0", [256]]}] }],[],""], 
"0": [ "uint32_t", {"typedef": [[[], {"scalar": "unsigned int"}],""]}]
}}
set moduleName ntt
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {ntt}
set C_modelType { void 0 }
set C_modelArgList {
	{ q0 int 32 regular {array 32 { 2 2 } 1 1 }  }
	{ q1 int 32 regular {array 32 { 2 2 } 1 1 }  }
	{ q2 int 32 regular {array 32 { 2 2 } 1 1 }  }
	{ q3 int 32 regular {array 32 { 2 2 } 1 1 }  }
	{ q4 int 32 regular {array 32 { 2 2 } 1 1 }  }
	{ q5 int 32 regular {array 32 { 2 2 } 1 1 }  }
	{ q6 int 32 regular {array 32 { 2 2 } 1 1 }  }
	{ q7 int 32 regular {array 32 { 2 2 } 1 1 }  }
	{ zetas int 32 regular {array 256 { 1 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "q0", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "q0","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 31,"step" : 1}]}]}]} , 
 	{ "Name" : "q1", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "q1","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 31,"step" : 1}]}]}]} , 
 	{ "Name" : "q2", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "q2","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 31,"step" : 1}]}]}]} , 
 	{ "Name" : "q3", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "q3","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 31,"step" : 1}]}]}]} , 
 	{ "Name" : "q4", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "q4","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 31,"step" : 1}]}]}]} , 
 	{ "Name" : "q5", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "q5","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 31,"step" : 1}]}]}]} , 
 	{ "Name" : "q6", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "q6","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 31,"step" : 1}]}]}]} , 
 	{ "Name" : "q7", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "q7","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 31,"step" : 1}]}]}]} , 
 	{ "Name" : "zetas", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "zetas","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 255,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 92
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ q0_address0 sc_out sc_lv 5 signal 0 } 
	{ q0_ce0 sc_out sc_logic 1 signal 0 } 
	{ q0_we0 sc_out sc_logic 1 signal 0 } 
	{ q0_d0 sc_out sc_lv 32 signal 0 } 
	{ q0_q0 sc_in sc_lv 32 signal 0 } 
	{ q0_address1 sc_out sc_lv 5 signal 0 } 
	{ q0_ce1 sc_out sc_logic 1 signal 0 } 
	{ q0_we1 sc_out sc_logic 1 signal 0 } 
	{ q0_d1 sc_out sc_lv 32 signal 0 } 
	{ q0_q1 sc_in sc_lv 32 signal 0 } 
	{ q1_address0 sc_out sc_lv 5 signal 1 } 
	{ q1_ce0 sc_out sc_logic 1 signal 1 } 
	{ q1_we0 sc_out sc_logic 1 signal 1 } 
	{ q1_d0 sc_out sc_lv 32 signal 1 } 
	{ q1_q0 sc_in sc_lv 32 signal 1 } 
	{ q1_address1 sc_out sc_lv 5 signal 1 } 
	{ q1_ce1 sc_out sc_logic 1 signal 1 } 
	{ q1_we1 sc_out sc_logic 1 signal 1 } 
	{ q1_d1 sc_out sc_lv 32 signal 1 } 
	{ q1_q1 sc_in sc_lv 32 signal 1 } 
	{ q2_address0 sc_out sc_lv 5 signal 2 } 
	{ q2_ce0 sc_out sc_logic 1 signal 2 } 
	{ q2_we0 sc_out sc_logic 1 signal 2 } 
	{ q2_d0 sc_out sc_lv 32 signal 2 } 
	{ q2_q0 sc_in sc_lv 32 signal 2 } 
	{ q2_address1 sc_out sc_lv 5 signal 2 } 
	{ q2_ce1 sc_out sc_logic 1 signal 2 } 
	{ q2_we1 sc_out sc_logic 1 signal 2 } 
	{ q2_d1 sc_out sc_lv 32 signal 2 } 
	{ q2_q1 sc_in sc_lv 32 signal 2 } 
	{ q3_address0 sc_out sc_lv 5 signal 3 } 
	{ q3_ce0 sc_out sc_logic 1 signal 3 } 
	{ q3_we0 sc_out sc_logic 1 signal 3 } 
	{ q3_d0 sc_out sc_lv 32 signal 3 } 
	{ q3_q0 sc_in sc_lv 32 signal 3 } 
	{ q3_address1 sc_out sc_lv 5 signal 3 } 
	{ q3_ce1 sc_out sc_logic 1 signal 3 } 
	{ q3_we1 sc_out sc_logic 1 signal 3 } 
	{ q3_d1 sc_out sc_lv 32 signal 3 } 
	{ q3_q1 sc_in sc_lv 32 signal 3 } 
	{ q4_address0 sc_out sc_lv 5 signal 4 } 
	{ q4_ce0 sc_out sc_logic 1 signal 4 } 
	{ q4_we0 sc_out sc_logic 1 signal 4 } 
	{ q4_d0 sc_out sc_lv 32 signal 4 } 
	{ q4_q0 sc_in sc_lv 32 signal 4 } 
	{ q4_address1 sc_out sc_lv 5 signal 4 } 
	{ q4_ce1 sc_out sc_logic 1 signal 4 } 
	{ q4_we1 sc_out sc_logic 1 signal 4 } 
	{ q4_d1 sc_out sc_lv 32 signal 4 } 
	{ q4_q1 sc_in sc_lv 32 signal 4 } 
	{ q5_address0 sc_out sc_lv 5 signal 5 } 
	{ q5_ce0 sc_out sc_logic 1 signal 5 } 
	{ q5_we0 sc_out sc_logic 1 signal 5 } 
	{ q5_d0 sc_out sc_lv 32 signal 5 } 
	{ q5_q0 sc_in sc_lv 32 signal 5 } 
	{ q5_address1 sc_out sc_lv 5 signal 5 } 
	{ q5_ce1 sc_out sc_logic 1 signal 5 } 
	{ q5_we1 sc_out sc_logic 1 signal 5 } 
	{ q5_d1 sc_out sc_lv 32 signal 5 } 
	{ q5_q1 sc_in sc_lv 32 signal 5 } 
	{ q6_address0 sc_out sc_lv 5 signal 6 } 
	{ q6_ce0 sc_out sc_logic 1 signal 6 } 
	{ q6_we0 sc_out sc_logic 1 signal 6 } 
	{ q6_d0 sc_out sc_lv 32 signal 6 } 
	{ q6_q0 sc_in sc_lv 32 signal 6 } 
	{ q6_address1 sc_out sc_lv 5 signal 6 } 
	{ q6_ce1 sc_out sc_logic 1 signal 6 } 
	{ q6_we1 sc_out sc_logic 1 signal 6 } 
	{ q6_d1 sc_out sc_lv 32 signal 6 } 
	{ q6_q1 sc_in sc_lv 32 signal 6 } 
	{ q7_address0 sc_out sc_lv 5 signal 7 } 
	{ q7_ce0 sc_out sc_logic 1 signal 7 } 
	{ q7_we0 sc_out sc_logic 1 signal 7 } 
	{ q7_d0 sc_out sc_lv 32 signal 7 } 
	{ q7_q0 sc_in sc_lv 32 signal 7 } 
	{ q7_address1 sc_out sc_lv 5 signal 7 } 
	{ q7_ce1 sc_out sc_logic 1 signal 7 } 
	{ q7_we1 sc_out sc_logic 1 signal 7 } 
	{ q7_d1 sc_out sc_lv 32 signal 7 } 
	{ q7_q1 sc_in sc_lv 32 signal 7 } 
	{ zetas_address0 sc_out sc_lv 8 signal 8 } 
	{ zetas_ce0 sc_out sc_logic 1 signal 8 } 
	{ zetas_q0 sc_in sc_lv 32 signal 8 } 
	{ zetas_address1 sc_out sc_lv 8 signal 8 } 
	{ zetas_ce1 sc_out sc_logic 1 signal 8 } 
	{ zetas_q1 sc_in sc_lv 32 signal 8 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "q0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "q0", "role": "address0" }} , 
 	{ "name": "q0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q0", "role": "ce0" }} , 
 	{ "name": "q0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q0", "role": "we0" }} , 
 	{ "name": "q0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q0", "role": "d0" }} , 
 	{ "name": "q0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q0", "role": "q0" }} , 
 	{ "name": "q0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "q0", "role": "address1" }} , 
 	{ "name": "q0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q0", "role": "ce1" }} , 
 	{ "name": "q0_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q0", "role": "we1" }} , 
 	{ "name": "q0_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q0", "role": "d1" }} , 
 	{ "name": "q0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q0", "role": "q1" }} , 
 	{ "name": "q1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "q1", "role": "address0" }} , 
 	{ "name": "q1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q1", "role": "ce0" }} , 
 	{ "name": "q1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q1", "role": "we0" }} , 
 	{ "name": "q1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q1", "role": "d0" }} , 
 	{ "name": "q1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q1", "role": "q0" }} , 
 	{ "name": "q1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "q1", "role": "address1" }} , 
 	{ "name": "q1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q1", "role": "ce1" }} , 
 	{ "name": "q1_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q1", "role": "we1" }} , 
 	{ "name": "q1_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q1", "role": "d1" }} , 
 	{ "name": "q1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q1", "role": "q1" }} , 
 	{ "name": "q2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "q2", "role": "address0" }} , 
 	{ "name": "q2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q2", "role": "ce0" }} , 
 	{ "name": "q2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q2", "role": "we0" }} , 
 	{ "name": "q2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q2", "role": "d0" }} , 
 	{ "name": "q2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q2", "role": "q0" }} , 
 	{ "name": "q2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "q2", "role": "address1" }} , 
 	{ "name": "q2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q2", "role": "ce1" }} , 
 	{ "name": "q2_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q2", "role": "we1" }} , 
 	{ "name": "q2_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q2", "role": "d1" }} , 
 	{ "name": "q2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q2", "role": "q1" }} , 
 	{ "name": "q3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "q3", "role": "address0" }} , 
 	{ "name": "q3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q3", "role": "ce0" }} , 
 	{ "name": "q3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q3", "role": "we0" }} , 
 	{ "name": "q3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q3", "role": "d0" }} , 
 	{ "name": "q3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q3", "role": "q0" }} , 
 	{ "name": "q3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "q3", "role": "address1" }} , 
 	{ "name": "q3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q3", "role": "ce1" }} , 
 	{ "name": "q3_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q3", "role": "we1" }} , 
 	{ "name": "q3_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q3", "role": "d1" }} , 
 	{ "name": "q3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q3", "role": "q1" }} , 
 	{ "name": "q4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "q4", "role": "address0" }} , 
 	{ "name": "q4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q4", "role": "ce0" }} , 
 	{ "name": "q4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q4", "role": "we0" }} , 
 	{ "name": "q4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q4", "role": "d0" }} , 
 	{ "name": "q4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q4", "role": "q0" }} , 
 	{ "name": "q4_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "q4", "role": "address1" }} , 
 	{ "name": "q4_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q4", "role": "ce1" }} , 
 	{ "name": "q4_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q4", "role": "we1" }} , 
 	{ "name": "q4_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q4", "role": "d1" }} , 
 	{ "name": "q4_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q4", "role": "q1" }} , 
 	{ "name": "q5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "q5", "role": "address0" }} , 
 	{ "name": "q5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q5", "role": "ce0" }} , 
 	{ "name": "q5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q5", "role": "we0" }} , 
 	{ "name": "q5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q5", "role": "d0" }} , 
 	{ "name": "q5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q5", "role": "q0" }} , 
 	{ "name": "q5_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "q5", "role": "address1" }} , 
 	{ "name": "q5_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q5", "role": "ce1" }} , 
 	{ "name": "q5_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q5", "role": "we1" }} , 
 	{ "name": "q5_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q5", "role": "d1" }} , 
 	{ "name": "q5_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q5", "role": "q1" }} , 
 	{ "name": "q6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "q6", "role": "address0" }} , 
 	{ "name": "q6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q6", "role": "ce0" }} , 
 	{ "name": "q6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q6", "role": "we0" }} , 
 	{ "name": "q6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q6", "role": "d0" }} , 
 	{ "name": "q6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q6", "role": "q0" }} , 
 	{ "name": "q6_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "q6", "role": "address1" }} , 
 	{ "name": "q6_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q6", "role": "ce1" }} , 
 	{ "name": "q6_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q6", "role": "we1" }} , 
 	{ "name": "q6_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q6", "role": "d1" }} , 
 	{ "name": "q6_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q6", "role": "q1" }} , 
 	{ "name": "q7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "q7", "role": "address0" }} , 
 	{ "name": "q7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q7", "role": "ce0" }} , 
 	{ "name": "q7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q7", "role": "we0" }} , 
 	{ "name": "q7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q7", "role": "d0" }} , 
 	{ "name": "q7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q7", "role": "q0" }} , 
 	{ "name": "q7_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "q7", "role": "address1" }} , 
 	{ "name": "q7_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q7", "role": "ce1" }} , 
 	{ "name": "q7_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q7", "role": "we1" }} , 
 	{ "name": "q7_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q7", "role": "d1" }} , 
 	{ "name": "q7_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q7", "role": "q1" }} , 
 	{ "name": "zetas_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "zetas", "role": "address0" }} , 
 	{ "name": "zetas_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "zetas", "role": "ce0" }} , 
 	{ "name": "zetas_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "zetas", "role": "q0" }} , 
 	{ "name": "zetas_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "zetas", "role": "address1" }} , 
 	{ "name": "zetas_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "zetas", "role": "ce1" }} , 
 	{ "name": "zetas_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "zetas", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8"],
		"CDFG" : "ntt",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "719", "EstimateLatencyMax" : "719",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "q0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "q1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "q2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "q3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "q4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "q5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "q6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "q7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "zetas", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_montgomery_reduce_fu_1660", "Parent" : "0",
		"CDFG" : "montgomery_reduce",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_montgomery_reduce_fu_1665", "Parent" : "0",
		"CDFG" : "montgomery_reduce",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_montgomery_reduce_fu_1670", "Parent" : "0",
		"CDFG" : "montgomery_reduce",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_montgomery_reduce_fu_1675", "Parent" : "0",
		"CDFG" : "montgomery_reduce",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_montgomery_reduce_fu_1680", "Parent" : "0",
		"CDFG" : "montgomery_reduce",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_montgomery_reduce_fu_1685", "Parent" : "0",
		"CDFG" : "montgomery_reduce",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_montgomery_reduce_fu_1690", "Parent" : "0",
		"CDFG" : "montgomery_reduce",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_montgomery_reduce_fu_1695", "Parent" : "0",
		"CDFG" : "montgomery_reduce",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	ntt {
		q0 {Type IO LastRead 27 FirstWrite 8}
		q1 {Type IO LastRead 27 FirstWrite 8}
		q2 {Type IO LastRead 27 FirstWrite 8}
		q3 {Type IO LastRead 27 FirstWrite 8}
		q4 {Type IO LastRead 27 FirstWrite 9}
		q5 {Type IO LastRead 27 FirstWrite 9}
		q6 {Type IO LastRead 27 FirstWrite 9}
		q7 {Type IO LastRead 27 FirstWrite 9}
		zetas {Type I LastRead 24 FirstWrite -1}}
	montgomery_reduce {
		a {Type I LastRead 0 FirstWrite -1}}
	montgomery_reduce {
		a {Type I LastRead 0 FirstWrite -1}}
	montgomery_reduce {
		a {Type I LastRead 0 FirstWrite -1}}
	montgomery_reduce {
		a {Type I LastRead 0 FirstWrite -1}}
	montgomery_reduce {
		a {Type I LastRead 0 FirstWrite -1}}
	montgomery_reduce {
		a {Type I LastRead 0 FirstWrite -1}}
	montgomery_reduce {
		a {Type I LastRead 0 FirstWrite -1}}
	montgomery_reduce {
		a {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "719", "Max" : "719"}
	, {"Name" : "Interval", "Min" : "720", "Max" : "720"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
	{"Pipeline" : "3", "EnableSignal" : "ap_enable_pp3"}
]}

set Spec2ImplPortList { 
	q0 { ap_memory {  { q0_address0 mem_address 1 5 }  { q0_ce0 mem_ce 1 1 }  { q0_we0 mem_we 1 1 }  { q0_d0 mem_din 1 32 }  { q0_q0 mem_dout 0 32 }  { q0_address1 mem_address 1 5 }  { q0_ce1 mem_ce 1 1 }  { q0_we1 mem_we 1 1 }  { q0_d1 mem_din 1 32 }  { q0_q1 mem_dout 0 32 } } }
	q1 { ap_memory {  { q1_address0 mem_address 1 5 }  { q1_ce0 mem_ce 1 1 }  { q1_we0 mem_we 1 1 }  { q1_d0 mem_din 1 32 }  { q1_q0 mem_dout 0 32 }  { q1_address1 mem_address 1 5 }  { q1_ce1 mem_ce 1 1 }  { q1_we1 mem_we 1 1 }  { q1_d1 mem_din 1 32 }  { q1_q1 mem_dout 0 32 } } }
	q2 { ap_memory {  { q2_address0 mem_address 1 5 }  { q2_ce0 mem_ce 1 1 }  { q2_we0 mem_we 1 1 }  { q2_d0 mem_din 1 32 }  { q2_q0 mem_dout 0 32 }  { q2_address1 mem_address 1 5 }  { q2_ce1 mem_ce 1 1 }  { q2_we1 mem_we 1 1 }  { q2_d1 mem_din 1 32 }  { q2_q1 mem_dout 0 32 } } }
	q3 { ap_memory {  { q3_address0 mem_address 1 5 }  { q3_ce0 mem_ce 1 1 }  { q3_we0 mem_we 1 1 }  { q3_d0 mem_din 1 32 }  { q3_q0 mem_dout 0 32 }  { q3_address1 mem_address 1 5 }  { q3_ce1 mem_ce 1 1 }  { q3_we1 mem_we 1 1 }  { q3_d1 mem_din 1 32 }  { q3_q1 mem_dout 0 32 } } }
	q4 { ap_memory {  { q4_address0 mem_address 1 5 }  { q4_ce0 mem_ce 1 1 }  { q4_we0 mem_we 1 1 }  { q4_d0 mem_din 1 32 }  { q4_q0 mem_dout 0 32 }  { q4_address1 mem_address 1 5 }  { q4_ce1 mem_ce 1 1 }  { q4_we1 mem_we 1 1 }  { q4_d1 mem_din 1 32 }  { q4_q1 mem_dout 0 32 } } }
	q5 { ap_memory {  { q5_address0 mem_address 1 5 }  { q5_ce0 mem_ce 1 1 }  { q5_we0 mem_we 1 1 }  { q5_d0 mem_din 1 32 }  { q5_q0 mem_dout 0 32 }  { q5_address1 mem_address 1 5 }  { q5_ce1 mem_ce 1 1 }  { q5_we1 mem_we 1 1 }  { q5_d1 mem_din 1 32 }  { q5_q1 mem_dout 0 32 } } }
	q6 { ap_memory {  { q6_address0 mem_address 1 5 }  { q6_ce0 mem_ce 1 1 }  { q6_we0 mem_we 1 1 }  { q6_d0 mem_din 1 32 }  { q6_q0 mem_dout 0 32 }  { q6_address1 mem_address 1 5 }  { q6_ce1 mem_ce 1 1 }  { q6_we1 mem_we 1 1 }  { q6_d1 mem_din 1 32 }  { q6_q1 mem_dout 0 32 } } }
	q7 { ap_memory {  { q7_address0 mem_address 1 5 }  { q7_ce0 mem_ce 1 1 }  { q7_we0 mem_we 1 1 }  { q7_d0 mem_din 1 32 }  { q7_q0 mem_dout 0 32 }  { q7_address1 mem_address 1 5 }  { q7_ce1 mem_ce 1 1 }  { q7_we1 mem_we 1 1 }  { q7_d1 mem_din 1 32 }  { q7_q1 mem_dout 0 32 } } }
	zetas { ap_memory {  { zetas_address0 mem_address 1 8 }  { zetas_ce0 mem_ce 1 1 }  { zetas_q0 mem_dout 0 32 }  { zetas_address1 mem_address 1 8 }  { zetas_ce1 mem_ce 1 1 }  { zetas_q1 mem_dout 0 32 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
