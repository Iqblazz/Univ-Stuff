#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int data){
	if(top == MAX -1){
	// kondisi full
	printf("Stack Overflow");
	} else {
		top++;
		stack[top]=data;
	}
}

void pop(){
	if(top == -1){
		printf("Stack Underflow\n");
	} else {
		printf("Data yang dihapus: %d\n", stack [top]);
		top--;
	}
}

void peek(){
	if(top == -1){
		printf("Stack Underflow\n");
	} else {
		printf("Top: %d\n", stack[top]);
	}
}

void display(){
	if(top == -1){
		printf("Stack Underflow\n");
	} else {
		int i;
		for(int i = top; i >= 0; i--){
			printf("%d ", stack[i]);
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
