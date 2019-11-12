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

  void testEmptyQueue();

  void testDeleteEmptyQueue();

  void testPopulatedQueue();

  void testIsEmpty();

  void print(bool success);

  void peekFrontReturns();

  void peekFrontError();

  void peekFrontPost();

};
#endif
