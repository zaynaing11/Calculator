#include <iostream>
#include "StandardDoubleFactory.h"

using namespace std;

Op* StandardDoubleFactory::createOp(double value){
	Op* stdDbleOp = new Op(value);
	return stdDbleOp;
}

Rand* StandardDoubleFactory::createRand(){
	//Rand* stdRand = new Rand();
	return new Rand();
}
