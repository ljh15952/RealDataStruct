#pragma once


class Node {
public:
	int _data;
	Node *_next;
};

class DNode {
public:
	int _data;
	DNode* _prev;
	DNode* _next;
};