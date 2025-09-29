#include <stdio.h>

 int main(){
  
  int a = 1;
  int b = 2;
  int c = 3;	
  int hasil;
 	printf("\tProgram Perkalian\n\n");
	
	printf("Masukkan Angka Pertama = ");
	scanf("%d",&a);
	
	printf("Masukkan Angka Kedua = ");
	scanf("%d",&b);
	
	printf("Masukkan Angka Ketiga = ");
	scanf("%d",&c);
	
	hasil = a * b * c;
	printf("Hasil dari Perkalian  = %d",hasil);
	
	return 0;
 }
