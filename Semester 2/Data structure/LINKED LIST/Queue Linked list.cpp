#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int data){
	struct node *newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->link = NULL;
	
	if(front == NULL && rear == NULL){
		//kondisi empty
		front = newNode;
		rear = newNode;
	} else {
		rear->link = newNode;
		rear = newNode;
	}
}

void dequeue(){
	if(front == NULL && rear == NULL){
	printf("Underflow\n");
	} else {
		struct node *temp = front;
		printf("Data yang dihapus: %d\n", front->data);
		front = front->link;
		free(temp);
		temp = NULL;
		
		if(front == NULL){
			rear = NULL;
		}
	}	
}

void peek(){
	if(front == NULL && rear == NULL){
	printf("Underflow\n");	
	} else {
		printf("Front: %d\n", front->data);
	}
}

void display(){
	if(front == NULL && rear == NULL){
	printf("Underflow\n");
	} else {
		struct node *temp = front;
		while(temp != NULL){
			printf("%d ", temp->data);
			temp = temp->link;
		}
		printf("\n");
	}
}
int main(){
	
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	display();
	peek();
	dequeue();
	dequeue();
	display();
	
	
	
	return 0;
}
