#include "LinkedList.h"
#include "TestLinkedList.h"

namespace cpp_class5_test {
	void testCreateList()
	{
		Node* testList = createList(5);

		assert(testList->data == 5);
		assert(testList->next == nullptr);

		print("testCreateList Test Passed");
	}

	void testPush_back()
	{
		Node* testList = createList(5);
		push_back(testList, 6);

		assert(testList->data == 5);
		assert(testList->next->data == 6);
		assert(testList->next->next == nullptr);

		push_back(testList, 7);

		assert(testList->next->next->data == 7);
		assert(testList->next->next->next == nullptr);

		print("testPush_back Test Passed");
	}

	void testPop_back()
	{
		Node* testList = createList(1);
		push_back(testList, 2);
		pop_back(testList);

		assert(testList->data == 1);
		assert(testList->next == nullptr);
		

		print("testPop_back Test Passed");
	}

	void testClear()
	{
		Node* testList = createList(1);
		push_back(testList, 2);
		push_back(testList, 3);
		push_back(testList, 4);

		clear(testList);

		assert(testList == nullptr);

		print("testClear Test Passed");
	}

	void testGetElementCount()
	{
		Node* testList = createList(1);
		push_back(testList, 2);
		push_back(testList, 3);
		push_back(testList, 4);
		push_back(testList, 5);

		Node* testList2 = createList(1);
		clear(testList2);

		unsigned int results = getElementCount(testList);
		unsigned int results2 = getElementCount(testList2);

		assert(results == 5);
		assert(results2 == 0);


		print("testGetElementCount Test Passed");
	}

	void testClone()
	{
		Node* testList = createList(1);
		push_back(testList, 2);
		push_back(testList, 3);

		Node* testListClone = clone(testList);

		Node * temp = testListClone->next;
		Node * temp2 = testList->next;

		while (temp)
		{
			assert(temp->data == temp2->data);
			if (temp->next)
				assert(temp->next != temp2->next);
			temp = temp->next;
			temp2 = temp2->next;
		}

		print("testClone Test Passed");
	}

	void testGetElementAtIndex()
	{
		Node* testList = createList(1);
		push_back(testList, 2);
		push_back(testList, 3);

		assert(getElementAtIndex(testList, 0) == 1);
		assert(getElementAtIndex(testList, 1) == 2);
		assert(getElementAtIndex(testList, 2) == 3);

		print("testGetElementAtIndex Test Passed");
	}

	void testInsert()
	{
		Node* testList = createList(1);
		push_back(testList, 2);
		push_back(testList, 3);

		insert(testList, 2, 4);
		insert(testList, 5, 5);

		assert(getElementAtIndex(testList, 0) == 1);
		assert(getElementAtIndex(testList, 1) == 2);
		assert(getElementAtIndex(testList, 2) == 4);
		assert(getElementAtIndex(testList, 3) == 3);
		assert(getElementAtIndex(testList, 4) == 5);

		print("testInsert Test Passed");
	}

	void testErase() 
	{
		Node* testList = createList(1);
		push_back(testList, 2);
		push_back(testList, 3);

		erase(testList, 1);

		assert(getElementAtIndex(testList, 0) == 1);
		assert(getElementAtIndex(testList, 1) == 3);

		erase(testList, 1);

		assert(getElementAtIndex(testList, 0) == 1);

		print("testErase Test Passed");
	}

	void testGetOccurenceCount()
	{
		Node* testList = createList(1);
		push_back(testList, 2);
		push_back(testList, 3);
		push_back(testList, 2);
		push_back(testList, 2);

		assert(getOccurenceCount(testList, 2) == 3);
		assert(getOccurenceCount(testList, 1) == 1);
		assert(getOccurenceCount(testList, 5) == 0);

		print("testGetOccurenceCount Test Passed");
	}

	void testEraseAllOcurrencies()
	{
		Node* testList = createList(1);
		push_back(testList, 2);
		push_back(testList, 3);
		push_back(testList, 2);
		push_back(testList, 2);

		eraseAllOcurrencies(testList, 2);

		assert(getOccurenceCount(testList, 2) == 0);
		assert(getElementAtIndex(testList, 0) == 1);
		assert(getElementAtIndex(testList, 1) == 3);
		
		print("testEraseAllOcurrencies Test Passed");
	}

	void testReverse()
	{
		Node* testList = createList(1);
		push_back(testList, 2);
		push_back(testList, 3);
		push_back(testList, 4);
		push_back(testList, 5);

		reverse(testList);

		assert(getElementAtIndex(testList, 0) == 5);
		assert(getElementAtIndex(testList, 1) == 4);
		assert(getElementAtIndex(testList, 2) == 3);
		assert(getElementAtIndex(testList, 3) == 2);
		assert(getElementAtIndex(testList, 4) == 1);

		print("testReverse Test Passed");
	}
}
