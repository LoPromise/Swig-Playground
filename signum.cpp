#include "signum.hpp"
#include <stdio.h>
#include <math.h>

#define ll long long

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
