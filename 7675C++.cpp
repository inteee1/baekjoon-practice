#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	int M;
	string S;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> M;
		cin >> S;
		for (int j = 0; j < S.length(); ++j) {
			for (int k = 0; k < M; ++k) {
				cout << S[j];
			}

		}
		cout << endl;
	}

	return 0;
}