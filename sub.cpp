#include "sub.h"

Sub::Sub(Base* l, Base* r): left(l), right(r){}

double Sub::evaluate(){
  return left->evaluate() - right->evaluate();
}

string Sub::stringify(){
  return to_string(left->evaluate()-right->evaluate());
}
Base* Sub::get_left(){
	return left;
}

Base* Sub::get_right(){
	return right;
}
Iterator* Sub::create_iterator(){
        return new BinaryIterator(this);
}
void Sub::accept(CountVisitor* c_visit){
	c_visit->visit_sub();
}
