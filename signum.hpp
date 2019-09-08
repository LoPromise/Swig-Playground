/*
 * gfg.hpp
 *
 *  Created on: Sep 7, 2019
 *      Author: root
 */

#ifndef SIGNUM_HPP_
#define SIGNUM_HPP_
#include <string>
#include <vector>

int signum_calc(int n);
// not the correct way of doing callbacks... https://stackoverflow.com/questions/12392703/what-is-the-cleanest-way-to-call-a-python-function-from-c-with-a-swig-wrapped
void global_callback(void (*ptr)(void));
void triggerCallback(void);

class Register{
public:
	void addEntry(int);
	int getEntry(int i);
	void callback(void (*ptr)(void));
	void triggerCallBack(void);
private:
	void (*Calllback_ptr)(void)=NULL;
	std::vector<int> Entrys;
};

#endif /* SIGNUM_HPP_ */
