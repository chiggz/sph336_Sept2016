/*
     #Created on: Nov 12, 2016
            #Author: kedii Raphael(I39/2291/2015)
    #monitor module
*/
#ifndef MONITOR_H_
#define MONITOR_H_

#include<iostream>
#include<systemc>
using namespace std;
SC_MODULE(monitor){
	sc_in<bool>m_a,m_b,m_c,m_d,m_e,m_f;
	SC_CTOR(monitor){
	SC_METHOD(monita);
	sensitive<<m_b<<m_c<<m_d<<m_e;
	dont_initialize();
	}
	void monita(void){
		cout<<"at"<<sc_time_stamp()<<"input are:"<<m_a<<"-"<<m_f<<"outputs are:"<<m_b<<"-"<<m_c<<"-"<<m_d<<"-"<<m_e<<endl;
	}
};
#endif
