#include<stdio.h>

int main() {
	
	int array1d[5];

	array1d[2] = 3;
	array1d[3] = 4;
	array1d[4] = 5;

	*array1d = 1;
	*(array1d + 1) = 2;
	*(array1d + 2) = 3;
	
	printf("%d %d\n", array1d[2], array1d[3]);
	printf("%d %d\n", *array1d, *(array1d +1));
	
	for(int i = 0; i < 5; i++){
		printf("%d ", array1d[i]);
	}	
	
	int array2d[3][3];
	
	array2d[0][0] = 1;
	array2d[1][1] = 5;
	
	*(array2d[2] + 2) = 9;
	
	printf("%d %d\n", array2d[0][0]);
	array2d[1][1];
	printf("%d", *(array2d[2] + 2));

	
return 0;

}
