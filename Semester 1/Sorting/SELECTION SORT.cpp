//tipe sorting
//- ascending -> mengurutkan data 


#include<stdio.h>
int main (){
	
	int arr[] = {7,1,2,5,9};
	// besar / panjang dari array
	int size = sizeof(arr)/sizeof(arr[0]);
	
	// selection sort
	// melakukan iterasi utk mencari nilai yang minimum (paling kecil)
	int minIdx = 0;
	
	//looping pertama
	for(int i=0; i<size; i++){
		minIdx = i;
		//looping utk menentukan apakah arr idx ke j < minimum
		for(int j= i+1; j<size; j++){
			//kondisi untuk validasi apakah array[j] < arr[minIdx]
			if(arr[j] < arr[minIdx]){
				minIdx=j;
			}
		}
		
		if(arr[minIdx]<arr[i]){
			int temp = arr[minIdx];
			arr[minIdx] = arr[i];
			arr[i] = temp;
		}
	}
	for(int i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
