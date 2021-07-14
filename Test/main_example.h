#pragma once
/*
링크드 리스트 1
int main()
{
	LinkedList* myList = new LinkedList();

	myList->push(3);
	myList->push(1);
	myList->push(10);
	myList->push(2);
	myList->push(1);

	myList->printAll();

	cout << "전체 데이터 개수: " << myList->count() << endl;

	cout << "데이터 1 찾기" << endl;
	myList->found(1);

	cout << "4번째 데이터 10으로 변경" << endl;
	myList->exchange(4, 10);

	myList->printAll();
}
*/
/*
링크드 리스트 2
int main()
{
	LinkedList* myList = new LinkedList();

	myList->push(1);
	myList->push(9);
	myList->push(1);
	myList->push(1);
	myList->push(1);
	myList->push(2);
	myList->push(3);
	myList->push(4);
	myList->push(7);
	myList->push(8);
	myList->push(1);


	myList->printAll();

	cout << "데이터 1 삭제" << endl;
	myList->delete_(1);
	myList->printAll();

	cout << "5번째 데이터 삭제" << endl;
	myList->delete_n(5);
	myList->printAll();

	cout << "2번째에 데이터 22 삽입" << endl;
	myList->insert_n(22, 2);
	myList->printAll();

	cout << "2번째와 3번째 값 swap" << endl;
	myList->swap(2, 3);
	myList->printAll();
}
*/

/*
더블 링크드 리스트 1
int main()
{
	DoubleLinkedList* myList = new DoubleLinkedList();
	myList->push(3);
	myList->push(7);
	myList->push(9);
	myList->push(2);
	myList->printAll();

	cout << "역방향 출력" << endl;
	myList->reversePrintAll();

	cout << "리스트의 데이터 개수: " << myList->count() << endl;

	cout << "2번째와 3번째 swap" << endl;
	myList->swap(2, 3);
	myList->printAll();

	cout << "역방향 출력" << endl;
	myList->reversePrintAll();

}

*/

/*
더블 링크드 리스트 2
int main()
{
	DoubleLinkedList* myList = new DoubleLinkedList();
	myList->push(2);
	myList->push(2);
	myList->push(2);
	myList->push(3);
	myList->push(7);
	myList->push(2);
	myList->push(2);
	myList->push(9);
	myList->push(8);
	myList->push(2);
	myList->push(2);
	myList->push(2);
	myList->printAll();

	cout << "데이터 2 삭제" << endl;
	myList->delete_(2);
	myList->printAll();

	cout << "3번째 데이터 삭제" << endl;
	myList->delete_n(3);
	myList->printAll();
	cout << "3번째에 데이터 77삽입" << endl;
	myList->insert_n(77, 3);
	myList->printAll();
	myList->reversePrintAll();

}
*/

/*
싱글 링크드 리스트 최대값,최소값, 반대로 출력, 중복제거 
int main()
{
	LinkedList* myList = new LinkedList();

	myList->push(44);
	myList->push(9);
	myList->push(1);
	myList->push(7);
	myList->push(1);
	myList->push(2);
	myList->push(3);
	myList->push(9);
	myList->push(7);
	myList->push(8);
	myList->push(99);

	myList->printAll();
	myList->reversePrintAll();
	myList->min();
	myList->max();
	myList->unique();
	myList->printAll();
}
*/

/*
스택 기본 메서드들 테스트 

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
*/