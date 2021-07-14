#include "Stack.h"

Stack::Stack(int s)
{
	top = nullptr;
	maxSize = s;
}

bool Stack::isFull()
{
	
	return (size() >= maxSize);
}

bool Stack::isEmpty()
{
	return (top == nullptr);
}

bool Stack::push(int i)
{
	if (isFull())
		return false;
	Node* node = new Node();
	node->_data = i;
	if (top == nullptr)
		top = node;
	else {
		Node* cur;
		for (cur = top; cur->_next != nullptr; cur = cur->_next);
		cur->_next = node;
	}
	return true;
}

Node* Stack::pop()
{
	if (isEmpty())
		return nullptr;
	Node* cur;
	for (cur = top; cur->_next->_next != nullptr; cur = cur->_next);
	Node* node = cur->_next;
	cur->_next = nullptr;
	return node;
}

int Stack::size()
{
	if (isEmpty())
		return 0;
	Node* cur;
	int size = 0;
	for (cur = top; cur != nullptr; cur = cur->_next) {
		size++;
	}
	return size;
}

Node* Stack::peek()
{
	return top;
}

void Stack::printAll()
{
	Node* cur;
	for (cur = top; cur != nullptr; cur = cur->_next) {
		cout << cur->_data << " ";
	}
	cout << endl;
}
