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
    //checking if queue is full if it is resize this logic is wrong but im not sure how might need to figure out something else
    if(back_ == Array<T>::max_size() -1)
    {
        Array<T>::resize(Array<T>::max_size() + 1);
    }
    else
    { 
        if (front_ == -1)
        { 
            front_ = 0;
        }
            back_++;

            Array<T>::set(back_, element);
}

}


template <typename T>
void Queue <T>::dequeue(void)
{
    //check if queue is empty
    if (is_empty())
        throw empty_exception();
    else {
       if (is_empty()) {     
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
    Queue(rhs);
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