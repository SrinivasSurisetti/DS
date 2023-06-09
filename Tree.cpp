#include<stdio.h>
#include<stdlib.h>
struct t_node{
	int data;
	struct t_node *left;
	struct t_node *right;
};
typedef struct t_node TreeNode;
//Creating a funtion that creates a
// Tree node and puts value in it.
TreeNode *create_tree_node(int val) {
	TreeNode *nn = (TreeNode*)malloc(sizeof(TreeNode));
	nn->data=val;
	nn->left=NULL;
	nn->right=NULL;
	return nn;
}

int main() {
	//Creating tree nodes
	TreeNode *n1,*n2,*n3,*n4,*n5,*n6,*n7,*n8,*n9;
	n1 = create_tree_node(10);
	n2 = create_tree_node(20);
	n3 = create_tree_node(30);
	n4 = create_tree_node(40);
	n5 = create_tree_node(50);
	n6 = create_tree_node(60);
	n7 = create_tree_node(70);
	n8 = create_tree_node(80);
	n9 = create_tree_node(90);
	
	//Making connections
	n1->left=n2;
	n1->right=n3;
	n2->left=n4;
	n2->right=n5;
	n3->left=n6;
	n3->right=n7;
	n4->right=n8;
	n7->left=n9;
	
	//Printing
	printf("Value in n1 is: %d\n",n1->data);
	printf("Value in n2 is: %d\n",n1->left->data);
	printf("Value in n3 is: %d\n",n1->right->data);
	printf("Value in n4 is: %d\n",n1->left->left->data);
	printf("Value in n5 is: %d\n",n1->left->right->data);
	printf("Value in n6 is: %d\n",n1->right->left->data);
	printf("Value in n7 is: %d\n",n1->right->right->data);
	printf("Value in n8 is: %d\n",n1->left->left->right->data);
	printf("Value in n9 is: %d\n",n1->right->right->left->data);
}
