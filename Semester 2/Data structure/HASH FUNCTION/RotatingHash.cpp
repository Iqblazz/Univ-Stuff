#include<stdio.h>
#include<stdlib.h>

#define TABLE_SIZE 10
int hashTable[TABLE_SIZE];

int midSquare(int hashKey, int tableSize){
	long long int square = hashKey * hashKey;
	int result = (square/100); // mengambil 2 digit 
	return result;	
}


int rotatingHash(int hashKey, int tableSize){
	int remainder = 0;
	int reverse = 0;
	
	while(hashKey != 0){
		remainder = hashKey % 10;
		reverse = reverse * 10 + remainder;
		hashKey /= 10;
		
	}
	return reverse;
}


int main() {
	int hashKey = 20021;
	int hashVal = rotatingHash(hashKey, TABLE_SIZE); 
	
	printf("%d", hashVal);
	
	
	return 0;
}

