// FirstCplusApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"		// Used by microsoft compilers and IDEs
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void decisionLoop();
void arrayExample();
int getRandomNumber();

int main(int arg, _TCHAR* argv[])
{

	//printf("hello\n");
	//cout << "hello again" << endl;
	//decisionLoop();
	//srand(time(nullptr)); // Random number seed set only once, if more then will be likely the same number
	//for (int i = 0; i <= 10; i++) {
	//	cout << "Random Number: " << getRandomNumber() << endl;
	//}


	arrayExample();

    return 0;

}

void arrayExample() {
	double myArray[5];
	const string msg = "Hello there";
	const int arraySize = (sizeof(myArray) / sizeof(myArray[0]));

	cout << msg << endl;
	cout << "Array Size: " << sizeof(myArray) / 8 << endl;
	cout << "Element size: " << sizeof(myArray[0]) << endl;

	for (int i = 0; i < arraySize; i++) {
		myArray[i] = i + 1;
	}

	for (int i = 0; i < arraySize; i++) {
		cout << myArray[i] << endl;
	}


}

void decisionLoop() {
	double firstNumber = 0;
	double secondNumber = 0;

	cout << "Enter your first number: ";
	cin >> firstNumber;

	cout << endl << "Enter your second number: ";
	cin >> secondNumber;

	if (firstNumber > secondNumber) {
		cout << endl << "first number is bigger" << endl;
	}
	else if (firstNumber < secondNumber) {
		cout << endl << "second number is larger" << endl;
	}
	else {
		cout << endl << "numbers are equal" << endl;
	}
}

int getRandomNumber() {
	
	return (rand() % 6) + 1;
}


