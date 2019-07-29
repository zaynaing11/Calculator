#include <iostream>
#include <cmath>
#include "decorator.h"


Decorator::Decorator(Base* l, Base* r){
	left = l;
	right = r;
}
Base* Decorator::get_left(){
	return left;
}

Base* Decorator::get_right(){
	return right;
}
Iterator* Decorator::create_iterator(){ 
	return new BinaryIterator(this);
}

double Ceil::evaluate(){
		return ceil(decorate->evaluate());
}

double Floor::evaluate(){
		return floor(decorate->evaluate());
}
double Abs::evaluate(){
		return abs(decorate->evaluate());
}

string Ceil::stringify(){
		return to_string(ceil(decorate->evaluate()));
}
string Floor::stringify(){
                return to_string(floor(decorate->evaluate()));
}
string Abs::stringify(){
                return to_string(abs(decorate->evaluate()));
}



double Trunc::evaluate(){
	return trunc(decorate->evaluate());
}
string Trunc::stringify(){
		return to_string(trunc(decorate->evaluate()));
}

Paren::Paren(Base* l, Base* r){
	left = l;
	right = r;
}
double Paren::evaluate(){
		return (decorate->evaluate());
}
string Paren::stringify(){
		//std::string paren = std::string ("(") + left->evaluate();
		stringstream ss;
		ss << "(" << decorate->evaluate() << ")";
		string s = ss.str();
		return s;
		//return to_string( "(" + left->evaluate() + right->evaluate() + ")");
		//return std::string("(") +  ")";
		//return to_string(paren);
}

void Ceil::accept(CountVisitor* c_visit){
	c_visit->visit_ceil();
}

void Floor::accept(CountVisitor*c_visit){
	c_visit->visit_floor();
}

void Abs::accept(CountVisitor*c_visit){
	c_visit->visit_abs();
}

void Trunc::accept(CountVisitor*c_visit){
	c_visit->visit_trunc();
}

void Paren::accept(CountVisitor*c_visit){
	c_visit->visit_paren();
}
