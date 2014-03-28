// Program to print all nodes at a distance k from a node in a binary tree

#include <stdio.h>
#include <stdlib.h>
typedef struct node_t node;

struct node_t{
	/* data */
	int data;
	node * left;
	node * right;
};

node * getNewNode(int data){
	node * temp = (node *) malloc(sizeof(node));
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}


void printNodesAtDistancek(node * root, int k) {
	if(root == NULL || k < 0) 
		return;
	if(k==0){
		// We have reached that node
		printf("Node: %d\n",root->data);
		return;
	}
	printNodesAtDistancek(root->left, k-1);
	printNodesAtDistancek(root->right, k-1);
}

int main(int argc, char const *argv[])
{
	/* code */
	node * root = getNewNode(20);
	root->left = getNewNode(8);
    root->right = getNewNode(22);
    root->left->left = getNewNode(4);
    root->left->right = getNewNode(12);
    root->left->right->left = getNewNode(10);
    root->left->right->right = getNewNode(14);
    node * target = root->left->right;
    printNodesAtDistancek(root,3);
	return 0;
}