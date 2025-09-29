#include <stdio.h>

#define MAX_SIZE 100

int heap[MAX_SIZE] = {0};
int size = 0;

void upHeap(int childIdx);
void downHeap(int parentIdx);

int getParentIdx(int childIdx){
	return (childIdx-1) / 2;
}

void swap(int childIdx, int parentIdx){
	int temp = heap[parentIdx];
	heap[parentIdx] = heap[childIdx];
	heap[childIdx] = temp;
}

void insert(int value){
	heap[size] = value;
	size++;
	upHeap(size-1);
}

void upHeap(int childIdx){
	if(childIdx == 0){
		return;
	}
	int parentIdx = getParentIdx(childIdx);
	if(heap[childIdx] > heap[parentIdx]){
		swap(childIdx, parentIdx);
		upHeap(parentIdx);
	}
}

int getLeftChildIdx(int parentIdx){
	return parentIdx * 2 + 1;
}

int getRightChildIdx(int parentIdx){
	return parentIdx * 2 + 2;
}

void deleteMax(){
	if(size == 0){
		printf("Heap is Empty\n");
		return;
	}
	heap[0] = heap[--size];
	downHeap(0);
}
void downHeap(int parentIdx){
	int leftChildIdx = getLeftChildIdx(parentIdx);
	int rightChildIdx = getRightChildIdx(parentIdx);
	
	int newParentIdx = parentIdx;
	if(leftChildIdx < size && heap[leftChildIdx] > heap[newParentIdx]){
		newParentIdx = leftChildIdx;
	}
	if(rightChildIdx < size && heap[rightChildIdx] > heap[newParentIdx]){
		newParentIdx = rightChildIdx;
	}
	if(newParentIdx != parentIdx){
		swap(parentIdx, newParentIdx);
		downHeap(newParentIdx);
	}	
}

int findMax(){
	return heap[0];
}

int main(){
	insert(10);
	insert(11);
	insert(44);
	insert(37);
	insert(98);
	insert(1);
	printf("The largest element: %d\n", findMax());
	deleteMax();
	printf("The largest element: %d\n", findMax());
	
	return 0;
}
