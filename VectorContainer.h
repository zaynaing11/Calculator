#ifndef VECTORCONTAINER_H
#define VECTORCONTAINER_H

#include "base.hpp"
#include "container.hpp"
#include <vector>

class Sort;
class VectorContainer:public Container{
	private:
		vector<Base*> container;
	public:
		VectorContainer();
		void add_element(Base*);
		void print();
		void sort();
		void swap(int,int);
		Base* at(int);
		int size();

};
#endif
