#include <iostream>
#include <string>
using namespace std;
int main()
{
	int max = 0;
	string S;
	int arr[26] = { 0, };
	char ans;
	cin >> S;
	
	for (int i = 0; i < S.length(); ++i) {
		if (S[i] >= 97) {
			arr[S[i] - 97]++;
		}
		else {
			arr[S[i] - 65]++;
		}
	}
	for (int i = 0;i < 26;i++) {
		if (arr[i] == max) {
			ans = '?';
		}
		else if (arr[i] > max) {
			max = arr[i];
			ans = 65 + i;
		}


	}
	cout << ans << endl;
	

	return 0;
}