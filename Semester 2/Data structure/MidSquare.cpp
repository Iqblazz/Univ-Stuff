#include<stdio.h>
#include<stdlib.h>

#define TABLE_SIZE 10

int hashTable[TABLE_SIZE];

int  midSquare(int hashKey, int tableSize){
	long long int square = hashKey * hashKey;
	int result = (square/100); // mengambil 2 digit
	return result % tableSize;
}

int division(int hashKey, int tableSize){
	int len = strlen(hashKey);
	int i;
	int sum = 0;
	for(i = 0; i < len; i++){
		sum += hashKey[i];
	}
	return hashKey % tableSize;
}
//	int hashKey = 123;
//	int tableSize = TABLE_SIZE;
//	int hashVal = midSquare(hashKey, tableSize);
int folding
int main(){
	// division
	char hashKey[100];
	int table_size = TABLE_SIZE;
	int hashVal;
	
	printf("Enter the hash key : ");
	scanf("%d", &hashKey);
	
	hashVal = division(hashKey, table_size);
	
	printf("Hash Value: %d\n", hashVal);
	
	hashTable[hashVal] = hashKey;
	
	int i;
	for(i = 0; i < tableSize; i++){
		printf("Index-%d: %d\n", i, hashTable[i]);
	}
	
	return 0;
}
