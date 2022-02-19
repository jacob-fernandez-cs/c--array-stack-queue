#include "Fixed_Array.cpp"
#include "Array.cpp"
#include "Stack.cpp"
#include "Queue.cpp"
#include <iostream>

int main(int argc, char* argv[])
{
	//const Array<int> fill = Array<int>(5,5);
	
	//Fixed_Array<int, 5> * test = new Fixed_Array<int, 5>(5);
	//Fixed_Array<int, 5> * test2 = new Fixed_Array<int, 5>(0);

	Stack<int>* stackTest = new Stack<int>();
	Stack<int>* stackTest2 = new Stack<int>();

	Queue<int>* QueueTest = new Queue<int>();

	QueueTest->enqueue(5);
	QueueTest->enqueue(6);
	QueueTest->enqueue(7);
	//QueueTest->dequeue();
	
	std::cout << QueueTest->get(1) << std::endl;
	std::cout << QueueTest->size() << std::endl; 
	


	/*
	stackTest->push(5);
	stackTest->push(6);
	stackTest->push(7);
	//stackTest->pop();

	stackTest2->push(8);
	stackTest2->push(9);
	stackTest2->push(10);
	//stackTest->pop();

	//stackTest->clear();

	//std::cout << stackTest->size() << std::endl; 
	std::cout << stackTest->top() << std::endl;
	stackTest = stackTest2;
	std::cout << stackTest->top() << std::endl;
	*/
	//Array<int> * test = new Array<int>(5,5);
	//Array<int> * test2 = new Array<int>(5,0);

	//test->fill(5);
	//test2->fill(5);
	
	//test = test2;
	/*
	//printing the contents of the array
	for (int i = 0; i < test->size(); i++)
	{
		std::cout << test->get(i) ;
	}
	std::cout << std::endl;
	for (int i = 0; i < test2->size(); i++)
	{
		std::cout << test2->get(i);
	}
	std::cout << std::endl;

	if (test == test2)
	{
		std::cout << "test equals test2" << std::endl;
	}
	else
	{
		if (test != test2)
		{
			std::cout << "test does not equal test2" << std::endl;
		}
	}
	
	test->set(4,6);
	std::cout << test->find(6) << std::endl;

	//test->fill(4);

	std::cout << test->get(3) << std::endl;
	std::cout << test2->get(3) << std::endl;


*/

	//notes about assignment 
}