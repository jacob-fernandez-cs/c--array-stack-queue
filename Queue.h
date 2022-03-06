


#ifndef _CS507_QUEUE_H_
#define _CS507_QUEUE_H_


#include "Array.h"
#include <exception>

// COMMENT You should use aggregation instead of inheritance since logically
// a queue is not an array. Because you are using inheritence, you are forced to hide
// methods that do not make sense to this class.

/**
 * @class Queue
 *
 * Basic queue for abitrary elements.
 */
template <typename T>
class Queue : public Array <T> //needs to inherit Array
{
public:
    /// Type definition of the type.
    typedef T type;
    /**
   * @class empty_exception
   *
   * Exception thrown to indicate the stack is empty.
   */
    class empty_exception : public std::exception
    {
    public:
        /// Default constructor.
        empty_exception(void)
            : std::exception() { }

       
    };

    //Default constructor
    Queue(void);

    /// Copy constructor.
    Queue(const Queue & s);

    /// Destructor.
    ~Queue(void);

    /**
    * Assignment operator
    *
    * @param[in]      rhs           Right-hand side of operator
    * @return         Reference to self
    */
    const Queue & operator = (const Queue & rhs);

    /**
     * adds the element to the end of the list;
     *
     * @param[in]      element       Element to add to the list
     */
    void enqueue(T element);

    /**
     * removes the element at the front of the list.If there are not elements in the queue, this method throws empty_exception
     *
     * @exception      empty_exception    The queue is empty.
     */
    void dequeue(void);


    /**
     * test if the queue is empty.  If the queue is empty, then this method returns true. Otherwise, this method returns false;
     *
     * @retval         true          The queue is empty
     * @retval         false         The queue is not empty
     */
    bool is_empty(void) const;

    /**
     * returns the number of elements in the queue
     *
     * @return         size of queue.
     */
    size_t size(void) const;

    /**
   * removes all elements from queue.
   */
    void clear(void);


private:
    int front_; //first element of queue
    int back_; //last element of queue



};
#include "Queue.cpp" 
#endif  // !defined _CS507_QUEUE_H_

