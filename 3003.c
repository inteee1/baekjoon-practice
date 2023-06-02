#include <stdio.h>

int main(void)
{
	int array[10] = { 1, 1, 2, 2, 2, 8};
	int a;
	
	for ( int i = 0; i < 6; ++i)
	{
		scanf("%d", &a);
		printf("%d ", array[i] - a);
	}  
	printf("\n");
	return 0;
}	
