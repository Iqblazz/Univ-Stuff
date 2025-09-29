#include <stdio.h>

int main(){
	//			left	right
	int arr[] = {1,2,4,5,6};
	int sizeArr = sizeof(arr)/sizeof(arr[0]);
	// left = 0 , right = 4
	int left = 0, right = sizeArr-1;
	// target -> nilai yang ingin di cari
	int target = 1;
	
	// solving binary search
	for(int i=0; i<sizeArr; i++){
		// cari nilai mid di dalam looping
		int mid = left + (right - left) / 2;
		// mid = 0 + (4-0) / 2
		// mid = 2  -> ambil value di index
		
		// ambil hasil yang sama dengan target
		if(target == arr[mid]){
			printf("Found value in idx=%d\n");
			break;
		}
		// target < arr[mid] -> akan ambil nilai
		// dari imdex 0 sampai idx (mid-1)
		if(target < arr[mid]){
			right = mid -1;
		}
		// target > app [mid] akan ambil nilai dari mid +1 sampai idx terakhir
		if(target > arr[mid]){
			left = mid +1;
		}
	}
	return 0;
}
