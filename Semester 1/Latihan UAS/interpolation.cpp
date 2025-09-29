#include <stdio.h>

// tipe function int -> return integer/angka

int interpolation(int arr[], int left, int right, int target){
	if(left < right && target >= arr[left] && target <= arr[right]){
		int mid = left +(target- arr[left])*(right-left) / (arr[right] - arr[left]);
		
			// target == arr[mid]
			// return value mid
			if(target == arr[mid]){
				return mid;
			}
			
			// target > arr[mid]
			if(target > arr[mid]){
				return interpolation(arr, mid+1, right, target);
			}
			
			// nilai target < arr[mid]
			if(target < arr[mid]){
				return interpolation(arr, left, mid-1, target);
			}
	}	
}

int main (){
	int arr[] = {1,2,4,5,6};
	int sizeArr = sizeof(arr)/sizeof(arr[0]);
	int left = 0, right = sizeArr-1;
	int target = 1;
	
	int result = interpolation(arr, left, right, target);
	if(result == -1){
		printf("Not found\n");
	}
	else{
		printf("index = %d\n", result);
	}

	return 0;
}
