#pragma once
/*
��ũ�� ����Ʈ 1
int main()
{
	LinkedList* myList = new LinkedList();

	myList->push(3);
	myList->push(1);
	myList->push(10);
	myList->push(2);
	myList->push(1);

	myList->printAll();

	cout << "��ü ������ ����: " << myList->count() << endl;

	cout << "������ 1 ã��" << endl;
	myList->found(1);

	cout << "4��° ������ 10���� ����" << endl;
	myList->exchange(4, 10);

	myList->printAll();
}
*/
/*
��ũ�� ����Ʈ 2
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

	cout << "������ 1 ����" << endl;
	myList->delete_(1);
	myList->printAll();

	cout << "5��° ������ ����" << endl;
	myList->delete_n(5);
	myList->printAll();

	cout << "2��°�� ������ 22 ����" << endl;
	myList->insert_n(22, 2);
	myList->printAll();

	cout << "2��°�� 3��° �� swap" << endl;
	myList->swap(2, 3);
	myList->printAll();
}
*/

/*
���� ��ũ�� ����Ʈ 1
int main()
{
	DoubleLinkedList* myList = new DoubleLinkedList();
	myList->push(3);
	myList->push(7);
	myList->push(9);
	myList->push(2);
	myList->printAll();

	cout << "������ ���" << endl;
	myList->reversePrintAll();

	cout << "����Ʈ�� ������ ����: " << myList->count() << endl;

	cout << "2��°�� 3��° swap" << endl;
	myList->swap(2, 3);
	myList->printAll();

	cout << "������ ���" << endl;
	myList->reversePrintAll();

}

*/

/*
���� ��ũ�� ����Ʈ 2
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

	cout << "������ 2 ����" << endl;
	myList->delete_(2);
	myList->printAll();

	cout << "3��° ������ ����" << endl;
	myList->delete_n(3);
	myList->printAll();
	cout << "3��°�� ������ 77����" << endl;
	myList->insert_n(77, 3);
	myList->printAll();
	myList->reversePrintAll();

}
*/