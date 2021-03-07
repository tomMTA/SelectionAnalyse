#ifndef __MINHEAP_H
#define __MINHEAP_H

#include "person.h"

class minHeap
{
private:
	Person** data;
	int maxSize;
	int heapSize;
	int allocated;
	static int Left(int node);
	static int Right(int node);
	static int Parent(int node);
	void FixHeap(int node, int& numComp, int& numItr);

public:
	minHeap(int max);
	minHeap(Person* arr[], int n, int& numComp, int& numItr); //FLOYD
	~minHeap();
	Person* Min();
	Person* DeleteMin(int& numComp, int& numItr);
	int Insert(Person* person);

	void MakeEmpty(); //unecessarry?
	bool IsEmpty();

	void Swap(Person*& a, Person*& b);

};
#endif // !__MINHEAP_H
