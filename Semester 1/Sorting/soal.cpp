#include<stdio.h>

int main(){
	
	int arr[] = {2,1,2,3,1,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	// bubble sort
	for(int i=0; i<size-1; i++){
		for(int j = 0; j<size-i-1; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	// print data 
	for(int i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	
	// validasi angka yng redundant
	int temp[size];
	int j = 0;
	for(int i = 0; i<size-1; i++){
		if(arr[i] != arr[i+1]){
			temp[j++] = arr[i];
		}
	}
	
	temp[j++] = arr[size-1];
	
	for(int i=0; i<j; i++){
		printf("%d ", temp[i]);
	}
	
//	temp[j++] = arr[size-1];
	
//	for(int i = 0; i<j; i++){
//		arr[i] = temp[j];
//	}
//	
//	//print data 
//	for(int i=0; i<j; i++){
//		printf("%d ", arr[i]);
//	}
	
	return 0;
}
