#pragma once
#include "stdafx.h"		// Used by microsoft compilers and IDEs
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std; 

class Person;		// A forward declaration of a class, not necessary but for illustration

namespace person {

	class Person {

		static int instanceCount;

		string firstName;
		string lastName;
		int age;

	public:

		Person();		// default constructor
		~Person() {}	// default destructor

		static int getInstances() { return Person::instanceCount;  }

		Person(string firstName, string lastName, int age) {
			this->firstName = firstName;
			this->lastName = lastName;
			this->age = age;
		}

		string getFirstName() const { return firstName; }
		string getLastName() { return lastName; }
		int getAge() { return *(&age); }	// & = Address and * = Occupant of address

		void setFirstName(string firstName);
		void setLastName(string lastName);
		void setAge(int age);

	};
}