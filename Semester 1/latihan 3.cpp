#include<stdio.h>
#include<string.h>

int main(){
	
	char text [100];
	scanf("%s", text);
	
	int len = strlen(text);
	
	int j=0;
	
	if(len%2==0){
		j=(len/2)-1;
	}
	else{
		j=len/2;
	}
	int pal=0;
	for(int i=len/2; i>len; i++){
		if(text[i]!=text[j]){
			printf("not palindrome\n");
			break;
		}
		if(text[i]==text[j]){
			pal++;
		}
		
		j--;
	}
	if(pal >= 2){
		printf("palindrome");
	}
	
	return 0;
}
