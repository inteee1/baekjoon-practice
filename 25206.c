#include <stdio.h>
#include <string.h>

float getscore(char *G)
{
	if(G[0] == 'A')
	{
		if(G[1] == '+'){
			return 4.5;
		} else if(G[1] == '0') {
			return 4.0;
		}
	} else if(G[0] == 'B')
	{
		if(G[1] == '+'){
			return 3.5;
		} else if(G[1] == '0') {
			return 3.0;
		}
	} else if(G[0] == 'C')
	{
		if(G[1] == '+'){
			return 2.5;
		} else if(G[1] == '0') {
			return 2.0;
		}
	} else if(G[0] == 'D')
	{
		if(G[1] == '+'){
			return 1.5;
		} else if(G[1] == '0') {
			return 1.0;
		}
	}
	return 0;


}






int main(void)
{
	char S[100000], G[2];
	float H, sum = 0.0;
	double AS = 0.0;
	
	for(int i = 0; i < 20; ++i) 
	{
		scanf("%s %f %s", S, &H, G);
		if (G[0] != 'P') {
			sum += H;
			AS += H * getscore(G);
		} 
	}
	printf("%.6f\n", AS/sum);

	return 0;
}
