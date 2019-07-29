#include "PrecisionOp.h"

PrecisionOp::PrecisionOp(){
	value = 0;
}

PrecisionOp::PrecisionOp(double num){
	value = num;
}

double PrecisionOp::evaluate(){
	return value;
}
string PrecisionOp::stringify(){
	ostringstream streamObj;
	streamObj << fixed;
	streamObj << setprecision(3);
	streamObj << value;
	string strObj = streamObj.str();
	return strObj;
}
