// FirstCplusApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"		// Used by microsoft compilers and IDEs
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <string>	// neede for the string data type
#include "Person.h"
#include "SubClass.h"
#include "Singleton.h"
#include "IAnimal.h"
#include<stack>
#include<list>

using namespace std;

using namespace person;


void decisionLoop();
void arrayExample();
int getRandomNumber();


int main()
{
	person::Person stackedPerson; // Memory from stack (No Delete needed)

	stackedPerson.setFirstName("Joe"s);	// The s at the end makes the value a string object instead of a char array (char[])
	cout << "Hello " << stackedPerson.getFirstName() << " you are on the stack." << endl;

	cout << "Number of Person Instances: " << person::Person::getInstances() << endl;

	person::Person *person = NULL;
	person = new person::Person(); // Memory allocated from heap
	person->setAge(39);
	person->setFirstName("Brian");
	person->setLastName("Dodge");

	cout << "Hello " << person->getFirstName() << " " << person->getLastName() << endl;
	cout << "You are " << person->getAge() << " years old!" << endl;


	cout << "Number of Person Instances: " << person::Person::getInstances() << endl;

	delete person; // Avoid memory leak

	Singleton* single = Singleton::getInstance();

	BaseClass* base = new SubClass();
	SubClass* sub = new SubClass();

	cout << "Base Value: " << (*base).getValue() << endl;		// var->func() equates to (*var).func()
	cout << "Sub Value: " << sub->getValue() << endl;
	cout << "Sub to Base Value: " << sub->BaseClass::getValue() << endl;

	
	delete sub;

	delete base;


	arrayExample();


	IAnimal *dog;
	
	dog = new Dog();

	cout << dog->speak() << endl;

	delete dog;

	dog = new Cat();

	cout << dog->speak() << endl;
	Cat* cat = dynamic_cast<Cat*>(dog); 

	cout << (dynamic_cast<Cat*>(dog))->sleep() << endl;	// akin to ((Cat)dog).sleep() in java

	//cout << ((Cat)dog)

	//cout << cat->sleep() << endl;;

	delete dog;


	auto test = [](string name) { cout << name; };

	test("Brian\n");

	auto myValue = 71.23;		// auto checks the variable at compile time like var in C#

	cout << "My Value: " << myValue << endl;

	cout << R"(this is a "Raw String" !)" << endl;

    return 0;

}

void arrayExample() {
	double myArray[5];
	const string msg = "Hello there";
	const int arraySize = (sizeof(myArray) / sizeof(myArray[0]));

	cout << "String size: " << sizeof(msg) << " Msg: " << msg << endl;
	cout << "Array Size: " << sizeof(myArray) / 8 << endl;
	cout << "Element size: " << sizeof(myArray[0]) << endl;

	cout << "The array's address is: " << &myArray << endl;

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

	if (firstNumber > secondNumber) {;
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


void useStacks() {

	list<stack<int> > list_of_stacks;


}


