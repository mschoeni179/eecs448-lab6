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
    testEmptyQueue();
    testIsEmpty();
    testDeleteEmptyQueue();
    //testPopulatedQueue();
    peekFrontError();
    peekFrontReturns();
    peekFrontPost();
}

void Test::testEmptyQueue()
{
  Queue p;
  std::cout<< "Test 1: constructor creates empty queue:";
  bool test = p.isEmpty();
  print(test);
}

void Test::testDeleteEmptyQueue()
{
  std::cout<<"Test 5: destructor deletes empty queue:";
  Queue* t = new Queue();
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

void Test::testIsEmpty()
{
  Queue p;
  std::cout<< "Test empty stack queue is empty:";
  bool test = p.isEmpty();
  print(test);

  Queue* ptr = new Queue();
  std::cout<< "Test empty heap queue is empty:";
  test = ptr->isEmpty();
  print(test);

  ptr->enqueue(5);
  test = !ptr->isEmpty();
  std::cout<< "Test populated heap queue is empty:";
  print(test);
  delete ptr;
}

void Test::peekFrontError()
{
  std::cout << "Test peekFront throws error for empty Queue:";
  Queue t;
  bool success = false;
  try {
    int num = t.peekFront();
    std::cout << num;
  }
  catch (std::exception& e)
  {
    success = true;
  }
  print(success);
}

void Test::peekFrontReturns()
{
  std::cout << "peekFront returns correct value for populated Queue";
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

void Test::peekFrontPost()
{
  std::cout << "peekFront does not change populated Queue";
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

Test::Test()
{

}

Test::~Test()
{

}
