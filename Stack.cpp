// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
#include "Stack.h" 
//
// Stack
//
template <typename T>
Stack <T>::Stack (void)
	:aggregationArray_(), top_(0)// changed to calling default constuctor of member object and set top_ to 0
{

}

//
// Stack
//
template <typename T>
Stack <T>::Stack (const Stack & stack)
	:aggregationArray_(stack.aggregationArray_), top_(stack.top_) //changed to calling copy constuctor and setting top equal to stack.top_
{

}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack (void)
{
	//parent class destructor will be called
}

//
// push
//
template <typename T>
void Stack <T>::push (T element)
{
	if (top_ == aggregationArray_.max_size() ) //checking to make sure the stack has not exceeded the max_size_ value 
	{
		
		aggregationArray_.resize(aggregationArray_.max_size() + 1);
	}
		
		top_++;
		
		aggregationArray_.set(top_ - 1, element);
}

//
// pop
//
template <typename T>
void Stack <T>::pop (void)
{
	if (top_ < 0) //making sure the stack isnt empty
		throw empty_exception();
	
		
	
	top_--;
}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
	if (this != &rhs)
	{
		Stack(rhs); //calling copy constructor
	}
	return *this;
}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{
	//while the stack is not empty pop elements off until it is empty
	while (top_ > 0)
	{
		pop();
	}
}
