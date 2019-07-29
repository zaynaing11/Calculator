#ifndef SUB_H
#define SUB_H

#include "base.hpp"

class Sub: public Base{
	private:
		Base* left;
		Base* right;

	public:
		Sub(Base*,Base*);
		double evaluate();
		string stringify();
		Base* get_left();
		Base* get_right();		
		Iterator* create_iterator();
		void accept(CountVisitor*);
};

#endif
