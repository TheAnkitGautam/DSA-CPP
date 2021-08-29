#include <iostream>
using namespace std;
bool isPalindrome(string &str, int start, int end)
{
    if (start >= end)
        return true;
    return (str[start] == str[end]) && isPalindrome(str, start + 1, end - 1);
}
int main()
{
    int start = 0;
    string str;
    cin >> str;
    int end = str.length() - 1;
    cout << isPalindrome(str, start, end);
    return 0;
}