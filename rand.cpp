#include "rand.h"

Rand::Rand(){
	value = rand() % 100;	
}
Rand::Rand(double num) : value (num){}

double Rand::evaluate(){
	return value;
}

string Rand::stringify(){
  return to_string(value);
}
Base* Rand::get_left(){
	return nullptr;
}

Base* Rand::get_right(){
	return nullptr;
}
Iterator* Rand::create_iterator(){
	return new NullIterator(this);
}

void Rand::accept(CountVisitor* c_visit){
	c_visit->visit_rand();
}
