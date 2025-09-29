#include  <stdio.h>

void f(){
	float n;
	float p;
	scanf("%f %f", &n, &p);
	printf("$%.2f\n", 100.0*p/(100.0-n));
}
	int main(void) {
		f();
		f();
		f();
		f();
		return 0;
	}
