#include <stdio.h>

int main(void)
{
	int n, N;
	scanf("%d %d", &n, &N);
	
	int A[n][N];
	int B[n][N];
	
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < N; ++j) {
			scanf("%d", &A[i][j]);
		}
	}
	
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < N; ++j) {
			scanf("%d", &B[i][j]);
		}
	}
	
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < N; ++j) {
			int sum = A[i][j] + B[i][j];
			printf("%d ", sum);
		}	
		printf("\n");
	}
	return 0;
}
