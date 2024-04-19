#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main() {
	// Create an instance of binary tree
	BinaryTree<int> tree;

	// Insert nodes
	cout << "Inserting nodes.\n";
	tree.insertNode(5);
	tree.insertNode(8);
	tree.insertNode(3);
	tree.insertNode(12);
	tree.insertNode(9);

	// Display nodes
	cout << "Here are the values in the tree: \n";
	tree.displayInOrder();
	cout << endl;


	// Delate the 8 node
	cout << "Deleting 8...\n";
	tree.remove(8);

	// Delete the 12 node
	cout << "Deleting 12...\n";
	tree.remove(12);

	// Display the nodes again
	cout << "Now, here are the values in the tree: \n";
	tree.displayInOrder();
	cout << endl;

	return 0;
}