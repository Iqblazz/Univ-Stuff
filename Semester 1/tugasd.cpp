#include <stdio.h>

int main() {
    
    long long int a,b,c,d,e,f,g,h,i,j,k,l;
    long long int m,n,o;
    
    
    scanf(" (%lld+%lld)x(%lld-%lld)", &a, &b, &c, &d);
    getchar();
    scanf(" (%d+%d)x(%d-%lld)", &e, &f, &g, &h);
    getchar();
    scanf(" (%lld+%lld)x(%lld-%lld)", &i, &j, &k, &l);
    getchar();
    
    
    m = (a+b)*(c-d);
    n = (e+f)*(g-h);
    o = (i+j)*(k-l);
    
    
	printf("%lld %lld %lld\n", m,n,o);
    
    return 0;
}
