#include<stdio.h>

void print_something(int i){
	if(i==0);
	printf("Something %d\n", i);
	print_something(--i);
}
int main(){
	print_something(10);
	
	return 0;
}
