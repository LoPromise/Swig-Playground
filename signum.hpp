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
#include "Callback.h"

int signum_calc(int n);
// not the correct way of doing callbacks... https://stackoverflow.com/questions/12392703/what-is-the-cleanest-way-to-call-a-python-function-from-c-with-a-swig-wrapped
void global_callback(void (*ptr)(void));
void triggerCallback(void);

class Register{
public:
	Register();
	~Register();
	void addEntry(int);
	int getEntry(int i);
private:
	std::vector<int> Entrys;
};
//Note Restriction of this is that no variables can be passed directly...
class ICallback {
public:
    virtual void Call() = 0;
    virtual ~ICallback() {};
};

class Example{
public:
    void GiveCallback(ICallback* callback) {
        callback_ = callback;
    }

    void CallCallback() {
        callback_->Call();
    }

    ICallback * callback_;
};

#endif /* SIGNUM_HPP_ */
