#ifndef PRECISIONRAND_H
#define PRECISIONRAND_H

#include "rand.h"

#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

class PrecisionRand: public Rand{
	private: 
		double value = rand() % 100;
	public:
		PrecisionRand();
		PrecisionRand(double);
		double evaluate();
		string stringify();	
		~PrecisionRand();
};

#endif
