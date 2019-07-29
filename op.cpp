#include "op.h"

Op::Op(){
	value = 0;
}

Op::Op(double num){
	value = num;
}

double Op::evaluate(){
	return value;
}

string Op::stringify(){
  return to_string(value);
}

Base* Op::get_left(){
	return nullptr;
}
Base* Op::get_right(){
	return nullptr;
}
Iterator* Op:: create_iterator(){
	Iterator* nullIt = new NullIterator(this);
	return nullIt;
}
void Op::accept(CountVisitor* c_visit){
	c_visit -> visit_op();
}
