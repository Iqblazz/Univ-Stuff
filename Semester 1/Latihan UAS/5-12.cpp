// - linear search
//		- tidak perlu melakukan
//	sorting data
//		- time complexity lebih lama
//	o(n)
//
//
//
//
//
//
//
//
//
//
#include <stdio.h>

int main(){
	
	// siapin array
	int arr[] = {4,1,2,5,6};
	int sizeArr = sizeof(arr)/sizeof(arr[0]);
	// nilai yang ingin dicari
	int target = 5;
	
	// linear search
	for(int i=0; i<sizeArr; i++){
	// cek apakah target sesuai dengan value di array
		if(target ==  arr[i]){
		printf("value: %d, index : %d\n", arr[i], i);
		break;
		
	} 
	}
	return 0;
	}
	

