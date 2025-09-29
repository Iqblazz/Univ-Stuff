#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

struct node *createNode(int data){
	struct node *newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	
	return newNode;
}

struct node *insertLeft(struct node *root, int data){
	root->left = createNode(data);
	return root->left;
}

struct node *insertRight(struct node *root, int data){
	root->right = createNode(data);
	return root->right;
}

void inorderTraversal(struct node *root){
	if(root == NULL) return;
	inorderTraversal(root->left);
	printf("%d->", root->data);
	inorderTraversal(root->right);
}

void preorderTraversal(struct node *root){
	if(root == NULL) return;
	printf("%d->", root->data);
	preorderTraversal(root->left);
	preorderTraversal(root->right);
}

void postorderTraversal(struct node *root){
	if(root == NULL) return;
	postorderTraversal(root->left);
	postorderTraversal(root->right);
	printf("%d->", root->data);
}

int main(){
	struct node *root;
	
	root = createNode(10);
	struct node *node2 = insertLeft(root, 20);
	struct node *node3 = insertRight(root, 30);	
	struct node *node4 = insertLeft(node2, 40);	
	struct node *node5 = insertLeft(node2, 50);	
	
	root = createNode(10);
	node2 = insertLeft(root, 20);
	node3 = insertRight(root, 30);
	node4 = insertLeft(node2, 40);
	node5 = insertRight(node2, 50);

	
	printf("PostOrder: ");
	postorderTraversal(root);
	printf("\n");
	printf("PreOrder: ");
	preorderTraversal(root);
	printf("\n");
	printf("Inorder: ");
	inorderTraversal(root);

	
	return 0;
}
