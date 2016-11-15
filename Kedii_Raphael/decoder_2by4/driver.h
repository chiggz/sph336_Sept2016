/*
     #Created on: Nov 12, 2016
            #Author: kedii Raphael(I39/2291/2015)
    #Driver module
*/


#ifndef DRIVER_H_
#define DRIVER_H_
#include<systemc>

SC_MODULE(driver){
	sc_out<bool>a,b;
	SC_CTOR(driver){
	    SC_THREAD(drive);
	}
	void drive(void){
		while(1){
			d_a=0;
			d_b=0;
			wait(5,SC_NS);
			d_a=0;
			d_b=1;
			wait(5,SC_NS);
			d_a=1;
			d_b=0;
			wait(5,SC_NS);
			d_a=1;
			d_b=1;
			wait(5,SC_NS);
		}
	}
};
#endif
