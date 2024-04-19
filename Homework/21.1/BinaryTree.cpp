#include "BinaryTree.h"
using namespace std;

template <typename T>
void BinaryTree<T>::insert(TreeNode*& nodePtr, TreeNode*& newNode)
{
	if (nodePtr == nullptr)
	{
		nodePtr = newNode;// Insert the node.
	}
	else if (newNode->value < nodePtr->value)
	{
		insert(nodePtr->left, newNode);// Search the left branch
	}
	else
	{
		insert(nodePtr->right, newNode);// Search the right branch
	}
}

template <class T>
void BinaryTree<T>::insertNode(T num) {
	TreeNode* newNode = nullptr;

	// Create a new node and store num in it
	newNode = new TreeNode;
	newNode->value = num;
	newNode->left = newNode->right = nullptr;

	insert(root, newNode);
}

template <class T>
void BinaryTree<T>::destroySubTree(TreeNode* nodePtr) {
	if (nodePtr->left) {
		destroySubTree(nodePtr->left);
	}
	if (nodePtr->right){
		destroySubTree(nodePtr->right);
	}
	delete nodePtr;
}

template <class T>
void BinaryTree<T>::remove(T num) {
	deleteNode(num, root);
}

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

template <class T>
void BinaryTree<T>::makeDeletion(TreeNode*& nodePtr) {
	TreeNode* tempNodePtr = nullptr;

	if (nodePtr == nullptr) {
		cout << "Cannot delete node";
	}
	else if (nodePtr->right == nullptr) {
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->left;
		delete tempNodePtr;
	}
	else if (nodePtr->right == nullptr) {
		tempNodePtr = nodePtr;
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

template <class T>
void BinaryTree<T>::displayInOrder(TreeNode* nodePtr) {
	if (nodePtr) {
		displayInOrder(nodePtr->left);
		cout << nodePtr->value << endl;
		displayInOrder(nodePtr->right);
	}
}

template <class T>
void BinaryTree<T>::displayPreOrder(TreeNode* nodePtr) {
	if (nodePtr) {
		cout << nodePtr->value << endl;
		displayPreOrder(nodePtr->left);
		displayPreOrder(nodePtr->right);
	}
}

template <class T>
void BinaryTree<T>::displayPostOrder(TreeNode* nodePtr) {
	if (nodePtr) {
		displayPostOrder(nodePtr->left);
		displayPostOrder(nodePtr->right);
		cout << nodePtr->value << endl;
	}
}