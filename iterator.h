#ifndef ITERATOR_H
#define ITERATOR_H
#include "base.hpp"
#include <stack>
using namespace std;

class Base;

class Iterator {
    protected:
        Base* self_ptr;
	Base* curr_ptr;
    public:
	Iterator() : self_ptr(nullptr), curr_ptr(nullptr){}
        Iterator(Base* ptr) { this->self_ptr = ptr; this->curr_ptr = ptr;}

        /* Sets up the iterator to start at the beginning of traversal */
        virtual void first() = 0;
        
        /* Move onto the next element */
        virtual void next() = 0;
    
        /* Returns if you have finished iterating through all elements */
        virtual bool is_done() = 0;

        /* Return the element the iterator is currently at */
        virtual Base* current() = 0;
};

class BinaryIterator : public Iterator{
	public:
		//BinaryIterator() : Iterator() {}
		BinaryIterator(Base* ptr): Iterator(ptr){}
		void first();
		void next();
		bool is_done();
		Base* current();
};

class UnaryIterator : public Iterator{
	public:
		//UnaryIterator() : Iterator() {}
		UnaryIterator(Base* ptr) : Iterator(ptr) {}

		void first();
		void next();
		bool is_done();
		Base* current();
};

class NullIterator : public Iterator{
	public:
		//NullIterator() : Iterator() {}
		NullIterator(Base* ptr) : Iterator(ptr) {};

		void first();
		void next();
		bool is_done();
		Base* current();
};

class PreorderIterator : public Iterator{
	private:
		stack <Iterator*> iterators;
	public:
		PreorderIterator(Base* ptr) : Iterator(ptr) {};

		void first();
		// Empty the stack (just in case we had something leftover from another run)
		//Create an iterator for the Base* that we built the iterator for
		// Initialize that iterator and push it onto the stack
		void next();
		//Create an iterator for the current() of the iterator on the top of the stack
		//Initialize the iterator and push it onto the stack. As long as the top iterator 
		//on the stack is_done, pop it off the stack and then advance whatever iterator is
		//now on top of the stack
		bool is_done();
		 // Return true if there are no more elements on the stack to iterate
		Base* current();
		 // Return the current for the top iterator in the stack

};

#endif 
