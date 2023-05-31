#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[20];
	int num = 0;
	scanf("%s", input);
	
	for(int i = 0; i < strlen(input); ++i) {
		if(input[i] >= 65 && input[i] <=67) /*abc*/{
			num += 3;
		}
		if(input[i] >= 68 && input[i] <=70 /*def*/) {
			num += 4;
		}
		if(input[i] >= 71 && input[i]	<= 73/*ghi*/) {
			num += 5;
		}
		if(input[i] >= 74 && input[i] <= 76 /*jkl*/) {
			num += 6;
		}
		if(input[i] >= 77 && input[i] <= 79 /*mno*/) {
			num += 7;
		}
		if(input[i] >= 80 && input[i] <= 83 /*pqrs*/) {
			num += 8;
		}
		if(input[i] >=84 && input[i] <= 86 /* tuv*/) {
			num += 9;
		}
		if(input[i] >= 87 && input[i] <= 90 /*wxyz*/) {
			num += 10;
		}
	}
	printf("%d\n", num);
	return 0;
}
