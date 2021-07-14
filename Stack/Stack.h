#pragma once
#include <iostream>
#include "../Node.h"
using namespace std;
class Stack {
public:
	Stack(int s);
	bool isFull();
	bool isEmpty();
	bool push(int i);
	Node* pop();
	int size();
	Node* peek();
	void printAll();
private:
	Node* top;
	int maxSize;
};