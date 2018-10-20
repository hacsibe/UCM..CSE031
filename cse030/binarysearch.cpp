#include <iostream>
#include "RandomSupport.h"

using namespace std;

main () {

long n;

cout << "Enter long value for n:" ;
cin >> n >> endl;


struct Node {
	long data;
	Node* left;
	Node* right;
};

void traverse(Node* root){
	if (root != NULL){
		traverse (root->left);
		cout << root->data << endl;

		traverse(root->right);

  }
}

Node* insert(Node* root, int value){
	if (root == NULL){
	   root = New Node;
	   root->data = value;
	   root->left = NULL;
	   root->right = NULL;
 }

	else {
		if (value <= root->data){
		   root->left = insert(root->left, value);
	 	}
		else{
		root->right = insert(root->rigth, value);
		}
	}
	return root;
}

bool search (Node* root, int value){
	if (root == NULL){
 	    return false;
       }
	else{
	   if (root->data == value){
	      return true;
	   }
	   else if (value < root->data){
		return search(root->left, value);
	 }
	  else  {
		return search(root->right, value);
	   }
      }
}


#endif
