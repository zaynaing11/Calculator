#include <iostream>
#include <list>
//#include "strategy.h"
#include "ListContainer.h"
//#include "component.h"
#include "container.hpp"

using namespace std;

void ListContainer::add_element(Base* element) {
	container.push_back(element);
}

void ListContainer::print() {
	list<Base*>::iterator ind;

	for (ind = container.begin(); ind != container.end(); ++ind) {
		cout << (*ind)->evaluate() << endl;
	}
}

void ListContainer::sort() {
	sort_function->sort(this);
}

void ListContainer::swap(int i, int j) {
	list<Base*>::iterator it = container.begin();
	int counter = i;

	while (counter != 0) {
		++it;
		--counter;
	}

	//repeat again for int j
	list<Base*>::iterator it1 = container.begin();
	int counter1 = j;

	while (counter1 != 0) {
		++it1;
		--counter1;
	}

	//swap
	Base* temp = *it;
	*it = *it1;
	*it1 = temp;
}

Base* ListContainer::at(int i) {
	list<Base*>::iterator ind = container.begin();
	int counter = i;

	while (counter != 0) {
		++ind;
		--counter;
	}

	return *ind;
}

int ListContainer::size() {
	return container.size();
}
