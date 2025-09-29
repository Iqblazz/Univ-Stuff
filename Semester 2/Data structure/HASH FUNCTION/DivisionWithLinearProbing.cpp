#include<stdio.h>
#include<stdlib.h>

#define TABLE_SIZE 10
int hashTable[TABLE_SIZE];

int division(int hashKey, int tableSize){
	return hashKey % tableSize;
}

int linearProbing(int hashKey, int tableSize){
	int index = hashKey % tableSize;
	int i = 1;
	while (hashTable[index] != 0){
		index = (hashKey + i) % tableSize;
		i++;
	}
	
	return index;
}

int printHashTable(int tableSize){
	int i;
	for(i = 0; i < tableSize; i++){
		printf("index-%d: %d\n", i, hashTable[i]);
	}
}

int main(){
	
	int hashKey;
	int tableSize = TABLE_SIZE;
	
	printf("Enter the hash key: ");
	scanf("%d", &hashKey);
	
	int index = division(hashKey, tableSize);
	printf("Index after division: %d\n", index);
	
	index = linearProbing(index, tableSize);
	printf("Index after linear probing: %d\n", index);
	
	hashTable[index] = hashKey;
	
	// input kedua
	printf("Enter the hash key: ");
	scanf("%d", &hashKey);
	
	index = division(hashKey, tableSize);
	printf("Index after division: %d\n", index);
	
	index = linearProbing(index, tableSize);
	printf("Index after linear probing: %d\n", index);
	
	hashTable[index] = hashKey;
	
	printHashTable(tableSize);
	
	return 0;
}
