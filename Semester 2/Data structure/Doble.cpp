#include <stdio.h>
#include <stdlib.h>

struct node{
	struct node *prev;
	int data;
	struct node *next;
};

struct node *head = NULL;

void insertAtBeg(int data){
	struct node *newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = data;
//	newNode->link = NULL;
	newNode->next = NULL;
	newNode->prev = NULL;
	
	
	if(head == NULL){
		head = newNode;
		return;
	}else{
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
	
}

void insertAtEnd(int data){
struct node *newNode = (struct node *)malloc(sizeof(struct node));
	
	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = NULL;
	
	if(head == NULL){
		head = newNode;
		return;
	} else {
		struct node *temp = head;
		
		while(temp->prev != NULL){
			temp = temp->next;
		}
		
		temp->next = newNode;
		newNode->prev = temp;
	}
}

void insertAtPos(int data, int pos){
struct node *newNode = (struct node *)malloc(sizeof(struct node));
	
	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = NULL;
	
	if(head == NULL){
		head = newNode;
	}	else {
		struct node *temp = head;
		pos--;
		while(pos != 1 && temp != NULL){
			temp = temp->next;
			pos--;
		}
		if(temp != NULL){
			newNode->prev = temp->next;
			newNode->prev = temp;
			temp->next = newNode;
			
			if(temp->next != NULL){
				temp->next->prev = newNode;
			} else {
				printf("Invalid Posistion");
			}
		}
	}
}

void deleteAtBeg(){
	if(head == NULL){
		printf("List Empety");
		return;
	} else {
		struct node *temp = head;
		
		head = head->next;
		if(head != NULL){
			head->prev = NULL;
		}
		free(temp);
		temp = NULL;
	}
}

void deleteAtEnd(){
	if(head == NULL){
		printf("list empty");
		return;
	} else id (head->next == NULL){ // jika ad 1 node
	free(head);
	head = NULL;
	} else {
		struct node *temp = head;
		while (temp->next != NULL){
			temp = temp->next;
		}
		
		temp->prev->next = NULL;
		free(temp);
		temp = NULL;
	}
	}
}

void deleteAtPos(int pos){
	struct node *temp = head;
	
	if(head == NULL){
		printf("List empty");
		return;
	} else if (pos == 1){
		deleteAtBeg();
	} else { 
	int count = 1;
	while (temp != NULL && count < pos){
		temp = temp->next;
		count ++;
	}
	
	if(temp == NULL){
		printf("Invalid Posisition");
		return;
	} 
	temp->prev->next = temp->next;
	if(temp->next != NULL) {
		temp->next->prev = temp->prev;
	}
	free(temp);
	temp = NULL;
}
}

void display(){
	struct node *temp = head;
	
	if(head == NULL){
		printf("List Empty.\n");
		return;
		
	}else{
		while(temp != NULL){
			printf("%d ", temp->data);
			temp = temp->next;
		}
	}
}


int main(){
	insertAtBeg(10);
	insertAtBeg(20);
	insertAtBeg(30);	
	insertAtEnd(16);
	insertAtPos(18, 3);
	deleteAtBeg();
	deleteAtEnd();
	
	
	
	display();
	
	return 0;
}
