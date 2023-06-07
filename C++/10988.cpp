#include <iostream>
#include <string>
using namespace std;
int main()
{
	string S;
	bool result = true;
	cin >> S;

	for (int i = 0; i < S.length() / 2; ++i) {
		if (S[i] != S[S.length() - 1 - i]) {
			result = false;
		}
	}
	if (result) {
		cout << "1";
	}
	else {
		cout << "0";
	}
	cout << endl;
	return 0;
}
