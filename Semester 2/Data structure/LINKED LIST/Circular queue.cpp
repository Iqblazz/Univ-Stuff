#include<stdio.h>
#define MAX 5

int circularQueue[MAX];
int front = -1;
int rear = -1;

void enqueue(int data){
	if(front == -1 && rear == -1){
		// kondisi empty
		front = 0;
		rear = 0;
		circularQueue[rear]= data;
	} else if((rear + 1) % MAX == front){
		printf("Overflow\n");
	} else {
		rear = (rear + 1) % MAX;
		circularQueue[rear] = data;
	}
}

void dequeue(){
	if(front == -1 && rear == -1){
		printf("Underflow\n");
	} else if (front == rear){
		// kondisi 1 data
		printf("Data yang dihapus: %d\n", circularQueue[front]);	
	} else {
		printf("Data yang dihapus: %d\n", circularQueue[front]);
		front = (front + 1) % MAX;
	}
}

void peek(){
	if(front == NULL && rear == NULL){
	printf("Underflow\n");	
	} else {
		printf("Front: %d\n", circularQueue[front]);
	}
}

void display(){
	int i = front;
	if(front == -1 && rear == -1){
		printf("Underflow\n");
	} else {
		while (i != rear){
			printf("%d ", circularQueue[i]);
			i = (i + 1) % MAX;
		}
		printf("%d\n", circularQueue[rear]);
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
