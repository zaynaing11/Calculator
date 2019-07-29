#include "mult.h"


Mult::Mult(Base* l, Base* r){
	left = l;
	right = r;
}

double Mult::evaluate(){
	return  left->evaluate() * right->evaluate();
}

string Mult::stringify(){
	return to_string(left->evaluate()*right->evaluate());
}

Base* Mult::get_left(){
	return left;
}
Base* Mult::get_right(){
	return right;
}
Iterator* Mult::create_iterator(){
	return new BinaryIterator(this);
}
void Mult::accept(CountVisitor* c_visit){
	c_visit -> visit_mult();
}
