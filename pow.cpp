#include "pow.h"

Pow::Pow(Base* l, Base* r): left(l), right(r){}

double Pow::evaluate(){
  	double result = 1.0;
	for(double i = 0; i < right->evaluate(); i++){
		result = result * left->evaluate();
	}
	return result;
}

string Pow::stringify(){
  double result = 1.0; 
  for(double i = 0; i < right->evaluate(); i++){
     result = result * left->evaluate();
  } 
  return to_string(result);
}

Base* Pow::get_left(){
	return left;
}

Base* Pow::get_right(){
	return right;
}
Iterator* Pow:: create_iterator(){
        return new BinaryIterator(this);
}
void Pow::accept(CountVisitor* c_visit){
	c_visit -> visit_pow();
}
