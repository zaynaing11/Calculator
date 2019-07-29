#ifndef PRECISIONOP_H
#define PRECISIONOP_H

#include "op.h"

#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

class PrecisionOp: public Op{
	private: 
		double value;
	public:
		PrecisionOp();
		PrecisionOp(double);
		double evaluate();
		string stringify();	
		~PrecisionOp();
};

#endif
