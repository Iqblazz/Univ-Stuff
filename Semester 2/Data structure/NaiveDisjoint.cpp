#include<stdio.h>
#define MAX 5

// NATIVE
int parent[MAX];

//makeSet
void makeSet(int value){
	parent[value] = value;
}

int findSet(int value){
	if(value == parent[value]){
		return value;
	}
	
	return findSet(parent[value]);
}

// union -> menggabungkan 2 buah set
void unionSet(int a, int b){
	a = findSet(a);
	b = findSet(b);
	
	if(a != b){
		parent[b] = a;
	}
}

void printParent(){
	int i;
	for(i=0; i < MAX; i++){
		printf("%d ", parent[i]);
	}
	printf("\n");
}

int main(){
	
	//makeSet
	int i;
	for(i = 0; i < MAX; i++){
		makeSet(i);
	}
	printParent();
	unionSet(4,3);
	printParent();
	unionSet(1,2);
	printParent();
	unionSet(3,1);
	printParent();
	unionSet(0,1);
	printParent();
}
