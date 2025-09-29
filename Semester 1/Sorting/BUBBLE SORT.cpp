 #include<stdio.h>
 int main(){
 
//	data array nya
	int arr[] = {7,1,2,5,9};
	
//	int -> 4 bits
//	int arr -> 4 * 5 = 20 bits
//	size -> 20 bits / 4 bits
//	size arr = 5
	
//	besar / panjang dari array
	int size = sizeof(arr)/sizeof(arr[0]);
	
	// bubble sort
	for (int i=0; i < size -1; i++){
		// looping kedua utk membandingkan angka yang bersebelahan
		for(int j=0; j < size-i-1; j++){
			// kondisi bertukaran data
			// 7 1 2 5
			// 0 1 2 3
			// jadi 1 7 2 5
			if(arr[j]> arr[j+1]){
				int temp = arr[j];
				arr[j] = arr [j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	//untuk melihat hasil
	for(int i=0; i<size; i++){
		printf("%d", arr[i]);
	}
	return 0;
	}	
