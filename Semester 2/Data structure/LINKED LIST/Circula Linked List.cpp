#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
};

struct node *tail = NULL;

struct node *circularSingle(int data){
	struct node *newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->link = newNode;
	tail = newNode;
	return newNode;
}

struct node * insertAtBeg(struct node *tail.data int data){
	struct node *newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->link = tail->link;
	tail->linkk = newNode;
	return tail;	
}

struct node *insertAtEnd(struct node *tail, int data){
	struct node *newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->link = tail->link;
	tail->link = newNode;
	tail = newNode;
	return tail;
}

void display(){
	if(tail == NULL){
		printf("List empty");
		return;
	} else {
		struct node *temp = tail->link;
		
		
		do{
			printf("%d ", temp->data);
		} while(temp != tail->link);
	}
}

int main(){
	
	tail = circularSingle(10);
	
	display();
	
	return 0;
}

