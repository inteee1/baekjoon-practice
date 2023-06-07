#include <iostream>
using namespace std;
int main()
{
	int num1, num2, n1, n2;
	
	cin >> num1, num2;

	n1 = (num1 / 100) + (num1 / 10 % 10 * 10) + (num1 % 10 * 100);
	n2 = (num2 / 100) + (num2 / 10 % 10 * 10) + (num2 % 10 * 100);

	if (n1 > n2) {
		cout << n1 << endl;
	}
	else {
		cout << n2 << endl;
		
	}



	return 0;
}
