#include <stdio.h>

void convertToGMT7(int *hh, int *mm){
	(*hh)--;
	if (*hh < 0){
		*hh = 23;
	}
}

int main (){
	char course_code[11];
	int hh1, mm1, hh2, mm2;
	
	scanf("%s %d:%d-%d:%d", course_code, &hh1, &mm1, &hh2, &mm2);
	convertToGMT7(&hh1, &mm1);
	convertToGMT7(&hh2, &mm2);
	printf("%s %02d:%02d-%02d:%02d\n", course_code,hh1, mm1, hh2, mm2);
	
	scanf("%s %d:%d-%d:%d", course_code, &hh1, &mm1, &hh2, &mm2);
	convertToGMT7(&hh1, &mm1);
	convertToGMT7(&hh2, &mm2);
	printf("%s %02d:%02d-%02d:%02d\n", course_code,hh1, mm1, hh2, mm2);
	
	scanf("%s %d:%d-%d:%d", course_code, &hh1, &mm1, &hh2, &mm2);
	convertToGMT7(&hh1, &mm1);
	convertToGMT7(&hh2, &mm2);
	printf("%s %02d:%02d-%02d:%02d\n", course_code,hh1, mm1, hh2, mm2);
	
	scanf("%s %d:%d-%d:%d", course_code, &hh1, &mm1, &hh2, &mm2);
	convertToGMT7(&hh1, &mm1);
	convertToGMT7(&hh2, &mm2);
	printf("%s %02d:%02d-%02d:%02d\n", course_code,hh1, mm1, hh2, mm2);
	
	scanf("%s %d:%d-%d:%d", course_code, &hh1, &mm1, &hh2, &mm2);
	convertToGMT7(&hh1, &mm1);
	convertToGMT7(&hh2, &mm2);
	printf("%s %02d:%02d-%02d:%02d\n", course_code,hh1, mm1, hh2, mm2);
	
	return 0;
}

