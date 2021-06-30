#pragma once
#include "LinkedList.h"
class DoubleLinkedList{
public:
	void push(int n);
	void printAll();
	void reversePrintAll();
	int count();
	void swap(int n, int k);
	void delete_(int n);
	void delete_n(int n);
	void insert_n(int k, int n);
private:
	DNode *_head;
	DNode* _tail;
};