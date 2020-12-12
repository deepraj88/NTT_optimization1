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
	{ p_0 int 32 regular {array 128 { 2 2 } 1 1 }  }
	{ p_1 int 32 regular {array 128 { 2 2 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "p_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "p","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 127,"step" : 1}]}]}]} , 
 	{ "Name" : "p_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "p","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 128,"up" : 255,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 26
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ p_0_address0 sc_out sc_lv 7 signal 0 } 
	{ p_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ p_0_we0 sc_out sc_logic 1 signal 0 } 
	{ p_0_d0 sc_out sc_lv 32 signal 0 } 
	{ p_0_q0 sc_in sc_lv 32 signal 0 } 
	{ p_0_address1 sc_out sc_lv 7 signal 0 } 
	{ p_0_ce1 sc_out sc_logic 1 signal 0 } 
	{ p_0_we1 sc_out sc_logic 1 signal 0 } 
	{ p_0_d1 sc_out sc_lv 32 signal 0 } 
	{ p_0_q1 sc_in sc_lv 32 signal 0 } 
	{ p_1_address0 sc_out sc_lv 7 signal 1 } 
	{ p_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ p_1_we0 sc_out sc_logic 1 signal 1 } 
	{ p_1_d0 sc_out sc_lv 32 signal 1 } 
	{ p_1_q0 sc_in sc_lv 32 signal 1 } 
	{ p_1_address1 sc_out sc_lv 7 signal 1 } 
	{ p_1_ce1 sc_out sc_logic 1 signal 1 } 
	{ p_1_we1 sc_out sc_logic 1 signal 1 } 
	{ p_1_d1 sc_out sc_lv 32 signal 1 } 
	{ p_1_q1 sc_in sc_lv 32 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "p_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "p_0", "role": "address0" }} , 
 	{ "name": "p_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p_0", "role": "ce0" }} , 
 	{ "name": "p_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p_0", "role": "we0" }} , 
 	{ "name": "p_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_0", "role": "d0" }} , 
 	{ "name": "p_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_0", "role": "q0" }} , 
 	{ "name": "p_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "p_0", "role": "address1" }} , 
 	{ "name": "p_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p_0", "role": "ce1" }} , 
 	{ "name": "p_0_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p_0", "role": "we1" }} , 
 	{ "name": "p_0_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_0", "role": "d1" }} , 
 	{ "name": "p_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_0", "role": "q1" }} , 
 	{ "name": "p_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "p_1", "role": "address0" }} , 
 	{ "name": "p_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p_1", "role": "ce0" }} , 
 	{ "name": "p_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p_1", "role": "we0" }} , 
 	{ "name": "p_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_1", "role": "d0" }} , 
 	{ "name": "p_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_1", "role": "q0" }} , 
 	{ "name": "p_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "p_1", "role": "address1" }} , 
 	{ "name": "p_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p_1", "role": "ce1" }} , 
 	{ "name": "p_1_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p_1", "role": "we1" }} , 
 	{ "name": "p_1_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_1", "role": "d1" }} , 
 	{ "name": "p_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_1", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "ntt",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "p_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "zetas_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "zetas_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.zetas_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.zetas_1_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	ntt {
		p_0 {Type IO LastRead 16 FirstWrite 8}
		p_1 {Type IO LastRead 16 FirstWrite 8}
		zetas_0 {Type I LastRead -1 FirstWrite -1}
		zetas_1 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	p_0 { ap_memory {  { p_0_address0 mem_address 1 7 }  { p_0_ce0 mem_ce 1 1 }  { p_0_we0 mem_we 1 1 }  { p_0_d0 mem_din 1 32 }  { p_0_q0 mem_dout 0 32 }  { p_0_address1 MemPortADDR2 1 7 }  { p_0_ce1 MemPortCE2 1 1 }  { p_0_we1 MemPortWE2 1 1 }  { p_0_d1 MemPortDIN2 1 32 }  { p_0_q1 MemPortDOUT2 0 32 } } }
	p_1 { ap_memory {  { p_1_address0 mem_address 1 7 }  { p_1_ce0 mem_ce 1 1 }  { p_1_we0 mem_we 1 1 }  { p_1_d0 mem_din 1 32 }  { p_1_q0 mem_dout 0 32 }  { p_1_address1 MemPortADDR2 1 7 }  { p_1_ce1 MemPortCE2 1 1 }  { p_1_we1 MemPortWE2 1 1 }  { p_1_d1 MemPortDIN2 1 32 }  { p_1_q1 MemPortDOUT2 0 32 } } }
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
