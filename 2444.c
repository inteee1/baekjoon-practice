#include <stdio.h>

int main(void)
{
	int N, i;
	scanf("%d", &N);
	for(i = 0; i < 2*N-1; ++i) {
		if(i < N) {
			for(int j = N - i; j > 0; --j) {
				printf(" ");
			}
			for(int j = 0; j<2*i+1; ++j) {
				printf("*");
			}
			printf("\n");
		} else {
			for(int j = 0; j < i+2 - N; ++j) {
				printf(" ");
			}
			for(int j = 2*N+2 - (2*i-5); j >0; --j) {
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
