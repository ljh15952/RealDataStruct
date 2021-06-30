#include "DoubleLinkedList.h"

void DoubleLinkedList::push(int n)
{
	DNode* temp = new DNode();
	temp->_data = n;

	if (_head == nullptr) {
		_head = temp;
		temp->_next = nullptr;
		temp->_prev = nullptr;
	}
	else {
		_tail->_next = temp;
		temp->_prev = _tail;
		temp->_next = nullptr;
	}

	_tail = temp;
}

void DoubleLinkedList::printAll()
{
	cout << _head->_data;
	for (DNode* cur = _head->_next; cur != nullptr; cur = cur->_next) {
		cout << "->" << cur->_data;
	}
	cout << endl;
}

void DoubleLinkedList::reversePrintAll()
{
	//역방향 출력
	//O(n)
	cout << _tail->_data;
	for (DNode* cur = _tail->_prev; cur != nullptr; cur = cur->_prev) {
		cout << "->" << cur->_data;
	}
	cout << endl;
}

int DoubleLinkedList::count()
{
	//데이터 개수 return
	//O(n)
	int n = 0;
	for (DNode* cur = _head; cur != nullptr; cur = cur->_next) {
		n++;
	}
	return n;
}

void DoubleLinkedList::swap(int n, int k)
{
	//n번째와 k번째 swap
	//O(n)
	DNode* n1 = _head, * n2 = _head;

	while (n > 1) {
		n1 = n1->_next;
		n--;
	}
	while (k > 1) {
		n2 = n2->_next;
		k--;
	}

	if (n1 != nullptr && n2 != nullptr) {
		if (n1->_prev != nullptr)
			n1->_prev->_next = n2;
		else
			_head = n2;

		if (n2->_prev != nullptr)
			n2->_prev->_next = n1;
		else
			_head = n1;

		DNode* temp = n1->_next;
		n1->_next = n2->_next;
		n2->_next = temp;

		n1->_next->_prev = n1;
		n2->_prev = n1->_prev;
		n1->_prev = n2;
	}
}

void DoubleLinkedList::delete_(int n)
{
	//데이터 n을 찾아서 모두 삭제하는 함수
	//O(n)
	while (_head->_data == n) {
		_head = _head->_next;
	}
	_head->_prev = nullptr;
	while (_tail->_data == n) {
		_tail = _tail->_prev;
	}
	for (DNode* cur = _head->_next; cur != nullptr; cur = cur->_next) {
		if (cur->_data == n) {
			cur->_prev->_next = cur->_next;
			if (cur->_next != nullptr)
				cur->_next->_prev = cur->_prev;
		}
	}
}

void DoubleLinkedList::delete_n(int n)
{
	//n번째 데이터를 삭제하는 함수
	//O(n)
	if (n == 1) {
		_head = _head->_next;
		return;
	}
	for (DNode* cur = _head->_next; cur != nullptr; cur = cur->_next, n--) {
		if (n == 2) {
			cur->_prev->_next = cur->_next;
			if (cur->_next != nullptr)
				cur->_next->_prev = cur->_prev;
		}
	}
}

void DoubleLinkedList::insert_n(int k, int n)
{
	//데이터 k를 n번째에 삽입하는 함수
	//O(n)
	DNode* temp = new DNode();
	temp->_data = k;
	if (n == count() + 1) {
		temp->_next = nullptr;
		temp->_prev = _tail;
		_tail = temp;
		return;
	}
	if (n == 1) {
		temp->_next = _head;
		temp->_prev = nullptr;
		_head = temp;
		return;
	}
	for (DNode* cur = _head->_next; cur != nullptr; cur = cur->_next, n--) {
		if (n == 2) {
			temp->_next = cur;
			temp->_prev = cur->_prev;
			cur->_prev->_next = temp;
			cur->_prev = temp;
		}
	}
}
