#pragma once

class Singleton;

class Singleton {

private:

	static Singleton *singleton;

	Singleton() {}
	~Singleton() {}


public: 


	static Singleton *getInstance() {
		if (!singleton) {
			singleton = new Singleton();
		}
		return singleton;
	}

	int getValue() { return 10; }

};