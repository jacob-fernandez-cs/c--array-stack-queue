// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array.h"
#include <stdexcept>         // for std::out_of_bounds exception

//
// Array
//
template <typename T>
Array <T>::Array (void)
	:basic_array<T>::basic_array()
{

}

//
// Array (size_t)
//
template <typename T>
Array <T>::Array (size_t length)
	:basic_array<T>::basic_array(length)

{

}

//
// Array (size_t, char)
//
template <typename T>
Array <T>::Array (size_t length, T fill)
	:basic_array<T>::basic_array(length, fill)
{
	
}

//
// Array (const Array &)
//
template <typename T>
Array <T>::Array (const Array & array)
	:basic_array<T>::basic_array(array)
{

}

//
// ~Array
//
template <typename T>
Array <T>::~Array (void)
{
	
}

//
// operator =
//
template <typename T>
const Array <T> & Array <T>::operator = (const Array & rhs)
{
	if (this != &rhs)
	{
		Array(rhs);
	}
	return *this;
}


//
// resize
//
template <typename T>
void Array <T>::resize (size_t new_size)
{
	if (new_size > this->max_size_)
	{

		

		T* tempArr = new T[new_size];
		this->max_size_ = new_size;
		this->cur_size_ = new_size;

		for (int i = 0; i < this->cur_size_; i++)
		{
			tempArr[i] = this->data_[i];
		}

		delete[] this->data_;
		this->data_ = tempArr;


	}
	else if (new_size < this->cur_size_)
	{
		
		this->cur_size_ = new_size;
	}
	else if (new_size > this->cur_size_ && new_size <= this->max_size_)
	{
		
		this->cur_size_ = new_size;
	}
}


