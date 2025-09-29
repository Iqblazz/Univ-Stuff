#include<stdio.h>

void incrementValue(int *arr,int value,int size ){
	
	int *ptr = arr;
	int sizex = sizeof(arr)/sizeof(arr[0]);
//	int sizeArr = size;
	
	for(int i = 0;i < size; i++){
		*ptr += value;
		ptr++;
	}
	
}
int main(){
	int arr [5] = {1,2,3,4,5};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	incrementValue(arr, 2, size);
	
	for(int i=0; i< size;i++){
		printf("%d", arr[i]);
	}
	
	int swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int a = 10;
	int b = 20;
	
	swap(&a,&b);
	printf("a = %d, b = %d", a, b);
	
	float pi= 3.14;
	float *ptr1 = &pi;
	float **ptr2 = &ptr1;

	printf("%x\n", &pi);
	printf("%x\n", &ptr1);
	printf("%x\n", &ptr2); 
	
	int arr [3][4];
	
	printf("Masukkan Input: \n");
	for(int i=0; i <)

return 0;
}

