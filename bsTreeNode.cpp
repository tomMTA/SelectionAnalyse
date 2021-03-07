#include "bsTreeNode.h"

BSTreeNode::BSTreeNode()
{
	data = nullptr;
	left = nullptr;
	right = nullptr;
	father = nullptr;
}

BSTreeNode::BSTreeNode(int key, const char* name, BSTreeNode* left, BSTreeNode* right, BSTreeNode* father)
{
	data = new Person(name, key);
	this->left = left;
	this->right = right;
	this->father = father;
	treeSize = 1;
	if (left)
		treeSize += left->treeSize;
	if (right)
		treeSize += right->treeSize;
}

BSTreeNode::~BSTreeNode()
{

}

Person* BSTreeNode::getData()
{
	return data;
}

int BSTreeNode::getKey()
{
	return data->getID();
}

void BSTreeNode::InOrder()
{
	BSTreeNode* temp = this;
	if (temp)
	{
		temp->left->InOrder();
		cout << "(Key: " << temp->data->getID() << ", Data: " << temp->data->getName() << ") ";
		temp->right->InOrder();
	}
}

void BSTreeNode::PreOrder()
{
	BSTreeNode* temp = this;
	if (temp)
	{
		temp->left->InOrder();
		temp->right->InOrder();
		cout << "(Key: " << temp->data->getID() << ", Data: " << temp->data->getName() << ") ";
	}
}

void BSTreeNode::PostOrder()
{
	BSTreeNode* temp = this;
	if (temp)
	{
		cout << "(Key: " << temp->data->getID() << ", Data: " << temp->data->getName() << ") ";
		temp->left->InOrder();
		temp->right->InOrder();
	}
}


