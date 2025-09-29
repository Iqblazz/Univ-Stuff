#include <stdio.h>

int main() {
	
	int N;
	scanf("%d", &N);
	
	int matrix[N][N];
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &matrix[i][j]);
	
		}
	
	}
	
	int isPossible = 2;
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				if (matrix[i][j] == matrix[i][k]) {
					isPossible = 0;
					break;
				
				}
			
			}
			if (!isPossible) {
				break;
			}
		}
		if (!isPossible) {
			break;
		}
	}
	
	if (isPossible) {
		for (int j = 0; j < N; j++) {
			for (int i = 0; i < N; i++) {
				for (int k = i + 1; k < N; k++) {
					if (matrix[i][j] == matrix[k][j]) {
						isPossible = 0;
						break;
					}
				}
				if (isPossible) {
					break;
				}
			}
			if (isPossible) {
				break;
			}
		}
	}
	
	if (isPossible) {
		printf("Yay\n");
	} else {
		printf("Nay\n");
	}
	
	return 0;	

}
