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
};

struct node *insertNode(struct node *root, int data){
	if(root == NULL){
		root = createNode(data);
	}else if (data < root->data) {
		root->left = insertNode(root->left, data);	
	}else if(data > root->data){
		root->right = insertNode(root->right, data);
	}
	
	//data == root->data
	return root;
}

struct node *searchNode(struct node *root, int data){
	if(root == NULL || root->data == data){
		return root;
	} else if (data < root->data) {
		return searchNode(root->left, data);
	} else {
		return searchNode(root->right, data);
	}
}

struct node *deleteNode(struct node *root, int data){
	if(root == NULL){
		return root;
	} else if (data < root->data){
		root->left = deleteNode(root->left, data);
	} else if (data > root->data){
		root->right = deleteNode(root->right, data);
	} else {
		// case 1: 0 child
		if(root->left == NULL && root->right == NULL){
			free(root);
			root = NULL;
		} else if (root->left == NULL) { // case 2: 1 child
			struct node *temp = root;
			root = root->right;
			free(temp);
		} else if (root->right == NULL) { // case 2: 1 child
			struct node *temp = root;
			root = root->left;
			free(temp);
		} else {
			// case 3: 2 children
			// using RST (right subtree)
			// find the left most child of the RST
			struct node *temp = root->right;
			while(temp->left != NULL){
				temp = temp->left;
			}
			root->data = temp->data;
			root->right = deleteNode(root->right, temp->data);
			
			
			
			
			//using LST (left subtree)
			// find the irght most shild of LST
			//predecessor
//			struct node *temp = root->left;
//			while(temp->right != NULL){
//				temp = temp->right;
//			}
//			root->data = temp->data;
//			root->left =deleteNode(root->left, temp->data);
		}
		
	}
	return root;
}

void inorderTransversal(struct node *root){
	if(root == NULL) return;
	inorderTransversal(root->left);
	printf("%d->", root->data);
	inorderTransversal(root->right);
	}

void preorderTransversal(struct node *root){
	if(root == NULL) return;
	printf("%d->", root->data);
	preorderTransversal(root->left);
	preorderTransversal(root->right);
	}
	
void postorderTransversal(struct node *root){
	if(root == NULL) return;
	postorderTransversal(root->left);
	postorderTransversal(root->right);
	printf("%d->", root->data);
	}

struct node *findMin(struct node *root){
	if(root == NULL) return NULL;
	while(root->right != NULL){
		root = root->left;
	}
	return root;
}

struct node *findMax(struct node *root){
	if(root == NULL) return NULL;
	while(root->left != NULL){
		root = root->right;
	}
	return root;
} 

int main(){
	
	struct node *root = NULL;
	
	// insert data
	root = insertNode(root, 30);
	root = insertNode(root, 37);
	root = insertNode(root, 15);
	root = insertNode(root, 7);
	root = insertNode(root, 26);
	root = insertNode(root, 19);
	root = insertNode(root, 28);


	printf("inorder: ");
	inorderTransversal(root);
	printf("\n");
	
//	printf("preorder: ");
//	preorderTransversal(root);
//	printf("\n");
//	
//	printf("postorder: ");
//	postorderTransversal(root);
//	printf("\n");
	
	
	//search data
	struct node *node = searchNode(root, 15);
	if(node != NULL) {
		printf("found node with value %d\n", node->data);
	} else {
		printf("node not found\n");
	}
	
	//delete data
	root = deleteNode(root, 26);
	
	printf("inorder: ");
	inorderTransversal(root);
	printf("\n");
	
	// find min max
	node = findMin(root);
	printf("Min: %d\n", node->data);
	node = findMax(root);
	printf("Max: %d\n", node->data);
	
	return 0;
}
