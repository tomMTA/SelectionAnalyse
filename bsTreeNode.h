#ifndef __BSTREENODE_H
#define __BSTREENODE_H

#include "person.h"

class BSTree;

class BSTreeNode
{

private:
	Person* data;
	BSTreeNode* left, * right, * father;
	int treeSize;

public:
	BSTreeNode();
	BSTreeNode(int id, const char* name, BSTreeNode* left, BSTreeNode* right, BSTreeNode* father);
	~BSTreeNode();

	Person* getData();
	int getKey();

	void InOrder();
	void PreOrder();
	void PostOrder();

	friend class BSTree;
};


#endif // !__BSTREENODE_H

