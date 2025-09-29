#include <stdio.h>
#include <stdlib.h>
////	pointer = sebuah tipe data yang menyimpan memori dari sebuah variable
//Simbol = *
////int* a; -> 1000
//referencing operator -> mengreturn sebuah memori pada variable
//Simbol -> &
//int b = 10;
//a = &b;
int main(){
	//	int* b = (int*)calloc (3, sizeof(int));
	
	int*b =(int *) malloc(sizeof(int*)* 3);

	*b = 1;
	*(b+1) = 2;
	*(b+2) = 3;
	
	b = (int *) realloc(b, sizeof(double));
	
	printf("%d %d %d" , *b, *(b+1), *(b+2));
	
	
	
//	int* a_pointer;
//	int a = 10;
	
//	a_pointer = &a;
//	
//	printf("%d %d\n", a_pointer, &a);
//	printf("%d %d\n", *a_pointer, a);
	
	return 0;
}

