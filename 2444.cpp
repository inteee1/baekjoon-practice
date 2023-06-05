#include <iostream>
using namespace std;
int main()
{
	int N, i;
	cin >> N;
	for (i = 0; i < 2 * N - 1; ++i) {
		if (i < N) {
			for (int j = N - i; j > 0; --j) {
				cout << " ";
			}
			for (int j = 0; j < 2 * i + 1; ++j) {
				cout << "*";
			}
			cout << endl;
		}
		else {
			for (int j = 0; j < i + 2 - N; ++j) {
				cout << " ";
			}
			for (int j = 2 * N + 2 - (2 * i - 5); j > 0; --j) {
				cout << "*";
			}
			cout << endl;
		}
	}
	return 0;
}