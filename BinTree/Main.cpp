#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Header_BinTree.h"

using namespace std;

int main() {
	binTree tree;
	srand(time(NULL));
	cout << "vvedite kol-vo elem"<<endl;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		tree.Insert_node(rand()%1000);
	}
	tree.print();

	system("pause");
}