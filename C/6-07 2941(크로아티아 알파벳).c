#include <stdio.h>
#include <string.h>
int main(void)
{
	char S[10000];
	scanf("%s", S);
	int sum = strlen(S);
	
	for(int i = 0; i < strlen(S); ++i) {
		if(S[i] == 'c' || S[i] == 'z' || S[i] == 's') {
			if(S[i+1] == '=' || S[i+1] == '-') { 
			sum--;
			}
		} else if(S[i] == 'n' || S[i] == 'l') { 
			if(S[i+1] == 'j'){
				sum--;
				} 
			} else if (S[i] == 'd') {
				if(S[i+1] == '-') {
					sum--;
				} else if(S[i+1] == 'z' && S[i+2] == '=') {
					sum--;
				}
			}
	}
	printf("%d\n", sum);
	return 0;
}
