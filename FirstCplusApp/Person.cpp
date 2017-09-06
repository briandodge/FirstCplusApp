
#include "stdafx.h"		// Used by microsoft compilers and IDEs
#include "Person.h"

using namespace person;

namespace p = person;

/* My default Constructor*/
p::Person::Person() {
	Person::instanceCount++;
}

int p::Person::instanceCount = 0;

void p::Person::setFirstName(string firstName) {
	this->firstName = firstName;
}



void p::Person::setLastName(string lastName) { this->lastName = lastName; }
void p::Person::setAge(int age) { this->age = age; }