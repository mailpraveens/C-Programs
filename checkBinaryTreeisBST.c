#include <stdio.h>
#include <stdlib.h>
typedef struct node_t node;
struct node_t
{
	/* data */
	int value;
	node * left;
	node * right;
};

bool isBST(node * root){
	static node * prev = NULL;
	if (root == NULL){
		return 1; // Empty tree is also a BST
	}
	if (isBST(root->left)){
		if (prev != NULL && root->value <= prev->value)
			return 0;
			prev = root;
			return isBST(root->right);
	}
	return 1;
}
/* Helper functions*/

node * newNode(int val){
	node * newNode = (node *) malloc(sizeof(node));
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->value = val;
	return newNode;
}


int main(int argc, char const *argv[]){
  node *root = newNode(4);
  root->left        = newNode(2);
  root->right       = newNode(5);
  root->left->left  = newNode(1);
  root->left->right = newNode(3);
  if(isBST(root))
    printf("Given tree is a Binary Search Tree");
  else
    printf("Given tree is NOT a Binary Search Tree"); 
	return 0;
}