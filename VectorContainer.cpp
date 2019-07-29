#include <iostream>
#include "container.hpp"
#include "base.hpp"
#include "sort.hpp"
#include "VectorContainer.h"
VectorContainer::VectorContainer(){}

void VectorContainer::add_element(Base* e){
	container.push_back(e);
}

void VectorContainer::print(){
	for(int i =0; i < container.size(); i ++){
		cout << container.at(i)->evaluate()<<endl;
	}
}
void VectorContainer::sort(){
	sort_function->sort(this);
}
void VectorContainer::swap(int a, int b){
	Base* temp = container.at(a);
	container.at(a) = container.at(b);
	container.at(b) = temp;
}

Base* VectorContainer::at(int a){
	return container.at(a);
}
int VectorContainer::size(){
	return container.size();
}
