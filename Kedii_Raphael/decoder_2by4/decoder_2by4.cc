/*
     #Created on: Nov 12, 2016
            #Author: kedii Raphael(I39/2291/2015)
    #decoder_2by4
*/


#include"decoder0_2by4.h"
#include"driver3.h"
#include"monitor3.h"
#include<systemc.h>
int sc_main(int argc, char *argv[]){
	//some signals for interconections
	sc_signal<bool>in0,in1,out0,out1,out2,out3;
	//module instances
	driver dr("driver_instance");
	decoder dec("decoder_instance");
	monitor mn("monitor_instance");
	//interconnections between modules instances.port()
	dr.d_a(in0);
	dr.d_b(in1);
	dec.a(in0);
	dec.b(in1);
	mn.m_a(in0);
	mn.m_f(in1);
	dec.c(out0);
	dec.d(out1);
	dec.e(out2);
	dec.f(out3);
	//monitor outputs
	mn.m_b(out0);
	mn.m_c(out1);
	mn.m_d(out2);
	mn.m_e(out3);
	//create a trace file with nanosecond resolution
	sc_trace_file*tf;
	tf=sc_create_vcd_trace_file("timing_diagram");
	tf->set_time_unit(1, SC_NS);
	//trace the signals interconnecting modules
	sc_trace(tf,in0,"binary_input1");//signals to be traced
	sc_trace(tf,in1,"binary_input2");
	sc_trace(tf,out0,"input_is_zero");
	sc_trace(tf,out1,"input_is_one");
	sc_trace(tf,out2,"input_is_two");
	sc_trace(tf,out3,"input_is_three");
	//run a simulation for 50 systemc nano-seconds
	if(!sc_pending_activity())
		sc_start(50,SC_NS);
	  //close the trace file
	sc_close_vcd_trace_file(tf);
	return 0;
}
