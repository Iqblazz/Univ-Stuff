#include <stdio.h>

#define MAX_SIZE 100
#define MAX_NAME_LENGTH 100


typedef struct{
	char name[MAX_NAME_LENGTH];
	int overallScore;
} Task;

Task heap[MAX_SIZE];


int size = 0;
void upHeap(int childIdx);
void downHeap(int parentIdx);

int getParentIdx(int childIdx){
	return (childIdx-1) / 2;
}

void swap(int childIdx, int parentIdx){
	Task temp = heap[parentIdx];
	heap[parentIdx] = heap[childIdx];
	heap[childIdx] = temp;
}


void insert(char *taskName, int overallScore){
	strcpy(heap[size].name, taskName);
	heap[size].overallScore = overallScore;
	size++;
	upHeap(size-1);
}

void upHeap(int childIdx){
	if(childIdx == 0){
		return;
	}
	int parentIdx = getParentIdx(childIdx);
	if(heap[childIdx].overallScore > heap[parentIdx].overallScore){
		// kalo minHeap diubah tandanya menjadi <
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
		printf("You have no task\n");
		return;
	}
	printf("You finished %s.\n", heap[0].name);
	heap[0] = heap[--size];
	downHeap(0);
}
void downHeap(int parentIdx){
	int leftChildIdx = getLeftChildIdx(parentIdx);
	int rightChildIdx = getRightChildIdx(parentIdx);
	
	int newParentIdx = parentIdx;
	if(leftChildIdx < size && heap[leftChildIdx].overallScore > heap[newParentIdx].overallScore){
		// kalo minHeap diubah tandanya menjadi <	
		newParentIdx = leftChildIdx;
	}
	if(rightChildIdx < size && heap[rightChildIdx].overallScore > heap[newParentIdx].overallScore){
		// kalo minHeap diubah tandanya menjadi <
		newParentIdx = rightChildIdx;
	}	
	if(newParentIdx != parentIdx){
		swap(parentIdx, newParentIdx);
		downHeap(newParentIdx);
	}
}

int findMax(){
	if(size == 0){
		Task emptyTask;
		strcpy(emptyTask.name, "No task!");
		emptyTask.overallScore = -1;
		return emptyTask;
	}
	return heap[0];
}

void insertTask(){
	char taskName[MAX_NAME_LENGTH];
	int importanScore, urgencyScore;
	
	printf("Enter task name: ");
	scanf("%[^\n]", taskName);
	printf("Enter important score: ");
	scanf("%d", &importanceScore);
	printf("Enter urgency score: ");
	scanf("%d", &urgencyScore);
	
	int overallScore = importanceScore + urgencyScore;
	insert(taskName, overallScore)
}

void seeNextTask(){
	Task nextTask = findMax();
	if(nextTask.overallScore == -1){
		printf("%s", nextTask.name);
	}else{
		printf("The next task is : %s\n", nextTask.name);
	}
}

void finishNextTask(){
	deleteMax();
}


int main(){
	
	int choice;
	while(1){
		printf("Menu : \n");
		printf("1. Insert new task\n");
		printf("2. See next task\n");
		printf("3. Finish the next task\n");
		printf("4. Exit\n");
		
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
			insertTask();
			break;
		case 2:
			seeNextTask();
			break;
		case 3:
		}
		
			
	}
	
	
	
	
	
	return 0;
}
