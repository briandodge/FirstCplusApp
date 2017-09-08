#pragma once

#include "stdafx.h"
#include<string>
using namespace std;

class IAnimal;
class Dog;
class Cat;

class IAnimal {
public:
	virtual string speak() = NULL;
};


class Dog : public IAnimal {
	string speak() { return "woof";  }
};

class Cat : public IAnimal {
	string speak() { return "meow";  }
public:
	string sleep() { return "zzzzz"; }

};