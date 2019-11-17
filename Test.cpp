#include "Test.h"
#include <iostream>
using namespace std;

void Test::testSuite()
{


	cout<<"TESTS FOR isEmpty()";
	cout<<"\n-------------------";
	cout<<"\nTest 1: Newly created Queue is empty: "; isEmptyTest_1();
	cout<<"\nTest 2: Queue with one element is not empty: "; isEmptyTest_2();
	cout<<"\nTest 3: Queue with an enqueue and then dequeue is empty: "; isEmptyTest_3();

	cout<<"\n\nTESTS FOR peekFront()";
	cout<<"\n-------------------";
	cout<<"\nTest 1: Peek front on an empty queue: "; peekFrontTest_1();
	cout<<"\nTest 2: Peek front after one element is enqueued: "; peekFrontTest_2();
	//cout<<"\nTest 3: Enqueue five elements on empty queue then peekFront returns the first number enqueued: "; peekFrontTest_3();

	cout<<"\n\nTESTS FOR enqueue()";
	cout<<"\n-------------------";
	cout<<"\nTest 1: Enqueing a value makes the Queue not empty: "; enqueueTest_1();
	cout<<"\nTest 2: Enqueue 5 on empty queue then peekFront returns 5: "; enqueueTest_2();
	cout<<"\nTest 3: Enqueue five elements on empty queue then peekFront returns the first number enqueued: "; enqueueTest_2();

/*cout<<"\n\nTESTS FOR dequeue()";
	cout<<"\n-------------------";
	cout<<"\nTest 1: Dequeue a value makes the Queue not empty: "; dequeueTest_1();
	cout<<"\nTest 2: Enqueue 5 on empty queue then peekFront returns 5: "; dequeueTest_2();
	cout<<"\nTest 3: Enqueue five elements on empty queue then peekFront returns the first number enqueued: "; dequeueTest_2();
*/

	cout<<"\n";
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

//Peek front on an empty queue
void Test::peekFrontTest_1()
{
	Queue q;
	try
	{
    cout<<q.peekFront();
	}
	catch (std::runtime_error& e)
	{
		cout<<"PASSED and runtime exception successfully thrown ("<<e.what()<<")";
	}
}

//Peek front after one element is enqueued
void Test::peekFrontTest_2()
{
	Queue q;
	q.enqueue(100);
	if(q.peekFront()==100)
		{ cout<<"PASSED"; }
	else
		{ cout<<"FAILED"; }
}

void Test::peekFrontTest_3()
{

}


//ENQUEUE: Enqueing a value makes the Queue not empty
void Test::enqueueTest_1()
{
	Queue q;
	q.enqueue(2);
	if(q.isEmpty()==false)
		{ cout<<"PASSED"; }
	else
		{ cout<<"FAILED"; }
}

//ENQUEUE: Enqueue 5 on empty queue then peekFront returns 5
void Test::enqueueTest_2()
{
	Queue q;
	q.enqueue(2);
	if(q.peekFront()==2)
		{ cout<<"PASSED"; }
	else
		{ cout<<"FAILED"; }
}

//ENQUEUE: Enqueue 5 numbers, peek front to see if it is the first element inserted
void Test::enqueueTest_3()
{
	Queue q;
	for(int i=1; i<=5; i++)
	{
		q.enqueue(i);
	}
	if(q.peekFront()==1)
		{ cout<<"PASSED"; }
	else
		{ cout<<"FAILED"; }
}

void Test::dequeueTest_1()
{

}

void Test::dequeueTest_2()
{

}

void Test::dequeueTest_3()
{

}
