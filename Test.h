#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <stdexcept>
#include "Queue.h"

class Test {
public:

  Test();

  ~Test();

  void run();

  void print(bool success);

  void testDeleteQueue();

  void testPopulatedQueue();

  void testIsEmptyReturnsTrue();

  void testIsEmptyReturnsFalse();

  void testEnqueueEmptyQueue();

  void testEnqueueAddsBack();

  void testPeekFrontReturns();

  void testPeekFrontNoError();

  void testPeekFrontError();

  void testPeekFrontPost();

};
#endif
