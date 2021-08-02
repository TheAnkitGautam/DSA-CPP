#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int n = str.length();
    int powSize = pow(2, n);
    for (int i = 0; i < powSize; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
            {
                cout << str[j];
            }
        }
        cout << "\n";
    }

    return 0;
}