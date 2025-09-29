#include <stdio.h>

int main(){
    long unsigned a;
    long unsigned b;
    long unsigned c;
    
    scanf("%ld %ld %ld", &a, &b, &c);
    
    long int d= a * b * c;
    printf("%ld\n",d);
    
    return 0 ;
}
