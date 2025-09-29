#include<stdio.h>
#include<string.h>

int main(){
	char firstName[100] = "Jhon";
	char lastName [100] = "Cena";
	
//	printf("Sebelum di copy: %s\n", firstName);
//	strcpy(firstName, lastName);
//	printf("Sesudah di copy: %s\n", firstName);
	
	printf("Berapa huruf dari First Name: %d\n",strlen(firstName));
	strlen(firstName);
	
	printf("Compare : %d\n", strcmp(firstName, "jhon"));
	
	
	
	return 0;
}
