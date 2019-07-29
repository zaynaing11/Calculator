#ifndef ADD_H
#define ADD_H

#include "base.hpp"

//class CountVisitor;

class Add: public Base{
	private:
		Base* left;
		Base* right;

	public:
		Add(Base*,Base*);
		double evaluate();
		string stringify();
		Base* get_left();
		Base* get_right();		
		Iterator* create_iterator();
		void accept(CountVisitor*);
};

#endif
