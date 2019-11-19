/**
 * Tests the methods in a Queue
*	@file Test.h
*	@author Malena Schoeni
*	@date 11/17/19
*/


#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <stdexcept>
#include "Queue.h"

class Test {
public:

  /**
   * Empty Test constructor
   * @param none
   */
  Test();

  /**
   * Empty Test destructor
   * @param none
   */
  ~Test();

  /**
   * Runs all test cases
   * @param none
   */
  void run();

  /**
   * Prints PASSED or FAILED for a test case
   * @param bool success (true if test case passed)
   */
  void print(bool success);

  /**
   * Tests if a queue ptr is set to nullptr after destructor is called
   * @param none
   */
  void testDeleteQueue();

  /**
   * Tests if a queue ptr is set to nullptr after destructor is called
   * @param none
   */
  void testPopulatedQueue();

  /**
   * Tests if a queue isEmpty is true if the queue is empty
   * @param none
   */
  void testIsEmptyReturnsTrue();

  /**
   * Tests if a queue isEmpty is false if the queue has values
   * @param none
   */
  void testIsEmptyReturnsFalse();

  /**
   * Tests if enqueue correctly adds to an empty queue (no longer empty)
   * @param none
   */
  void testEnqueueEmptyQueue();

  /**
   * Tests if enqueue adds to the back of queue (maintains order)
   * @param none
   */
  void testEnqueueAddsBack();

  /**
   * Tests peekFront returns the correct first value in the queue
   * @param none
   */
  void testPeekFrontReturns();

  /**
   * Tests peekfront throws no error for a non-empty queue
   * @param none
   */
  void testPeekFrontNoError();

  /**
   * Tests if peekfront throws an error if the queue is empty
   * @param none
   */
  void testPeekFrontError();

  /**
   * Tests peekfront doesn't change the order of the queue
   * @param none
   */
  void testPeekFrontPost();

};
#endif
