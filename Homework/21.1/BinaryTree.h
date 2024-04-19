
#pragma once
#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>
using namespace std;

template <class T>
class BinaryTree {
public:
	struct TreeNode {
		T value;
		TreeNode* right;
		TreeNode* left;
	};

	TreeNode* root;
	void insert(TreeNode*&, TreeNode*&);
	void destroySubTree(TreeNode*);
	void deleteNode(T, TreeNode*&);
	void makeDeletion(TreeNode*&);
	void displayInOrder(TreeNode*);
	void displayPreOrder(TreeNode*);
	void displayPostOrder(TreeNode*);

public:
	BinaryTree()
	{
		root = nullptr;
	}
	~BinaryTree()  // Destructor
	{
		destroySubTree(root);
	}
	void insertNode(T);
	bool searchNode(T);
	void remove(T);
	void displayInOrder()
	{
		displayInOrder(root);
	}
	void displayPreOrder()
	{
		displayPreOrder(root);
	}
	void displayPostOrder()
	{
		displayPostOrder(root);
	}
};

#endif // !BINARYTREE_H