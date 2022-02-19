// $Id: Fixed_Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.


#include "Fixed_Array.h"  //added this so the template can be made
#include <stdexcept>  


//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (void)
	:Array<T>::Array() //calling parent Array default constructor
{
	 
}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, N> & arr)
	:Array<T>::Array(arr) //calling parent Array copy constructor passing arr
{
	 
}

//
// Fixed_Array
//
template <typename T, size_t N>
template <size_t M>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, M> & arr)
	:Array<T>::Array(arr) //unsure of the purpose of this method, calling the copy constructor but with an array that is size M instead size N?
{
	 
	

}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (T fill)
	:Array<T>::Array(N,fill)
{
	 //calling parent Array initializing fill constructor 
}

//
// ~Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::~Fixed_Array (void)
{
	//I believe that the child class will call the parent classes constructor so there is no need to do it here 
}

//
// operator =
//

//Unsure of the difference between these 
template <typename T, size_t N>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, N> & rhs)
{
	if (this != &rhs)
	{
		Fixed_Array(rhs); //calling copy constructor
	}
	return *this;
}

//
// operator =
//
template <typename T, size_t N>
template <size_t M>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, M> & rhs)
{
	if (this != &rhs)
	{
		Fixed_Array(rhs); //calling copy constructor
	}
	return *this;
}
