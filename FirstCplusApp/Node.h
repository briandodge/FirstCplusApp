#pragma once


#include <string.h>
#include "stdafx.h"

using namespace std;

class Node {

private:

	Node* parent = nullptr;
	Node* left = nullptr;
	Node* right = nullptr;

	string data;

public:

	Node(string data) { this->data = data; }
	~Node() {}

	Node addNode(Node* node){
		if (left == nullptr) {
			left = node;
			left->setParent(this);
			return *node;
		}
		else if (right== nullptr) {
			right = node;
			right->setParent(this);
			return *node;
		}
		return nullptr;
	}

	string getDate() { return this->data;  }

	void setParent(Node* parent) { this->parent = parent; }

};