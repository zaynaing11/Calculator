#ifndef LIST_CONTAINER_H
#define LIST_CONTAINER_H
#include <list>
#include "container.hpp"

class Sort;
class ListContainer: public Container{
	private:
		list<Base*> container;
	public:
		ListContainer(){};
		void add_element(Base*element);
		void print();
		void sort();
		void swap(int i, int j);
		Base* at(int i);
		int size();
};

#endif
