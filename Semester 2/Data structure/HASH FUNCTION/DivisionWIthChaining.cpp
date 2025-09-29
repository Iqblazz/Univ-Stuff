#include<stdio.h>
#include<stdlib.h>

#define TABLE_SIZE 10

struct node{
	int data;
	struct node *link;
};
struct node *hashTable[TABLE_SIZE];

int division(int hashKey, int tableSize){
	return hashKey % tableSize;
}

void insert(int hashKey, int tableSize){
	int index = division(hashKey, tableSize);
	struct node *newNode = (struct node *)malloc(sizeof(node));
	newNode->data = hashKey;
	newNode->link = NULL;
	
	if(hashTable[index] == NULL){
		hashTable[index] = newNode;
	} else {
		struct node *temp = hashTable[index];
		while(temp->link != NULL) {
			temp = temp->link;
		}
		temp->link = newNode;
	}
}

void printHashTable(){
	int i;
	for(i = 0; i < TABLE_SIZE; i++){
		printf("Index-%d: ", i);
		struct node *temp = hashTable[i];
		while(temp != NULL){
			printf("%d ->", temp->data);
			temp = temp->link;
		}
		printf("NULL\n");
	}
}

int main(){
	
	int hashKey;
	int tableSize = TABLE_SIZE;
	
	printf("Enter the hash key: ");
	scanf("%d", &hashKey);
	
	insert(hashKey, tableSize);
	
	printHashTable();
	
	printf("Enter the hash key: ");
	scanf("%d", &hashKey);
	
	insert(hashKey, tableSize);
	
	printHashTable();
	
	
	return 0;
}
