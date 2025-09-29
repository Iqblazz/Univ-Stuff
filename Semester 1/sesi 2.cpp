#include<stdio.h>
#include<string.h>
int main(){
	char pass[100];
	scanf("%s", pass); getchar();
	
	int special=0;
	int isNum=0;
	int isUpper=0;
	
	int totalFlag=0;
	
	for(int i=0; i<strlen(pass); i++){
		if(pass[i]=='#' || pass[i]=='!'|| pass[i]=='@'){
			special++;
			
			if(pass[i]>='0' && pass[i]<='9'){
				isNum++;
			}
			if(pass[i]>='A' && pass[i]<='z'){
				isUpper++;
			}	
		}
		if(special > 0){
			totalFlag++;
		}
		if(isNum > 0){
			totalFlag++;
		}
		if(isUpper > 0){
			totalFlag++;
		}
		if(totalFlag == 3){
			printf("Strong Password\n");
		}	
		else if(totalFlag == 2){
			printf("Medium Password\n");
		}
		else{
			printf("Weak Password\n");
		}
//		if(special>0 && isNum>0 && isUpper > 0){
//			printf("Strong Password");
//		}
//		else if(special > 0 && isNum>0){
//			printf("Medium Password");
//		}
//		else if(special>0 || isNum>0){
//			printf("Weak Password");
//		}
//		else{
//			printf("validasi tidak ada yang bisa");
//		}
	}

	
	return 0;
}
