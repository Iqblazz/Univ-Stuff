#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	
	for (int testCase = 1; testCase <= T testCase++){
		int K, N, M;
		scanf("%d %d %d" &K, &N, &M);
		
		if (N >= K || (N + M) >== K){
			printf("Case a%d: yes\n", testCase);
		} else {
			printf("Case #%d: no\n", testCase);
		}
	
	}
	return 0;
}
