#ifndef __SORT_HPP__
#define __SORT_HPP__

#include "container.hpp"

class Container;

class Sort {
    public:
        /* Constructors */
        Sort() {};

        /* Pure Virtual Functions */
        virtual void sort(Container* container) = 0;
};

class SelectionSort : public Sort{
	public:
		SelectionSort() : Sort() {};
		void sort(Container* container);
};

class BubbleSort : public Sort{
	public:
		BubbleSort() : Sort() {};
		void sort(Container* container);
};
#endif //__SORT_HPP__
