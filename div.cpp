#include "div.h"

Div::Div(Base* l, Base* r): left(l), right(r){}

double Div::evaluate(){
  return left->evaluate() / right->evaluate();
}

string Div::stringify(){
  return to_string(left->evaluate()/right->evaluate());
}

Base* Div::get_left(){
	return left;
}
Base* Div::get_right(){
	return right;
}
Iterator* Div::create_iterator(){
        return new BinaryIterator(this);
}
void Div::accept(CountVisitor* c_visit){
	c_visit -> visit_div();
}
