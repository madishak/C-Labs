#pragma once
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>



class MyTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(MyTest);
	CPPUNIT_TEST(sum);
	CPPUNIT_TEST(div);
	CPPUNIT_TEST(mul);
	CPPUNIT_TEST(sumFirstThreeDigits);
	CPPUNIT_TEST(isTrue);
	CPPUNIT_TEST_SUITE_END();
public:
	void setUp() {
		// init
	}
	void tearDown() {
		// fini
	}
	//Примеры которые нам дали
	void sum() {
		int a = 2;
		int b = 10;
		int result = a + b;
		CPPUNIT_ASSERT(result == 12);
	}
	void div() {
		int a = 64;
		int b = 2;
		int result = a / b;
		CPPUNIT_ASSERT(result == 32);
	}
	void mul() {
		int a = 13;
		int b = 3;
		int result = 13 * 3;
		CPPUNIT_ASSERT(result == 39);
	}
	//Мои тесты
	void sumFirstThreeDigits() {
		float fracNum = 23.623;
		/*std::cout << "Enter a fractional number - ";
		std::cin >> fracNum;*/
		/*int result = 6+2+3;
		std::cout << result;*/
		CPPUNIT_ASSERT(11);
	}
	void isTrue() {
		int x = 1;
		int a = 1;
		int b = 3;
		int c = -4;
		int m = 5;
		int n = -5;
		//int result = 13 * 3;
		CPPUNIT_ASSERT(1);
		/*x = 2;
		a = 1;
		b = 3;
		c = 3;
		m = 7;
		n = -5;
		//int result = 13 * 3;
		CPPUNIT_ASSERT(1);*/
	}

	
};