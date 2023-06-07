#include <stdio.h>
#include <string.h>
int main(void)
{
	int max = 0;
	char S[100000];
	int arr[26];
	char ans;
	scanf("%s", S);
	for (int i = 0; i < strlen(S); ++i) {
		if(S[i] >= 'a') {
		arr[S[i] - 'a']++;
		} else {
		arr[S[i] - 'A']++;
		}
	}
	for(int i=0;i<26;i++) {
        if(arr[i]==max){
            ans = '?';
        }
        else if(arr[i]>max){
            max = arr[i];
            ans = 'A'+i;
        }

    	
	}
	printf("%c\n",ans);
				
	return 0;
}
