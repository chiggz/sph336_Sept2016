/*
     #Created on: Nov 12, 2016
            #Author: kedii Raphael(I39/2291/2015)
    #Decoder module
*/


#include<systemc.h>

SC_MODULE(decoder){
	//input and output ports
	sc_in<bool>a,b;
	sc_out<bool>c,d,e,f;
	//constructor:where the processes are bound to simulation kernel
	SC_CTOR(decoder){
		SC_METHOD(decode);
		sensitive<<a<<b;//sensitive to i0 and i1 which are the inputs
		//dont initialize

	}
	~decoder(){
		//delete stuff :P
	}
	void decode(void){
		if(a==0 && b==0){
			c=1;
			d=0;
			e=0;
			f=0;
		}
		else if(a==0 && b==1){
			c=0;
			d=1;
			e=0;
			f=0;
			}
			else if(a==1 && b==0){
			c=0;
			d=0;
			e=1;
			f=0;
			}
			else if(a==1 && b==1){
			c=0;
			d=0;
			e=0;
			f=1;
			}
	}
};
