
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string S;
    string A = "abcdefghijklmnopqrstuvwxyz";
    
    cin >> S;
    for (int i = 0; i < A.length(); ++i)
    {
        cout << (int)S.find(A[i]) << " ";
    }

    return  0;
}