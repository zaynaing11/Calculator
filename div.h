#ifndef DIV_H
#define DIV_H

#include "base.hpp"
//#include "visitor.hpp"

//class CountVisitor;
class Div: public Base{
	private: 
		Base* left;
		Base* right;
	public: 
		Div(Base*,Base*);
		double evaluate();
		string stringify();
		Base* get_left();
		Base* get_right();
		Iterator* create_iterator();
		void accept(CountVisitor*);
};

#endif
