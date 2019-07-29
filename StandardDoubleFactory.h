#ifndef STANDARD_DOUBLE_FACTORY_H
#define STANDARD_DOUBLE_FACTORY_H

#include "BaseFactory.h"

class StandardDoubleFactory: public BaseFactory{
	public:
		StandardDoubleFactory(){};
		Op* createOp(double value);
		Rand* createRand();
};
#endif
