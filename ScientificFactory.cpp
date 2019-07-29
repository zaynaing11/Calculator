#include "ScientificFactory.h"

using namespace std;

Op* ScientificFactory::createOp(double value){
        return new SciOp(value);
}

Rand* ScientificFactory::createRand(){
        return new SciRand();
}
