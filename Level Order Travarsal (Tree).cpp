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
	TreeNode *nn = (TreeNode *)malloc(sizeof(TreeNode));
	nn->data=val;
	nn->left=NULL;
	nn->right=NULL;
	return nn;
}
void level_order(TreeNode *root) {
	TreeNode *q[1002];
	int front=0,rear=1;
	q[0]=root;
	while(front!=rear) {
		TreeNode *dn = q[front++]; //Deque
		printf("%d ",dn->data);
		//Check if deleted node is having left child
		if(dn->left!=NULL) {
			q[rear++]=dn->left;
		}
		//Check if deleted node is having Right child
		if(dn->right!=NULL) {
			q[rear++]=dn->right;
		}
		dn=NULL;
		free(dn);
	}
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
	printf("Level Order Traversal -> ");
	level_order(n1);
	
}
