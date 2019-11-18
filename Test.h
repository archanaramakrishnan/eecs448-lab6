/**
*	@file Queue.h
*	@author John Gibbons
*	@date 2014.04.02
*/

#ifndef TEST_H
#define TEST_H

#include "Queue.h"
#include <stdexcept>
class Test
{
	public:
    void testSuite();

    void isEmptyTest_1();
		void isEmptyTest_2();
		void isEmptyTest_3();
		void isEmptyTest_4();

		void peekFrontTest_1();
    void peekFrontTest_2();
		void peekFrontTest_3();
		void peekFrontTest_4();

    void enqueueTest_1();
    void enqueueTest_2();
		void enqueueTest_3();
		void enqueueTest_4();
		void enqueueTest_5();

		void dequeueTest_1();
    void dequeueTest_2();
		void dequeueTest_3();
};

#endif
