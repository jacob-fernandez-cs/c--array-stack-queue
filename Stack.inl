// -*- C++ -*-
// $Id: Stack.inl 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help on
// this assignment.

//
// size
//
template <typename T>
inline
size_t Stack <T>::size (void) const
{
	return top_;
}

//
// top
//
template <typename T>
inline
T Stack <T>::top (void) const
{
	if (top_ > 0)
		return aggregationArray_.get(top_ - 1);
	else
		throw empty_exception();
}

//
// is_empty
//
template <typename T>
inline
bool Stack <T>::is_empty (void) const
{
	if (top_ < 0)
	{
		return true;
	}
	else
		return false;
}
