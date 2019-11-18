/**
*	@file main.cpp
*	@author John Gibbons
*	@date 2014.04.02
*/

#include <iostream>
#include <stdexcept>
#include "Queue.h"
#include "Test.h"

int main()
{
	Queue q;
	Test t;
	t.run();

	// q.enqueue(1);
	// int num = q.peekFront();
	// std::cout << "front " << num << "\n";
	// q.enqueue(2);
	// num = q.peekFront();
	// std::cout << num << " after adding\n";
	// q.enqueue(3);
	// num = q.peekFront();
	// std::cout << num << " after adding again\n";
	// q.dequeue();
	// num = q.peekFront();
	// std::cout << num << " after deleting one\n";
	// q.dequeue();
	// num = q.peekFront();
	// std::cout << num << " after deleting twice\n";
	// std::cout << "\n\n\n";

	// Queue* ptr = new Queue ();
	// ptr->enqueue(9);
	// ptr->enqueue(8);
// 	delete ptr;
	return(0);
}
