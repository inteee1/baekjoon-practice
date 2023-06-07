
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int N, total = 0;
	cin >> N;
	string nums;
	cin >> nums;
	for (int i = 0; i < N; ++i)
	{
		
		total += nums[i] - 48;
	}
	cout << total << endl;
	return 0;
}
