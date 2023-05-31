
#include <stdio.h>

int main(void)
{
	int N, sum = 0;
	scanf("%d", &N);
	char nums[1000];
	scanf("%s", nums); //%s 주소를 전달해줘야한다.
	for (int i = 0; i < N; ++i)
	{
		sum += nums[i] - '0';
	}
	printf("%d\n", sum);
	return 0;
}
