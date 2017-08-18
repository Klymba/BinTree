#pragma once
struct node_tree {
	int value;
	node_tree *right, *left, *parent;
};
typedef node_tree *pnode;

class binTree {
public:
	
	binTree();
	void Insert_node(int );
	void print();
	void print_Tree(node_tree*, int );
	pnode root;
};