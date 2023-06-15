#include <iostream>
#include <string>
#include "BinaryTree.h"

using namespace std;

int main(){
	
	
	BinaryTree bin;
	
	bin.insert(20);
	bin.insert(14);
	bin.insert(18);
	bin.insert(50);
	bin.insert(103);
	bin.insert(54);
	bin.insert(21);
	bin.insert(1);
	
	bin.insert(30);

	cout << "\nPre Order\n";
	bin.preOrder();
	cout << "\nIn Order\n";
	bin.inOrder();
	cout << "\nPost Order\n";
	bin.postOrder();
	
	cout<<endl;
	
	bin.findMin();
	
	cout<<endl;
	bin.findMax();	
	
	int num;
	cout<<endl<<endl<<"Search a value from the tree: ";
	cin >>num;
	bin.search(num);
	
	
	return 0;
}
