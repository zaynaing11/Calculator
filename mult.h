#ifndef MULT_H
#define MULT_H

#include "base.hpp"

//class CountVisitor;

class Mult: public Base{
private:
	Base* left;
	Base* right;

public:
	Mult(Base*, Base*);
	double evaluate();
	string stringify();
	Base* get_left();
	Base* get_right();
	Iterator* create_iterator();
	void accept(CountVisitor*);
};

#endif
