#include<stdio.h>
#include<stdlib.h>

#define TABLE_SIZE 100
// char buffer[100];
//	sprintf(buffer, "%d", 14568);
//	printf("%c", buffer[0]);
//	printf("%c", buffer[2]);
//	printf("%c", buffer[4]);
//	
int hashTable[TABLE_SIZE];

int digitExtraction(int hashKey, int pos[], int size, int tableSize){
	char buffer[100];
	sprintf(buffer, "%d", hashKey);

	// string to int
	int extractedValue = 0;
	int i;
	for(i = 0; i < size; i++){
		extractedValue = extractedValue * 10 + (buffer[pos[i]-1] -'0');
	}
	
	return extractedValue % tableSize;
	
}

int printHashTable(int tableSize){
	int i;
	for(i = 0; i < tableSize; i++){
		printf("index-%d: %d\n", i, hashTable[i]);
	}
}

int main(){
	
	int hashKey;
	int hashVal;
	int tableSize = TABLE_SIZE;
	int pos[] = {1, 3, 5};
	int size = sizeof(pos) / sizeof(pos[0]);
	
	printf("Enter the hashKey: ");
	scanf("%d", &hashKey);
	
	int index = digitExtraction(hashKey, pos, size, tableSize);
	
	printf("The index is: %d\n", index);
	
	hashTable[index] = hashKey;
	
	printHashTable(tableSize);

	return 0;
}
