#ifndef PRECISION_FACTORY_H
#define PRECISION_FACTORY_H

#include "BaseFactory.h"

#include "PrecisionOp.h"
#include "PrecisionRand.h"
class PrecisionFactory: public BaseFactory{
	public:
		PrecisionFactory(){};
		Op* createOp(double value);
		Rand* createRand();
};
#endif
