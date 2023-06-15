#include <iostream>
#include <string>
#include "BinaryTree.h"

using namespace std;

//INSERT 
void BinaryTree::insert(int insertId){
	root = insertRecursive(root,insertId);
}

Node *BinaryTree::insertRecursive(Node *currentRoot,int insertId){
	
	if (currentRoot == NULL){
		currentRoot = new Node();
		currentRoot->id = insertId;
		return currentRoot;
	}
	if (insertId < currentRoot ->id){
		currentRoot->left = insertRecursive(currentRoot->left, insertId);
	}
	else if (insertId >  currentRoot->id){
		currentRoot->right = insertRecursive(currentRoot->right, insertId);
		
	}
	return currentRoot;
	
}



//FIND MIN
Node* BinaryTree::findMin() {
    Node* node = root;
    while (node != NULL && node->left != NULL) {
        node = node->left;
    }
        cout << "Minimum value: " << node->id << endl;
    return node;
}


//FIND MAX
Node* BinaryTree::findMax() {
    Node* node = root;
    while (node != NULL && node->right != NULL) {
        node = node->right;
    }
        cout << "Maximum value: " << node->id << endl;
    
    return node;
}



Node* BinaryTree::search(int num){
	Node* node = root;
	while (node != NULL){
		if (node->id==num){
			cout<<"The value "<< num << " is found in the Binary Tree"<<endl;
			return node;
		}
		
		if (num<node->id){
			node = node->left;
		}else{
			node = node->right;	
		}
	}
	cout<<"The value "<< num << " is not found in the Binary Tree"<<endl;
	return NULL;
}

 	



void BinaryTree::inOrder(){
	inOrderRecursive(root);
}

void BinaryTree::inOrderRecursive(Node *currentRoot){
	if(currentRoot != NULL){
		inOrderRecursive(currentRoot->left);
		cout<<currentRoot->id<<",";
		inOrderRecursive(currentRoot->right);
	}
	
}

void BinaryTree::preOrder(){
	PreOrderRecursive(root);
}



void BinaryTree::PreOrderRecursive(Node *currentRoot){
	if(currentRoot != NULL){
		cout<<currentRoot->id<<",";
		inOrderRecursive(currentRoot->left);
		inOrderRecursive(currentRoot->right);
	}
	
}

void BinaryTree::postOrder(){
	PostOrderRecursive(root);
}

void BinaryTree::PostOrderRecursive(Node *currentRoot){
	if(currentRoot != NULL){
		inOrderRecursive(currentRoot->left);
		inOrderRecursive(currentRoot->right);
		cout<<currentRoot->id<<",";
	}
	
}

