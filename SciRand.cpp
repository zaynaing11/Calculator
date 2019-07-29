#include "SciRand.h"

SciRand::SciRand(){
	value = rand() % 100;
}
SciRand::SciRand(double num){
	num = rand() % 100;
	value = num;
}

double SciRand::evaluate(){
	return value;
}
string SciRand::stringify(){
	ostringstream streamObj;
	streamObj << fixed;
	streamObj << value;
	string strObj = streamObj.str();
	return strObj;

}
