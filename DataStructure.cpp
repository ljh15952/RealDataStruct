#include <list>
#include <iostream>
#include "LinkedList/LinkedList.h"
#include "LinkedList/DoubleLinkedList.h"
using namespace std;

int main()
{
	LinkedList* myList = new LinkedList();

	myList->push(44);
	myList->push(9);
	myList->push(1);
	myList->push(1);
	myList->push(1);
	myList->push(2);
	myList->push(3);
	myList->push(4);
	myList->push(7);
	myList->push(8);
	myList->push(99);
	
	myList->printAll();
	myList->reversePrintAll();

	myList->min();
	myList->max();
}
