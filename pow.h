#ifndef POW_H
#define POW_H

#include "base.hpp"

//class CountVisitor;

class Pow: public Base{
	private:
		Base* left;
		Base* right;

	public:
		Pow(Base*,Base*);
		double evaluate();
		string stringify();
		Base* get_left();
		Base* get_right();		
		Iterator* create_iterator();
		void accept(CountVisitor*);
};

#endif
