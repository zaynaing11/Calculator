#include "PrecisionFactory.h"


Op* PrecisionFactory::createOp(double value){
        PrecisionOp* pFac = new PrecisionOp(value);
        return pFac;
}

Rand* PrecisionFactory::createRand(){
        PrecisionRand* randPFac = new PrecisionRand();
        return randPFac;
}
