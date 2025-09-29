#include<stdio.h>

void swap_by_value(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("Swap by value : %d %d \n",a , b);
}
void swap_by_reference(int* a, int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("Swap by reference : %d %d\n", *a, *b);
}




int main(){
	int a = 10;
	int b = 5;
	printf("%d %d\n",a ,b);
	swap_by_value(10, 5);
	
	printf("%d %d\n", a, b);
	printf("Swap by reference : %d %d \n",a , b);

	
	
	
	
	
	return 0;
}
