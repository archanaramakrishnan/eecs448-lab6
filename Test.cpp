#include "Test.h"
#include <iostream>
using namespace std;

void Test::testSuite()
{


	cout<<"TESTS FOR isEmpty()";
	cout<<"\n-------------------";
	cout<<"\nTest 1: Newly created Queue is empty: "; isEmptyTest_1();
	cout<<"\nTest 1: Queue with one element is not empty: "; isEmptyTest_2();
	cout<<"\nTest 1: Que with an enqueue and then dequeue is empty: "; isEmptyTest_3();

	cout<<"\n\nTESTS FOR enqueue()";
	cout<<"\n-------------------";
	cout<<"\nTest 1: Enqueing a value makes the Queue not empty: "; enqueueTest_1();
	cout<<"\nTest 2: Enqueue 5 on empty queue then peekFront returns 5: "; enqueueTest_2();
}

//ISEMPTY: newly created empty queue
void Test::isEmptyTest_1()
{
	Queue q;
	if(q.isEmpty()==true)
		{ cout<<"PASSED"; }
	else
		{ cout<<"FAILED"; }
}

//ISEMPTY: queue with one element
void Test::isEmptyTest_2()
{
	Queue q;
	q.enqueue(2);
	if(q.isEmpty()==false)
		{ cout<<"PASSED"; }
	else
		{ cout<<"FAILED"; }
}

//ISEMPTY: enqueue once, dequeue once
void Test::isEmptyTest_3()
{
	Queue q;
	q.enqueue(2);
	q.dequeue();
	if(q.isEmpty()==true)
		{ cout<<"PASSED"; }
	else
		{ cout<<"FAILED"; }
}

void Test::enqueueTest_1()
{

}

void Test::enqueueTest_2()
{

}
