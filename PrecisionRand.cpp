#include "PrecisionRand.h"

PrecisionRand::PrecisionRand(){
	value = rand() % 100;
}

PrecisionRand::PrecisionRand(double num){
	value = num;
}
double PrecisionRand::evaluate(){
	return value;
}
string PrecisionRand::stringify(){
	ostringstream streamObj;
	streamObj << fixed;
	streamObj << setprecision(3);
	streamObj << value;
	string strObj = streamObj.str();
	return strObj;
}
