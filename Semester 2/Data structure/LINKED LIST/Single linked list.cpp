#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
};

struct node *head = NULL;

void insertAtBeg(int data){
	struct node *newNode = (struct node *) malloc(sizeof(struct node));
	newNode->data = data;
//	newNode->link = NULL;
	
	newNode->link = head;
	head = newNode;
}
void insertAtEnd(int data){
	struct node *newNode = (struct node *) malloc(sizeof(struct node));
	newNode->data = data;
	newNode->link = NULL;
	
	if(head == NULL){
		head = newNode;
	} else {
		struct node *temp = head;
		
		while(temp->link != NULL){
			temp = temp->link;
		}
		
		temp->link = newNode;
	}
}

void insertAtPos(int data, int pos){
	struct node *newNode = (struct node *) malloc(sizeof(struct node));
	newNode->data = data;
	newNode->link = NULL;	
	
	if(head == NULL){
		printf("kosong");
		return;
	} else { 
		struct node *temp = head;
		
		pos--;
		while(pos != 1 && temp != NULL){
			temp = temp->link;
			pos--;
		}
		
		if(temp != NULL){
			newNode->link = temp->link;
			temp->link = newNode;
		} else {
			printf("Invalid Poisition");
		}
	}
}

void deleteAtBeg(){
	struct node *temp = head;
	
	if(head == NULL){
		printf("Kosong");
	} else {
		head = head->link;
		free (temp);
		temp = NULL;
	}
}

void deleteAtEnd(){
	struct node *temp = head;
		if(head == NULL){
		printf("Kosong");
		return;
	} else if (head->link == NULL){// jika ada 1 node
		free(head);
		head == NULL;
	} else {
		while (temp->link->link != NULL){
			temp = temp->link;
		}
		free(temp->link);
		temp->link = NULL;
	}
	
}

void deleteAtPos(int pos){
	struct node *prev = head;
	struct node *current = head;
	
	if(head == NULL){
		printf("Kosong");
		return;
	} else if (pos == 1){
		deleteAtBeg();
	} else {
		int i;
		for(int i = 1; current != NULL && i < pos; i++){
			prev = current;
			current = current->link;
		}
		if(current == NULL){
			printf("Invalid Posisition");
			return;
		}
		prev->link = current->link;
		free(current);
		current = NULL;
	}
}

void display(){
	struct node *temp = head;
	
	if(head == NULL){
		printf("Kosong");
		return;
	} else {
		while(temp!= NULL){
			printf("%d ", temp->data);
			temp = temp->link;
		}
	}
}

int main(){
	
	insertAtBeg(10);
	insertAtBeg(20);
	insertAtBeg(30);
	insertAtEnd(50);
	insertAtPos(16, 3);
	deleteAtBeg();
	deleteAtPos(3);
	
	
	display();
	
	return 0;
}
