/*
 * driver2by4.h
 *
 *  Created on: Oct 6th, 2016
 *      Author: Dominic
 */

#ifndef DRIVER4_H_
#define DRIVER4_H_

#include<systemc>

SC_MODULE(driver){
sc_out<bool> drver_a,drver_b;

SC_CTOR(driver){
	SC_THREAD(drive);
}

void drive(void){
	while(1){
		drver_a=0,drver_b=0;
		wait(5,SC_NS);
		
		drver_a=0,drver_b=1;
		wait(5,SC_NS);
		
		drver_a=1,drver_b=0;
		wait(5,SC_NS);
		
		drver_a=1,drver_b=1;
		wait(5,SC_NS);
	}
}
};
#endif /* DRIVER_H_ */
