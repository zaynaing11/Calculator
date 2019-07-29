#ifndef SCIOP_H
#define SCIOP_H

#include "op.h"

#include <iostream>
#include <sstream>


using namespace std;

class SciOp: public Op{
        private:
                double value;
        public:
                SciOp();
                SciOp(double);
		double evaluate();
                string stringify();
                ~SciOp();
};

#endif
