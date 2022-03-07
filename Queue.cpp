#include "Queue.h" 

template <typename T>
Queue <T>::Queue(void)
    :aggregationArray_(), front_(-1), back_(-1)
{

}


template <typename T>
Queue <T>::Queue(const Queue& queue)
    :aggregationArray_(queue.aggregationArray_), front_(queue.front_), back_(queue.back_)
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

    //add if statement to resize queue if it does not have enough space

    if (front_ == -1)
    {
        front_ = 0;
    }

    back_++;

    if (back_ == aggregationArray_.max_size())
    {
        aggregationArray_.resize(aggregationArray_.max_size() + 1);
    }

    

    aggregationArray_.set(back_, element);


}


// COMMENT This method should return a value.

template <typename T>
T Queue <T>::dequeue(void)
{
    T value = aggregationArray_.get(front_);// value of dequeue element
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

    return value;

}





template <typename T>
const Queue <T>& Queue <T>::operator = (const Queue& rhs)
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

    //created empty array object, set agggregrationArray_ to clearedQueue in order to reset the state and set front_ and back_ to -1
    Array<T> clearedQueue = Array<T>();
    front_ = -1;
    back_ = -1;
    aggregationArray_ = clearedQueue;

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
