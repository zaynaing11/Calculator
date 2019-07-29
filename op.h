#ifndef OP_H
#define OP_H

#include "base.hpp"  
//#include "visitor.hpp"

#include <iostream>

//class CountVisitor;

class Op: public Base{
	private: 
		double value;
	public:
		Op();
		Op(double);
		double evaluate();
		string stringify();
		Base* get_left();
		Base* get_right();
		Iterator* create_iterator();
		void accept(CountVisitor*);
		~Op();
};

#endif
