#include "Queue.h" 

template <typename T>
Queue <T>::Queue(void)
    :Array<T>::Array(), front_(-1), back_(-1)
{

}


template <typename T>
Queue <T>::Queue(const Queue & queue)
    :Array<T>::Array(queue), front_(queue.front_), back_(queue.back_)
{


}


template <typename T>
Queue<T>::~Queue(void)
{
   

}


template <typename T>
void Queue <T>::enqueue(T element)
{
   
    // COMMENT The queue will fail if the array runs out of space. Since this
    // is an unboudned queue, you need to resize the array to make space for
    // new elements. Also, make sure you do not waste any space if you must
    // resize the array to accommodate new elements. This will require updates
    // to your dequeue method.
   
        if (front_ == -1)
        { 
            front_ = 0;
        }
            
        back_++;

        Array<T>::set(back_, element);


}


// COMMENT This method should return a value.

template <typename T>
void Queue <T>::dequeue(void)
{
    //check if queue is empty
    if (is_empty())
        throw empty_exception();
    else {
       if (front_ >= back_) 
           {     
            front_ = -1;
            back_ = -1;
        }
        else {
            front_++;
        }
    }
}


template <typename T>
const Queue <T>& Queue <T>::operator = (const Queue & rhs)
{
    if (this != &rhs)
    {
        Queue(rhs); //calling copy constructor
    }
    return *this;
}


template <typename T>
void Queue <T>::clear(void)
{
    // COMMENT This works, but is a very expensive operation. You should find a
    // way to just reset the state without having to dequeue every element.
    
   //while the front is not -1 dequeue
    while (front_ != -1)
        dequeue();
}

template <typename T>
size_t Queue<T>::size(void) const
{
    if (front_ == -1)
    {
        return 0;
    }
    else
        return (back_ + 1);
}

template <typename T>
bool Queue<T>::is_empty(void) const
{
    if (front_ == -1)
        return true;
    else
        return false;
}
