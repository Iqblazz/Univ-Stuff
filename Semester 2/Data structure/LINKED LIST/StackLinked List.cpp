#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};

struct node *top = NULL;

void push(int x){
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = x;
	newNode->link= top;
	top = newNode;
}	

void pop(){
	if(top == NULL){
		// kondisi empty
		printf("Stack Underflow\n");
	} else {
		struct node *temp = top;
		printf("Data yang dihapus: %d\n", top->data);
		top = top->link;
		free(temp);
		temp = NULL;
	}
}

void peek(){
if(top == NULL){
		// kondisi empty
		printf("Stack Underflow\n");
	} else {
		printf("Top : %d\n", top->data);
	}
}

void display() {
	if(top == NULL){
		// kondisi empty
		printf("Stack Underflow\n");
	} else {
		struct node *temp = top;
		while(temp != NULL){
			printf("%d ", temp->data);
			temp = temp->link;
		}
		printf("\n");
	}
}

int main(){
	
	push(10);
	push(20);
	push(30);
	peek();
	pop();


	display();
	return 0;
}
