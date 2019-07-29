#ifndef DECORATOR_H
#define DECORATOR_H

#include "sort.hpp"
#include "base.hpp"
#include "sstream"
#include <string>

using namespace std;

//class CountVisitor;

class Decorator:public Base{
	protected:
		Base* decorate;
		Base* left;
		Base* right;
	public:
		Decorator(){
			decorate = NULL;		
		};
		Decorator(Base* b){
			decorate = b;		
		}
		Decorator(Base*, Base*);
		virtual double evaluate() = 0;
		virtual std::string stringify() = 0;
		Base* get_left();
		Base* get_right();
		Iterator* create_iterator();
		//void accept(CountVisitor*);
};

class Ceil:public Decorator{
	public:
		Ceil(Base* b): Decorator(b){}
		 double evaluate();
		std::string stringify();
		void accept(CountVisitor*);
};

class Floor:public Decorator{
	public: 
		Floor(Base* b):Decorator(b){}
		double evaluate();
		std::string stringify();
		void accept(CountVisitor*);
};

class Abs:public Decorator{
	public: 
		Abs(Base* b):Decorator(b){}
		double evaluate();
		std::string stringify();
		void accept(CountVisitor*);
};

class Trunc:public Decorator{
	public:
		Trunc(Base*b):Decorator(b){}
		double evaluate();	
		std::string stringify();
		void accept(CountVisitor*);
};

class Paren:public Decorator{
	private:
		Base* left;
		Base* right;
	public:
		Paren(Base*b):Decorator(b){}
		Paren(Base*, Base*);
		double evaluate();
		std::string stringify();
		void accept(CountVisitor*);
};
#endif
