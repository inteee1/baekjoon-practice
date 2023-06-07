#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int array[10] = { 1, 1, 2, 2, 2, 8 };
	int a;

	for (int i = 0; i < 6; ++i)
	{
		cin >> a;
		cout << array[i] - a << " ";
	}
	cout << endl;
	return 0;
}
