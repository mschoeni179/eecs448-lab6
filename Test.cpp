#include "Test.h"

void Test::print (bool success)
{
  if (success)
  {
    std::cout <<" PASSED\n";
  }
  else
  {
    std::cout<< " FAILED\n";
  }
}

void Test::run()
{
    testIsEmptyReturnsTrue();
    testIsEmptyReturnsFalse();
    testEnqueueEmptyQueue();
    testPeekFrontError();
    testPeekFrontNoError();
    testPeekFrontReturns();
    testPeekFrontPost();
    testDeleteQueue();
}

void Test::testIsEmptyReturnsTrue()
{
  Queue p;
  std::cout<< "Test 1: isEmpty() returns true for empty Queue:";
  bool test = p.isEmpty();
  print(test);
}

void Test::testIsEmptyReturnsFalse()
{
  Queue p;
  std::cout<< "Test 2: isEmpty() returns false for populated Queue";
  bool test = !p.isEmpty();
  print(test);
}

void Test::testEnqueueEmptyQueue()
{
  Queue p;
  std::cout << "Test 3: enqueue() adds to empty queue (no longer empty):";
  p.enqueue(1);
  bool test = p.isEmpty();
  print(test);
}

void Test::testEnqueueAddsBack()
{
  std::cout << "Test 4: enqueue() adds to back of a populated Queue:";
  Queue p;
  p.enqueue(1);
  p.enqueue(2);
  bool success = false;
  try {
    p.dequeue();
    if (p.peekFront() == 2)
    {
      success = true;
    }
    print(success);
  }
  catch (...)
  {
    print(success);
  }
}

void Test::testPeekFrontError()
{
  std::cout << "Test 5: peekFront() throws std::runtime_error for empty Queue:";
  Queue t;
  bool success = false;
  try {
    int num = t.peekFront();
    std::cout << num;
  }
  catch (std::runtime_error& e)
  {
    success = true;
  }
  print(success);
}

void Test::testPeekFrontNoError()
{
  std::cout << "Test 6: peekFront() doesn't throw error for populated Queue:";
  Queue t;
  t.enqueue(3);
  bool success = true;
  try 
  {
    int num = t.peekFront();
  }
  catch (...)
  {
    success = false;
  }
  print(success);
}

void Test::testPeekFrontReturns()
{
  std::cout << "Test 7: peekFront() returns correct front value for populated Queue";
  Queue t;
  t.enqueue(1);
  bool success = false;
  try {
    int num = t.peekFront();
    if(num == 1)
    {
      success = true;
    }
  }
  catch (std::exception& e)
  {
    success = false;
  }
  print(success);
}

void Test::testPeekFrontPost()
{
  std::cout << "Test 8: peekFront() does not change populated Queue";
  Queue t;
  t.enqueue(1);
  bool success = false;
  try {
    int num = t.peekFront();
    t.dequeue();
    if (t.isEmpty())
    {
      success = true;
    }
  }
  catch (std::exception& e)
  {
    success = false;
  }
  print(success);
}

void Test::testDeleteQueue()
{
  std::cout<< "Test 9: destructor sets queue* ptr back to nullptr after deletion";
  Queue* t = new Queue();
  t->enqueue(5);
  delete t;
  bool success = false;
  if (t == nullptr)
  {
    success = true;
  }
  print(success);

}


void Test::testPopulatedQueue()
{
  std::cout<<"Test 3: destructor deletes queue with 1 value:";
  Queue* t = new Queue();
  t->enqueue(3);
  delete t;
  bool success = false;
  if (t == nullptr)
  {
    success = true;
  }
  print(success);
  // std::cout<<"Test destructor deletes queue with 2 values:";
  // Queue* two = new Queue();
  // two->enqueue(3);
  // delete two;
  // success = false;
  // if (two == nullptr)
  // {
  //   success = true;
  // }
  // print(success);
  // std::cout<<"Test destructor deletes queue with 5 values:";
  // Queue* five = new Queue();
  // five->enqueue(3);
  // five->enqueue(1);
  // five->enqueue(7);
  // five->enqueue(2);
  // five->enqueue(6);
  //
  // delete five;
  // success = false;
  // if (five == nullptr)
  // {
  //   success = true;
  // }
  // print(success);
}

Test::Test()
{

}

Test::~Test()
{

}
