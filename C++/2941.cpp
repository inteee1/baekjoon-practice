#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string S;
	cin >> S;
	int sum = S.length();

	for (int i = 0; i < S.length(); ++i) {
		if (S[i] == 'c' || S[i] == 'z' || S[i] == 's') {
			if (S[i + 1] == '=' || S[i + 1] == '-') {
				sum--;
			}
		}
		else if (S[i] == 'n' || S[i] == 'l') {
			if (S[i + 1] == 'j') {
				sum--;
			}
		}
		else if (S[i] == 'd') {
			if (S[i + 1] == '-') {
				sum--;
			}
			else if (S[i + 1] == 'z' && S[i + 2] == '=') {
				sum--;
			}
		}
	}
	cout << sum << endl;
	
	return 0;
}
