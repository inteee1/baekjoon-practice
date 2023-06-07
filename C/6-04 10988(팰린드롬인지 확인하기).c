#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(void)
{
	char S[100];
	bool result = true;
	scanf("%s", S);
	
	for(int i = 0; i < strlen(S) / 2; ++i) {
		if(S[i] != S[strlen(S) - 1 - i]) {
		result = false;
		}
	}
	if(result) {
		printf("1");
	} else {
		printf("0");
		}
	printf("\n");
	return 0;
}
