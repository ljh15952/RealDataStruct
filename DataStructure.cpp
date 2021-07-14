#include <list>
#include <iostream>
#include "LinkedList/LinkedList.h"
#include "LinkedList/DoubleLinkedList.h"
#include "Stack/Stack.h"
using namespace std;

int main()
{
	Stack* stack = new Stack(5);
	if (stack->isEmpty())
		cout << "Stack이 비었슴다." << endl;
	if (!stack->isFull())
		cout << "Stack이 꽉 차지 않음." << endl;
	stack->push(1);
	stack->push(2);
	stack->push(3);
	stack->push(5);
	stack->push(4);
	stack->printAll();
	stack->pop();
	stack->pop();
	stack->printAll();
	cout << "현재 Stack의 사이즈 : " << stack->size() << endl;
	if (!stack->isEmpty())
		cout << "Stack이 차있슴다." << endl;
	if (stack->isFull())
		cout << "Stack이 꽉 참." << endl;
	cout << "Top의 값: " << stack->peek()->_data << endl;
	stack->push(1);
	stack->push(5);
	stack->push(5);
	stack->push(5);
	stack->push(5);
	stack->push(5);
	stack->push(5);
	stack->printAll();
	cout << "현재 Stack의 사이즈 : " << stack->size() << endl;
	if (stack->isFull())
		cout << "Stack이 꽉 참." << endl;
}
