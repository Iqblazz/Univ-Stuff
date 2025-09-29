// advanced sorting
// quick sort - > pivot -> patokan untuk membandingkan
// merge sort
// menggunakan teknik divide dan conquer -> divide -> bakal dibagi setengah setengah, 
// conquer -> lalu bakal disusun kembali 

#include<stdio.h>

void print_array(char arr[], int size){
	for(int i = 0; i < size; i++){
		printf("%c ", arr[i]);
	}
}

void merge_sort(char mainArray[], int left, int right){
	if(right == left){
		return;
	}
	// divide
	// indeks tengah = (right - left) / 2 + left
	int middle = (right-left) / 2 + left;
	
	// left indeksnya 0 (pertama)
	// right indeksnya 4 (terakhir)
	// bagian kiri
	merge_sort(mainArray, left, middle);
	
	// bagian kanan
	merge_sort(mainArray, middle + 1, right);
	
	// conquer
	int temp[right - left];
	// leftIndex & rightIndex itu buat proses sortingnya
	// leftLimit & rightLimit itu buat pembatasannya
	int leftIndex = left;
	int leftLimit = middle;
	int rightIndex = middle + 1;
	int rightLimit = right;
	
	
	
	// proses sortingnya
	int tempIndex = 0;
	while(leftIndex <= leftLimit && rightIndex <= rightLimit){
		if (mainArray[leftIndex] < mainArray[rightIndex]){
			temp[tempIndex] = mainArray[leftIndex];
			leftIndex++;
			tempIndex++;
		} else {
			temp[tempIndex] = mainArray[rightIndex];
			rightIndex++;
			tempIndex++;
		}
	}
	
	
	// copy nilai left dan right ke temp
	while(leftIndex <= leftLimit){
		temp[tempIndex] = mainArray[leftIndex];
		leftIndex++;
		tempIndex++;
	}
	// right
	while(rightIndex <= rightLimit){
		temp[tempIndex] = mainArray[rightIndex];
		rightIndex++;
		tempIndex++;
	}
	
	// memasukkan nlai temp ke main array
	tempIndex = 0;
	// dari paling kiri sampai paling kanan
	for(int i = left; i <= right; i++) {
		mainArray[i] = temp[tempIndex];
		tempIndex++;
	}
}

int main() {
	char arr[] = {'b', 'd', 'a', 'c', 'e'};
	int size = sizeof(arr)/sizeof(arr[0]);	
	
	// arr -> array yang mau di sorting
	// 0 -> mulai indeks ke 0(pertama)
	// size-1 -> size(5) - 1 = 4 (indeks terakhir)
	merge_sort(arr ,0, size -1);
	
	print_array(arr, size);
return 0;
}
