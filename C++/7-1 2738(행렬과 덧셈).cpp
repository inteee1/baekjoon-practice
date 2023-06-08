#include <iostream>
using namespace std;
int main()
{
	int n, N;
	cin >> n >> N;


	int A[101][101];
	int B[101][101];

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < N; ++j) {
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < N; ++j) {
			cin >> B[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < N; ++j) {
			int sum = A[i][j] + B[i][j];
			cout << sum << " ";
		}
		cout << endl;
	}
	return 0;
}