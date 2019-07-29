#include "iterator.h"

using namespace std;

void BinaryIterator::first(){
	curr_ptr = self_ptr -> get_left();
}
void BinaryIterator::next(){
	if(curr_ptr == self_ptr->get_left()){
		curr_ptr = self_ptr->get_right();
	}else{
		curr_ptr = nullptr;
	}
}
bool BinaryIterator::is_done(){
	if(curr_ptr == nullptr){
		return true;
	}
		return false;
	}
Base* BinaryIterator::current(){
	return curr_ptr;	
}




void UnaryIterator::first(){
	curr_ptr = self_ptr->get_left();
}
void UnaryIterator::next(){
	curr_ptr = nullptr;
}
bool UnaryIterator::is_done(){
	if (curr_ptr == nullptr){
		return true;
	}	
		return false;
	}
Base* UnaryIterator::current(){
	return curr_ptr;
}



void NullIterator::first(){return;};
void NullIterator::next(){return;};
bool NullIterator::is_done(){
	return true;
}
Base* NullIterator::current(){
	return nullptr;
}


void PreorderIterator::first(){
		// Empty the stack (just in case we had something leftover from another run)
		//Create an iterator for the Base* that we built the iterator for
		// Initialize that iterator and push it onto the stack
	Iterator* iter = self_ptr->create_iterator();
		if (iter != nullptr){
			iter->first();

		while(!iterators.empty()){
			iterators.pop();
			}
			iterators.push(iter);
		}
}
void PreorderIterator::next(){
		//Create an iterator for the current() of the iterator on the top of the stack
		//Initialize the iterator and push it onto the stack. As long as the top iterator 
		//on the stack is_done, pop it off the stack and then advance whatever iterator is
		//now on top of the stack
	Iterator* iter = iterators.top()->current()->create_iterator();
		iter->first();
			
		iterators.push(iter);
			
		while(!iterators.empty() && iterators.top()->is_done()){
			iterators.pop();
			if(iterators.empty()){
				break;
			}
			iterators.top()->next();
			}
}
bool PreorderIterator::is_done(){
		 // Return true if there are no more elements on the stack to iterate
	 return iterators.empty();
}
Base* PreorderIterator::current(){
		 // Return the current for the top iterator in the stack
	 return iterators.top()->current();
}

