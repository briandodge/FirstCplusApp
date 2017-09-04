// FirstCplusApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"		// Used by microsoft compilers and IDEs
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void decisionLoop();

int getRandomNumber();

int main(int arg, _TCHAR* argv[])
{

	//printf("hello\n");
	//cout << "hello again" << endl;
	//decisionLoop();
	srand(time(nullptr)); // Random number seed set only once, if more then will be likely the same number
	for (int i = 0; i <= 10; i++) {
		cout << "Random Number: " << getRandomNumber() << endl;
	}
    return 0;
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


