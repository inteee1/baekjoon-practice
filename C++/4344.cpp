#include <iostream>
using namespace std;
int main() {

	int n, N;
	double ans;
	int score[100];
	
	double avg = 0.00;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		
		cin >> N;
		int sum = 0;
		for (int j = 0; j < N; ++j) {
			cin >> score[j];
			sum += score[j];
		}
		avg = sum / N;
		
		int cnt = 0;
		for (int j = 0; j < N; ++j) {
			if (score[j] > avg) {
				cnt++;
			}
		}
		
		ans = ((double)cnt / N) * 100;
		cout.precision(3);
		cout << fixed;
		cout << ans << "%" << endl;


	}


	return 0;
}
