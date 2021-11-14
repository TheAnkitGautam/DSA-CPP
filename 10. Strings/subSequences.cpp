#include <iostream>
using namespace std;

bool isSubSequence(const string &s1, const string &s2)
{
    int i = 0, j = 0;
    while (i < s1.length() and j < s2.length())
    {
        if (s1[i] == s2[j])
            i++, j++;
        else
            i++;
    }
    return (j == s2.length());
    // if (j == s2.length())
    //     return true;
    // return false;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << isSubSequence(s1, s2);
    return 0;
}