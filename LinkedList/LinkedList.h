#pragma once
#include <iostream>
#include "Node.h"
using namespace std;
class LinkedList {
public:
	LinkedList();
	void printAll();
	void reversePrintAll();
	void push(int n);
	int count();
	void found(int n);
	void exchange(int n, int k);

	void delete_(int n);
	void delete_n(int n);
	void insert_n(int k, int n);
	void swap(int n, int k);

	void min();
	void max();
private:
	Node* _head;
	Node* getLastNode();
};