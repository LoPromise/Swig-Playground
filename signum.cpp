#include "signum.hpp"
#include <stdio.h>
#include <math.h>

void (*callbackptr)(void)=NULL;

int signum_calc(int n)
{
  return(n<0?-1:1);
}

void Register::addEntry(int t) {
	Entrys.push_back(t);
}

int Register::getEntry(int t) {
	return Entrys[t];
}

void Register::callback(void (*ptr)(void)) {
	Calllback_ptr=ptr;
}

void Register::triggerCallBack(void) {
	if(Calllback_ptr!=NULL)
		Calllback_ptr();
}

void global_callback(void (*ptr)(void)) {
	callbackptr=ptr;
}

void triggerCallback(void) {
	if(callbackptr!=NULL)
		callbackptr();
}
