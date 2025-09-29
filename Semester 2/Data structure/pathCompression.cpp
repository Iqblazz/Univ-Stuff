#include <stdio.h>
#define MAX 5

int parent[MAX];

void makeSet(int value){
	parent[value] = value;
}

int findSet(int value){
	if(value == parent[value]){
		return value;
	}
	
	return parent[value] = findSet(parent[value]);
}

void unionSet(int a, int b){
	a = findSet(a);
	b = findSet(b);
	
	if(a != b){
		parent[b] = a;
	}
}

void printParent(){
	int i;
	for(i = 0; i < MAX; i++){
		printf("%d ", parent[i]);
	}
	printf("\n");
}

int main(){
	
	int i;
	for(i = 0; i < MAX; i++){
		makeSet(i);
	};
	
	unionSet(5,7);
	unionSet(6,8);
	unionSet(3,5);
	unionSet(3,6);
	unionSet(2,3);
	unionSet(2,4);
	unionSet(1,2);
	
	printParent();
}
