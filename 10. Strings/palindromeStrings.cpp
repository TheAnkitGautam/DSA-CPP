#include <iostream>
using namespace std;

bool isPalindrome(string &s)
{
    int l = 0, h = s.length() - 1;

    while (l < h)
    {
        if (s[l] != s[h])
            return false;
        l++;
        h--;
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    cout << isPalindrome(s);
    return 0;
}