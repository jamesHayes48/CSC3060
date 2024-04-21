// Binary Tree Template
#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>
using namespace std;

template <class T>
class BinaryTree
{
public:
	struct TreeNode
	{
		T value;
		TreeNode* left;
		TreeNode* right;
	};

	TreeNode* root;
	void insert(TreeNode *&, TreeNode *&);
	void destroySubTree(TreeNode *);
	void deleteNode(T, TreeNode *&);
	void makeDeletion(TreeNode *&);
	void displayInOrder(TreeNode *);
	void displayPreOrder(TreeNode *);
	void displayPostOrder(TreeNode *);

public:
	// Constructor
	BinaryTree() {
		root = nullptr;
	}
	// Destructor
	~BinaryTree() {
		destroySubTree(root);
	}

	void insertNode(T);
	bool searchNode(T);
	void remove(T);
	void displayInOrder() {
		displayInOrder(root);
	}
	void displayPreOrder() {
		displayPreOrder(root);
	}
	void displayPostOrder() {
		displayPostOrder(root);
	}
};

template <typename T>
void BinaryTree<T>::insert(TreeNode*& nodePtr, TreeNode*& newNode)
{
	if (nodePtr == nullptr)
	{
		// Insert the node.
		nodePtr = newNode;
	}
	else if (newNode->value < nodePtr->value)
	{
		// Search the left branch
		insert(nodePtr->left, newNode);
	}
	else
	{
		// Search the right branch
		insert(nodePtr->right, newNode);
	}
}

// Create new node and insert into binary tree
template <class T>
void BinaryTree<T>::insertNode(T num) {
	TreeNode* newNode = nullptr;

	// Create a new node and store num in it
	newNode = new TreeNode;
	newNode->value = num;
	newNode->left = newNode->right = nullptr;

	// Insert the node
	insert(root, newNode);
}

// Destroy a subtree when called in destructor
template <class T>
void BinaryTree<T>::destroySubTree(TreeNode* nodePtr) {
	if (nodePtr->left) {
		destroySubTree(nodePtr->left);
	}
	if (nodePtr->right) {
		destroySubTree(nodePtr->right);
	}
	delete nodePtr;
}

// Remove node when value matches number
template <class T>
void BinaryTree<T>::remove(T num) {
	deleteNode(num, root);
}

// Delete node with value specified
template <class T>
void BinaryTree<T>::deleteNode(T num, TreeNode*& nodePtr) {
	if (num < nodePtr->value) {
		deleteNode(num, nodePtr->left);
	}
	else if (num > nodePtr->value) {
		deleteNode(num, nodePtr->right);
	}
	else {
		makeDeletion(nodePtr);
	}
}

// Search if value is in a node
template <class T>
bool BinaryTree<T>::searchNode(T num) {
	bool status = false;

	TreeNode* nodePtr = root;

	while (nodePtr) {
		if (nodePtr->value == num) {
			status = true;
		}
		else if (num < nodePtr->value) {
			nodePtr = nodePtr->left;
		}
		else {
			nodePtr = nodePtr->right;
		}
	}
	return status;
}

// Delete a node and reatach nodes to maintain tree
template <class T>
void BinaryTree<T>::makeDeletion(TreeNode*& nodePtr) {
	TreeNode* tempNodePtr = nullptr;

	if (nodePtr == nullptr) {
		cout << "Cannot delete node";
	}
	else if (nodePtr->right == nullptr) {
		tempNodePtr = nodePtr;
		// Reattach left child
		nodePtr = nodePtr->left;
		delete tempNodePtr;
	}
	else if (nodePtr->right == nullptr) {
		tempNodePtr = nodePtr;
		// Reattach right child
		nodePtr = nodePtr->right;
		delete tempNodePtr;
	}
	// If node has two children
	else {
		// Move one node to the right
		tempNodePtr = nodePtr->right;

		// Go to end of left node
		while (tempNodePtr->left) {
			tempNodePtr = tempNodePtr->left;
		}

		// Reattach left subttree
		tempNodePtr->left = nodePtr->left;
		tempNodePtr = nodePtr;

		// Reattach the right subtree
		nodePtr = nodePtr->right;
		delete tempNodePtr;
	}
}

// Display values in subtree through in order traversal
template <class T>
void BinaryTree<T>::displayInOrder(TreeNode* nodePtr) {
	if (nodePtr) {
		displayInOrder(nodePtr->left);
		cout << nodePtr->value << endl;
		displayInOrder(nodePtr->right);
	}
}

// Display values in subtree through preorder traversal
template <class T>
void BinaryTree<T>::displayPreOrder(TreeNode* nodePtr) {
	if (nodePtr) {
		cout << nodePtr->value << endl;
		displayPreOrder(nodePtr->left);
		displayPreOrder(nodePtr->right);
	}
}

// Display values in subtree through in postorder traversal
template <class T>
void BinaryTree<T>::displayPostOrder(TreeNode* nodePtr) {
	if (nodePtr) {
		displayPostOrder(nodePtr->left);
		displayPostOrder(nodePtr->right);
		cout << nodePtr->value << endl;
	}
}


#endif