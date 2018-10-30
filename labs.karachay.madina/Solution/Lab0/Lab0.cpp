// Lab0.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <cppunit/ui/text/TestRunner.h>
#include "MyTest.h"
using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION(MyTest);


int sumFirstThreeDigits(float number) {
	int intPart = 0, fracPart, sum = 0; 
	intPart = trunc(number);
    fracPart = floor((number - intPart) * 1000);
    while (fracPart != 0) {
    	sum += fracPart%10;
    	fracPart /= 10;
	}
    cout<<"Sum of the first three digits is "<<sum<<endl;
	return 0;
}

int costOfTrip(float distanceToVilla, float quantityOfPetrol, float priseOfPetrol) {
	int ruble = 0, kopeck; 
	float result = ((quantityOfPetrol * priseOfPetrol * distanceToVilla)/100)*2;
	ruble = trunc(result);
    kopeck = round((result - ruble) * 100);
	cout<<"Trip to the summer cottage will be cost "<<ruble<<" rub. "<<kopeck<<" kop."<<endl;
	return 0;
}

int isTrue(int x) {
	int a, b, c, m, n;
	cout<<"Enter values: a, b, c, m, n respectively"<<endl;
	cin>>a>>b>>c>>m>>n;
	if ((a*pow(x,2) + b*x + c == 0 && m*x + n != 0) || (a*pow(x,2) + b*x + c != 0 && m*x + n == 0)) {
		cout<<1<<endl;
	} else {
		cout<<0<<endl;
	}
	return 0;
}

int convertMoney(float fractionalNum) {
	int ruble = 0, kopeck; 
	ruble = trunc(fractionalNum);
    kopeck = round((fractionalNum - ruble) * 100);
	cout<<fractionalNum<<" rub. - is "<<ruble<<" rub. "<<kopeck<<" kop."<<endl;
	return 0;
}

int main() {
	CppUnit::TextUi::TestRunner runner;
	CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry();
	runner.addTest(registry.makeTest());
	runner.run();

	float fracNum, distanceToVilla, quantityOfPetrol, priseOfPetrol, d, sumOfMoney;
	cout<<"Enter a fractional number - ";
	cin>>fracNum;
	sumFirstThreeDigits(fracNum);
	
	cout<<"Calculation of the travel cost to the summer cottage."<<endl;
	cout<<"A distance to the summer cottage - ";
	cin>>distanceToVilla;
	cout<<"A quantity of petrol (l/km) - ";
	cin>>quantityOfPetrol;
	cout<<"A prise for one liter of petrol (rub.) - ";
	cin>>priseOfPetrol;
	costOfTrip(distanceToVilla, quantityOfPetrol, priseOfPetrol);
	
	cout<<"Enter any integer number - ";
	cin>>d;
	isTrue(d);
	
	cout<<"Enter a fractional number - ";
	cin>>sumOfMoney;
	convertMoney(sumOfMoney);
	return 0;
}
