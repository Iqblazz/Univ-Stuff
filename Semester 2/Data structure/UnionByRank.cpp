#include <stdio.h>
#define MAX 5

int parent[MAX];
int rank[MAX];

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void makeSet(int value){
	parent[value] = value;
	rank[value] = 0;
}

int findSet(int value){
	if(value == parent[value]){
		return value;
	}
	
	return findSet(parent[value]);
}

void unionSet(int a, int b){
	a = findSet(a);
	b = findSet(b);
	
	if(a != b){
		if(rank[a] < rank[b]){
			swap(&a, &b);
		}
		parent[b] = a;
		if(rank[a] == rank[b]){
			rank[a]++;
		}
	}
}

void printParent(){
	int i;
	for(i = 0; i < MAX; i++){
		printf("%d ", parent[i]);
	}
	printf("\n");
}

void printRank(){
	int i;
	for(i = 0; i < MAX; i++){
		printf("%d ", rank[i]);
	}
	printf("\n");
}

int main(){


	int i;
	for(i = 0; i < MAX; i++){
		makeSet(i);
	}
	
	printf("Initial arrays: \n");
	printParent();
	printRank();
	
	printf("Union 4,3 \n");
	unionSet(4, 3);
	printParent();
	printRank();
	
	printf("Union 2,1 \n");
	unionSet(2, 1);
	printParent();
	printRank();
	
	printf("Union 3,1 \n");
	unionSet(3, 1);
	printParent();
	printRank();
	
	printf("Union 0,1 \n");
	unionSet(0, 1);
	printParent();
	printRank();
	
}



