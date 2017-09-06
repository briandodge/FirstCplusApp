#pragma once

#include "BaseClass.h"


class SubClass : public BaseClass {

public: 
	int getValue() { 
		// return 20;
		return BaseClass::getValue() * 2;
	
	} // Overloaded


};