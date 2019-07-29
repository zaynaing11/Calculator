#ifndef BASEFACTORY_H
#define BASEFACTORY_H

#include "op.h"
#include "rand.h"

using namespace std;


class BaseFactory {
	public:
		/* Constructor */
		BaseFactory(){};

		/* Pure Virtual Production Function */
        virtual Op* createOp(double value) = 0;
        virtual Rand* createRand() = 0;
};
#endif 
