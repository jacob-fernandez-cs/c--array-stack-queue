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
	:data_(new T[0]),
	cur_size_(0),
	max_size_(0)
{

}

//
// Array (size_t)
//
template <typename T>
Array <T>::Array (size_t length)
	: data_(new T[length * 2]),
	cur_size_(length),
	max_size_(length * 2)

{

}

//
// Array (size_t, char)
//
template <typename T>
Array <T>::Array (size_t length, T fill)
	: data_(new T[length * 2]),
	cur_size_(length),
	max_size_(length * 2)
{
	for (int i = 0; i < cur_size_; i++)
	{
		data_[i] = fill;


	}
}

//
// Array (const Array &)
//
template <typename T>
Array <T>::Array (const Array & array)
	:data_(new T[array.cur_size_]),
	cur_size_(array.cur_size_),
	max_size_(array.max_size_)
{
	for (int i = 0; i < array.cur_size_; i++)
	{
		data_[i] = array.data_[i];

	}
}

//
// ~Array
//
template <typename T>
Array <T>::~Array (void)
{
	delete[] data_;
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
// operator []
//
template <typename T>
T & Array <T>::operator [] (size_t index)
{
	if (index < cur_size_)
	{
		return data_[index];
	}
	else
		throw std::out_of_range("out of range error");
}

//
// operator [] 
//
template <typename T>
const T & Array <T>::operator [] (size_t index) const
{
	if (index < cur_size_)
	{
		return data_[index];
	}
	else
		throw std::out_of_range("out of range error");
}

//
// get
//
template <typename T>
T Array <T>::get (size_t index) const
{
	if (index < cur_size_)
	{
		return data_[index];
	}
	else
		throw std::out_of_range("out of range error");

}

//
// set
//
template <typename T>
void Array <T>::set (size_t index, T value)
{
	if (index < cur_size_)
	{
		data_[index] = value;
	}
	else
		throw std::out_of_range("out of range error");
}

//
// resize
//
template <typename T>
void Array <T>::resize (size_t new_size)
{
	if (new_size > max_size_)
	{

		

		T* tempArr = new T[new_size];
		max_size_ = new_size;
		cur_size_ = new_size;

		for (int i = 0; i < cur_size_; i++)
		{
			tempArr[i] = data_[i];
		}

		delete[] data_;
		data_ = tempArr;


	}
	else if (new_size < cur_size_)
	{
		
		cur_size_ = new_size;
	}
	else if (new_size > cur_size_ && new_size <= max_size_)
	{
		
		cur_size_ = new_size;
	}
}

//
// find (char)
//
template  <typename T>
int Array <T>::find (T value) const
{
	for (int i = 0; i < cur_size_; i++)
	{
		if (data_[i] == value)
		{
			return i;
		}

	}

	return -1;

}

//
// find (char, size_t) 
//
template <typename T>
int Array <T>::find (T val, size_t start) const
{
	if (start < cur_size_)
	{
		for (int i = start; i < cur_size_; i++)
		{
			if (data_[i] == val)
			{
				return i;
			}

		}
	}
	else
		throw std::out_of_range("out of range error");

	return -1;
}

//
// operator ==
//
template <typename T>
bool Array <T>::operator == (const Array & rhs) const
{
	if (this != &rhs)
	{
		if (cur_size_ == rhs.cur_size_)
		{
			for (int i = 0; i < cur_size_; i++)
			{
				if (data_[i] != rhs.data_[i])
				{
					return false;
				}
			}
		}
		else
			return false;
	}
	return true;
}

//
// operator !=
//
template <typename T>
bool Array <T>::operator != (const Array & rhs) const
{
	if (*this == rhs)
	{
		return false;
	}
	else
		return true;
}

//
// fill
//
template <typename T>
void Array <T>::fill (T value)
{
	for (int i = 0; i < cur_size_; i++)
	{
		data_[i] = value;
	}
}
