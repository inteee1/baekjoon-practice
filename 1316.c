#include <stdio.h>
#include <string.h>
int main(void)
{
	char S[10000];
	int n;	
	scanf("%d", &n);
	
	int count = n;
	for (int i = 0; i < n; ++i) {
		char first = '0';
		int A[26] = {0,};
		scanf("%s", S);
		for(int j = 0; S[j] != '\0'; ++j) {
			if( first != S[j]) {
				first = S[j];
				A[S[j] - 'a'] += 1;
			}
			if (A[S[j] - 'a'] == 2) {
				count -= 1;
				break;
			}
		}
	
	}
	printf("%d\n", count);
	
	
	return 0;
}
