#include "LinkedList.h"
#include <stdlib.h> 
#include <limits>

namespace cpp_class5
{
	Node* createList(float data) {
		struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
		new_node->data = data;
		new_node->next = nullptr;
		return new_node;
	};

	void push_back(Node* nPointer, float data)
	{
		Node* temp = nPointer;

		if (nPointer->next)
		{
			while (temp->next)
			{
				temp = temp->next;
			}
			
		}
		struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
		new_node->data = data;
		new_node->next = nullptr;
		temp->next = new_node;
	};

	void pop_back(Node* &nrPointer)
	{
		if (nrPointer == nullptr)
			return;

		if (nrPointer->next == nullptr)
		{
			free(nrPointer);
			nrPointer = nullptr;
			return;
		}

		Node* currNode = nrPointer;
		while (currNode->next && currNode->next->next != nullptr)
		{
			currNode = currNode->next;
		}
		free(currNode->next);
		currNode->next = nullptr;
	}

	void clear(Node *& pointer)
	{
		while (pointer->next)
		{
			pop_back(pointer);
		}

		free(pointer);
		pointer = nullptr;
	}

	unsigned int getElementCount(Node * pointer)
	{
		unsigned int count = 0;

		if (pointer)
		{
			count++;

			if (pointer->next)
			{
				count++;
				getElementCountHelper(pointer->next, count);
			}
		}

		return count;
	}

	static void getElementCountHelper(Node * pointer, unsigned int &count)
	{
		if (pointer->next)
		{
			count++;
			getElementCountHelper(pointer->next, count);
		}
	}

	/*
	La consigna para este metodo era:

	Implementar el metodo clone() que tome el Node* de la lista, cree una lista nueva y
	retorne el Node* a la nueva lista.

	Aunque por el nombre interprete que deberia clonarla antes de devolverla
	*/
	Node* clone(Node* pointer)
	{
		Node* new_list = createList(pointer->data);
		Node* temp = pointer->next;

		while (temp)
		{
			push_back(new_list, temp->data);
			temp = temp->next;
		}

		return new_list;
	}

	float getElementAtIndex(Node* pointer, unsigned int index)
	{
		assert(pointer);
		Node* tPointer = pointer;

		for (unsigned int i = 0; i < index; i++)
		{
			if (tPointer)
			{
				tPointer = tPointer->next;
			}
		}

		assert(tPointer);

		return tPointer->data;
	}

	void insert(Node* &pList, unsigned int index, float data)
	{
		assert(pList);
		Node* nPointer = nullptr;
		Node* tPointer = nullptr;
		tPointer = pList;

		for (unsigned int i = 1; i < index; i++)
		{
			if (tPointer->next)
			{
				tPointer = tPointer->next;
			}
		}

		struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
		new_node->data = data;
		new_node->next = tPointer->next;
		tPointer->next = new_node;
	}


	void erase(Node* &pList, unsigned int index)
	{
		assert(pList);
		Node* nPointer = nullptr;
		Node* tPointer = pList;

		for (unsigned int i = 1; i < index; i++)
		{
			if (tPointer)
			{
				tPointer = tPointer->next;
			}
		}

		if (tPointer->next != nullptr)
		{
			nPointer = tPointer->next->next;
		}
		free(tPointer->next);
		tPointer->next = nPointer;
	}

	unsigned int getOccurenceCount(Node* pList, float num)
	{
		Node* nPointer = nullptr;
		Node* tPointer = pList;
		unsigned int count = 0;
		float epsilon = std::numeric_limits<float>::epsilon();


		while (tPointer)
		{
			if (std::abs(tPointer->data - num) < epsilon)
			{
				count++;
			}

			tPointer = tPointer->next;
		}

		return count;
	}

	void eraseAllOcurrencies(Node* &pList, float num)
	{
		Node* nPointer = nullptr;
		Node* tPointer = pList;
		float epsilon = std::numeric_limits<float>::epsilon();
		unsigned int count = 0;

		while (tPointer)
		{
			if (std::abs(tPointer->data - num) < epsilon)
			{
				tPointer = tPointer->next;
				erase(pList, count);
			}
			else
			{
				tPointer = tPointer->next;
				count++;
			}
		}
	}

	void reverse(Node* &pList)
	{
		Node* current = pList;
		Node* prev = nullptr;
		Node* next = nullptr;

		while (current != nullptr)
		{
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
		}
		pList = prev;
	}
}