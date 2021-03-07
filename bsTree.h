#ifndef __BSTREE_H
#define __BSTREE_H

#include "bsTreeNode.h"


class BSTree
{
private:
	BSTreeNode* root;
	BSTreeNode* FindKthNode(BSTreeNode* node, int k, int& numItr);//return node with the k-th key
	void freeTree(BSTreeNode* root);

public:
	BSTree() { root = nullptr; }
	BSTree(BSTreeNode* root);
	~BSTree();

	BSTreeNode* getRoot();
	void MakeEmpty();
	bool IsEmpty();
	void Delete(BSTreeNode* toDelete);
	void swapMaxLeftTree(BSTreeNode* toDelete);//swap node with max of left sub-tree, and delete 
	BSTreeNode* Find(int id, int& numComp);
	BSTreeNode* Find(int id);
	void DeleteRoot();
	void Insert(int id, const char* name, int& numComp, int& numItr);
	void Delete(int id, int& numComp);
	BSTreeNode* findMax();//have max parameter?
	BSTreeNode* findMin();
	int Min();
	int Max();
	int Succ(int key);//return next key
	int Pred(int key);//return previous key
	Person* FindKthPerson(int& k, int& numItr);//return k-th person by ID
	void PrintTree();
};


#endif // !__BSTREE_H
