//function = gunanya mempermudah kita untuk memanggil atau mengeksekusi beberapa statement itu bisa berulang kali tanpa harus mengetik ulang statementnya
//parameter = sebuah variable yang digunakan dalam sebuah function untuk menerima input dari luar function atau dalam function
//return_value nama_function(parameter list){
//			body(statement) 
//		}
//void = tidak mengreturn apa-apa
//void greetings (){
//	printf("hello")
//}
//int sum(int a, int b){
//}



#include<stdio.h>
int angka = 10;
void greetings(){
	printf("Hello\n");
}

int sum(int a, int b){
	return a+b;
}

double max(int a, int b){
	if ( a > b ) return a;
	return b;
}

int volume(int a, int b, int c);




int main(){
	int angka = 6;
	printf("Angka = %d\n", angka);
	greetings();
	printf("Sum = %d\n", sum (5, 8));
	printf("Max = %lf\n", max(10, 5));
	printf("Volume = %d\n", volume(2,5,7));
	
	return 0;
}

int volume (int a, int b, int c){
	return a*b*c;
}
