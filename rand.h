#ifndef RAND_H
#define RAND_H

#include "base.hpp"
#include <iostream>

//class CountVisitor;

class Rand: public Base{
	private: 
		double value = rand() % 100;
	public:
		Rand();
		Rand(double num);
		double evaluate();
		string stringify();
		Base* get_left();
		Base* get_right();
		Iterator* create_iterator();
		void accept(CountVisitor*);
		~Rand();
};

#endif
