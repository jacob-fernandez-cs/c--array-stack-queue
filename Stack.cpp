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
	:Array<T>::Array(), top_(0)// calling parent class constructor and setting top to 0 since there is no elements in the stack
{

}

//
// Stack
//
template <typename T>
Stack <T>::Stack (const Stack & stack)
	:Array<T>::Array(stack), top_(stack.top_) //calling parent class copy constructor and setting top equal to stack.top_
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
	if (top_ == Array<T>::max_size() ) //checking to make sure the stack has not exceeded the max_size_ value of the parent array class
	{
		Array<T>::resize(Array<T>::max_size()+ 1);
	}
		
		top_++;
		Array<T>::set(top_ - 1, element);
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
	Stack(rhs); //calling copy constructor
	

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
