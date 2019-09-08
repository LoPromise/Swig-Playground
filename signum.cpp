#include "signum.hpp"
#include <stdio.h>
#include <math.h>
#include <iostream>

void (*callbackptr)(void)=NULL;

int signum_calc(int n)
{
  return(n<0?-1:1);
}

void Register::addEntry(int t) {
	Entrys.push_back(t);
}

Register::Register(){}

int Register::getEntry(int t) {
	//Careful no BoundryChecks apply... so check if limiters apply
	if(t<=Entrys.size())
		return Entrys[t];
	throw std::runtime_error("Entry not in Vector");
}

void global_callback(void (*ptr)(void)) {
	callbackptr=ptr;
}

void triggerCallback(void) {
	if(callbackptr!=NULL)
		callbackptr();
}

Register::~Register() {
}

