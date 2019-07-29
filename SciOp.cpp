#include "SciOp.h"

SciOp::SciOp(){
        value = 0;
}

SciOp::SciOp(double num){
        value = num;
}

double SciOp::evaluate(){
	return value;
}
string SciOp::stringify(){
        ostringstream streamObj;
        streamObj << fixed;
        streamObj << value;
        string strObj = streamObj.str();
        return strObj;
}

