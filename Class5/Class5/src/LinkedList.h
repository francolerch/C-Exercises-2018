#pragma once
#include <assert.h>
#include <iostream>

#define print(x) std::cout << x << std::endl;

namespace cpp_class5
{
	struct Node {
		float data;
		struct Node* next;
	};

	Node* createList(float data);
	void push_back(Node* nPointer, float data);
	void pop_back(Node* &nrPointer);
	void clear(Node *& pointer);
	unsigned int getElementCount(Node * pointer);
	static void getElementCountHelper(Node * pointer, unsigned int &count);
	Node* clone(Node* pointer);
	float getElementAtIndex(Node* pointer, unsigned int index);
	void insert(Node* &pList, unsigned int index, float data);
	void erase(Node* &pList, unsigned int index);
	unsigned int getOccurenceCount(Node* pList, float num);
	void eraseAllOcurrencies(Node* &pList, float num);
	void reverse(Node* &pList);
}