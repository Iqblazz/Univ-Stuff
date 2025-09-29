#include<stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int data){
	if(front == -1 && rear == -1){
		// kondisi empty
		front = 0;
		rear = 0;
		queue[rear] = data;
	} else if (rear == MAX-1){
		printf("Overflow\n");
	} else {
		rear++;
		queue[rear] = data;
	}
}

void dequeue(){
	if(front == -1 && rear == -1){
		printf("Underflow\n");
	} else if(front == rear){
		// kondisi ketika 1 data
		printf("Data yang dihapus: %d\n", queue[front]);
		front = -1;
		rear = -1;
	} else {
		printf("Data yang dihapus: %d\n", queue[front]);
		front++;
}
}
void peek(){
	if(front == -1 && rear == -1){
		printf("Underflow\n");
	} else {
		printf("Front: %d\n", queue[front]);
	}	
}

void display(){
	if(front == -1 && rear == -1){
		printf("Underflow\n");
	} else {
		int i;
		for(i = front; i < rear + 1; i++){
			printf("%d ", queue[i]);
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
