#include <iostream>
#include <string>
using namespace std;
int main()
{
	string S;
	int n;
	cin >> n;

	int count = n;
	for (int i = 0; i < n; ++i) {
		char first = '0';
		int A[26] = { 0, };
		cin >> S;
		for (int j = 0; S[j] != '\0'; ++j) {
			if (first != S[j]) {
				first = S[j];
				A[S[j] - 'a'] += 1;
			}
			if (A[S[j] - 'a'] == 2) {
				count -= 1;
				break;
			}
		}

	}
	cout << count << endl;
	


	return 0;
}
