#include "Test.h"
#include <iostream>
using namespace std;

void Test::testSuite()
{


	cout<<"TESTS FOR isEmpty()";
	cout<<"___________________";
	cout<<"Test 1: Newly created Queue is empty: "; isEmptyTest_1();

	cout<<"TESTS FOR enqueue()";
	cout<<"___________________";
	cout<<"Test 1: Enqueing a value makes the Queue not empty:: "; enqueueTest_1();
	cout<<"Test 2: Enqueue 5 on empty queue then peekFront returns 5: "; enqueueTest_2();
}

void Test::isEmptyTest_1()
{

}

void Test::enqueueTest_1()
{

}

void Test::enqueueTest_2()
{

}
