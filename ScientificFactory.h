#ifndef SCIENTIFIC_FACTORY_H
#define SCIENTIFIC_FACTORY_H

#include "BaseFactory.h"
#include "SciOp.h"
#include "SciRand.h"

class ScientificFactory: public BaseFactory{
	public:
		ScientificFactory(){};
		Op* createOp(double value);
		Rand* createRand();
};
#endif

