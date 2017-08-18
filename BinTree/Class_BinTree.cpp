#include <iostream>
#include "Header_BinTree.h"
using namespace std;

binTree::binTree() : root(NULL){}
void binTree::Insert_node(int newV) {
	pnode new_node = new node_tree;
	pnode x = NULL;
	pnode node = root;
	new_node->value = newV;
	while (node != NULL) {
		x = node;
		if ((new_node->value) < (node->value))	node = node->left;
		else	node = node->right;
	}
	new_node->parent = x;
	if (x == NULL)root=new_node;
	else  {
		if (new_node->value < x->value)
			x->left = new_node;
		else x->right = new_node;
	}
	new_node->right = NULL;
	new_node->left = NULL;
}
void binTree::print() {
	print_Tree(root, 0);
}
void binTree::print_Tree(node_tree *p, int level) {
	if (p)
	{
		print_Tree(p->left, level + 1);
		for (int i = 0; i < level; i++) cout << "   ";
		cout << p->value << endl;
		print_Tree(p->right, level + 1);
	}
}
	



