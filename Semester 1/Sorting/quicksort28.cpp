#include<stdio.h>

void swap(int* a, int* b){
	int temp = *a;
	*a =*b;
	*b = temp;
}
int partition(int mainArray[], int low, int high){
	// pivot di indeks terakhir
	int pivot = mainArray[high];
	// low = 0
	// 0 - 1 = -1 (indeksnya)
	int i = (low - 1);
	
	for(int j = low; j < high; j++){
		if(mainArray[j] < pivot) {
			i++;
			swap(&mainArray[i], &mainArray[j]);
		}
	}
	swap(&mainArray[i + 1],&mainArray[high]);
	return ( i + 1);
		}
		
void quick_sort(int mainArray[], int low, int high){
	if (low < high){
		// p pembatasnya
		int p = partition(mainArray, low, high);
		
		quick_sort(mainArray, low, p - 1);
		quick_sort(mainArray, p, high);
	}
}
void print_array(int arr[], int size){
	for(int i = 0; i < size; i++){
	printf("%d", arr[i]);
}	
}

	



int main(){
	int arr[] = {2, 3, 1, 4, 5};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	quick_sort(arr, 0, size -1);
	
	print_array(arr, size);
	return 0;
}
