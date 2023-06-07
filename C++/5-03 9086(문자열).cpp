

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
 
    int length = 0;
    int n;

    cin >> n;
   
    for (int i = 0; i < n; ++i)
    {
        cin >> str;
        cout << str[0] << str[str.size() - 1] << endl;
    }
    return 0;
}
