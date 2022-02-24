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
   
   
   
        if (front_ == -1)
        { 
            front_ = 0;
        }
            
        back_++;

        Array<T>::set(back_, element);


}


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