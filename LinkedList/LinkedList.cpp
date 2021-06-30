#include "LinkedList.h"



LinkedList::LinkedList()
{
	_head = nullptr;
}

void LinkedList::printAll()
{
	//전체 출력
	//O(n)
	cout << _head->_data;
	for (Node* cursor = _head->_next; cursor != nullptr; cursor = cursor->_next)
		cout << "->" << cursor->_data;
	cout << endl;
}

void LinkedList::reversePrintAll()
{
	Node* arr = new Node[100];
	int i = count()-1;
	for (Node* cursor = _head; cursor != nullptr; cursor = cursor->_next, i--)
		arr[i]._data = cursor->_data;
	cout << arr[0]._data;
	for (i = 1; i < count(); i++)
		cout << "->" << arr[i]._data;
	cout << endl;
}


void LinkedList::push(int n)
{
	//노드 추가
	Node* temp = new Node();
	temp->_data = n;
	if (_head == nullptr) {
		_head = temp;
	}
	else {
		//맨 끝 노드의 다음 노드를 새로만든 temp 할당
		getLastNode()->_next = temp;
	}
}

int LinkedList::count()
{
	//전체 데이터 개수 return 
	//O(n)
	int n = 0;
	for (Node* cursor = _head; cursor != nullptr; cursor = cursor->_next)
		n++;
	return n;
}

void LinkedList::found(int n)
{
	//데이터 n의 위치를 찾는 함수, 여러 개가 존재하면 모두 출력
	//O(n)
	int i = 1;
	for (Node* cursor = _head; cursor != nullptr; cursor = cursor->_next, i++) {
		if (cursor->_data == n)
			cout << i << " ";
	}
	cout << endl;
}

void LinkedList::exchange(int n, int k)
{
	//n번째 데이터를 k로 바꾸는 함수
	//O(n)
	int i = 1;
	for (Node* cursor = _head; cursor != nullptr; cursor = cursor->_next, i++) {
		if (i == n)
			cursor->_data = k;
	}
}

void LinkedList::delete_(int n)
{
	//모든 데이터 n 삭제
	//O(n)
	while (_head->_data == n) {
		_head = _head->_next;
	}
	Node* prev = _head;
	Node* cur;
	for (cur = _head->_next; cur != nullptr; cur = cur->_next) {
		if (cur->_data == n) {
			prev->_next = cur->_next;
		}
		else {
			prev = cur;
		}
	}
}

void LinkedList::delete_n(int n)
{
	//n번째 데이터 삭제
	//O(n)
	Node* prev = _head;
	Node* cur;
	if (n == 1) {
		_head = _head->_next;
		return;
	}
	for (cur = _head; cur != nullptr; cur = cur->_next, n--) {
		if (n == 1) {
			prev->_next = cur->_next;
			return;
		}
		prev = cur;
	}
}

void LinkedList::insert_n(int k, int n)
{
	//n번째에 데이터 k 삽입
	//O(n)
	if (n == 1) {
		Node* temp = new Node();
		temp->_data = k;
		temp->_next = _head;
		_head = temp;
		return;
	}
	for (Node* cur = _head; cur != nullptr; cur = cur->_next, n--) {
		if (n == 2) {
			Node* temp = new Node();
			temp->_data = k;
			temp->_next = cur->_next;
			cur->_next = temp;
		}
	}
}

void LinkedList::swap(int n, int k)
{
	//n번째와 k번째 데이터 swap
	//O(n)
	Node* cur;
	Node* n1 = _head, * prev_n1 = nullptr;
	Node* n2 = _head, * prev_n2 = nullptr;
	//n번째 데이터 찾기
	while (n > 1) {
		prev_n1 = n1;
		n1 = n1->_next;
		n--;
	}
	//k번째 데이터 찾기
	while (k > 1) {
		prev_n2 = n2;
		n2 = n2->_next;
		k--;
	}

	if (n1 != nullptr && n2 != nullptr) {
		if (prev_n1 != nullptr)
			prev_n1->_next = n2;
		else
			_head = n2;

		if (prev_n2 != nullptr)
			prev_n2->_next = n1;
		else
			_head = n1;

		Node* temp = n1->_next;
		n1->_next = n2->_next;
		n2->_next = temp;
	}
}

void LinkedList::min()
{
	int min = 99999;
	for (Node* cursor = _head; cursor != nullptr; cursor = cursor->_next) {
		if (min > cursor->_data) {
			min = cursor->_data;
		}
	}
	cout << "최소값: " << min << endl;
}

void LinkedList::max()
{
	int max = -99999;
	for (Node* cursor = _head; cursor != nullptr; cursor = cursor->_next) {
		if (max < cursor->_data) {
			max = cursor->_data;
		}
	}
	cout << "최대값: " << max << endl;
}


Node* LinkedList::getLastNode()
{
	Node* cursor;
	for (cursor = _head; cursor->_next != nullptr; cursor = cursor->_next);
	return cursor;
}
