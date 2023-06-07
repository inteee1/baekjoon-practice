#include <stdio.h>
#include <string.h>
int main(void)
{
	int N;
	char S[100];
	int M;

	scanf("%d", &N);

	for (int i = 0; i < N; ++i) {
		scanf("%d %s", &M, S);
		for (int j = 0; j < strlen(S); ++j) {
			for (int k = 0; k < M; ++k) {
				printf("%c", S[j]);
			}
			
		}
		printf("\n");
	}
	return 0;
}
