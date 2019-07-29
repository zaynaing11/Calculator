#ifndef SCIRAND_H
#define SCIRAND_H

#include "rand.h"

#include <iostream>
#include <sstream>


using namespace std;

class SciRand: public Rand{
        private:
                double value = rand() % 100;
        public:
		SciRand();
                SciRand(double num);
		double evaluate();
                string stringify();
};

#endif
