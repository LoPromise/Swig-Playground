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
class Register{
public:
	void addEntry(int);
	int getEntry(int i);
private:
	std::vector<int> Entrys;
};

#endif /* SIGNUM_HPP_ */
