#include <stdio.h>
int main(void) {
	
	int n, N;
	char S[100];
	scanf("%d", &n);
	
	for(int i = 0; i < n; ++i) {
		int score[100];
		int sum = 0;
		int cnt = 0;
		double avg = 0.00;
		scanf("%d", &N);
		for(int j = 0; j < N; ++j) {
			scanf("%d", &score[j]);
			sum += score[j];
		}
		avg = sum / N;
		for(int j = 0; j < N; ++j) {
			if( score[j] > avg) {
				cnt++;
			}	
		}
	
	
		printf("%.3f%%\n", (cnt + 0.0) * 100 / N);
	
	}
	
	
	return 0;
}
