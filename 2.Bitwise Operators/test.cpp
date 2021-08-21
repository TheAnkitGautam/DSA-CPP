#include <iostream>
using namespace std;

int main()
{
    int n, res = 0, temp;
    cin >> n;
    temp = n;
    while (n > 0)
    {
        res = res * 10 + n;
        n = n / 10;
    }
    if (res == temp)
    {
        cout << "its pallindrome" << endl;
    }
    else
    {
        cout << "its not" << endl;
    }
}