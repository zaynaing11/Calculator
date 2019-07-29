#include "add.h"

Add::Add(Base* l, Base* r){
	left = l;
	right = r;
}

//Add::Add(Base* l, Base* r): left(l), right(r){}

double Add::evaluate(){
  return left->evaluate() + right->evaluate();
}

string Add::stringify(){
  return to_string(left->evaluate()+right->evaluate());
}

Base* Add::get_left(){
	return left;
}

Base* Add::get_right(){
	return right;
}
Iterator* Add::create_iterator(){
	return new BinaryIterator(this);
}
void Add::accept(CountVisitor* c_visit){
	c_visit -> visit_add();
}
