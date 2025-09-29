#include <stdio.h>
    
int main() {
    
    int T;
    scanf("%d", &T);
    int gojo, bipay;
    
    for(int i = 1; i <= T; i++){
        scanf("%d %d", &gojo, &bipay);
        if(gojo > bipay){
            printf("Case #%d: Go-Jo\n", i);
        }else if(bipay > gojo){
            printf("Case #%d: Bi-Pay\n", i);
        }
    }
    return 0;
}
