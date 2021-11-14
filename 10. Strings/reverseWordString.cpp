#include <iostream>
using namespace std;
void reverse(string &str, int low, int high)
{
    while (low <= high)
    {
        swap(str[low], str[high]);
        low++;
        high--;
    }
}
void reverseWords(string &str, int n)
{
    int start = 0;
    for (int end = 0; end < n; end++)
    {
        if (str[end] == ' ')
        {
            reverse(str, start, end - 1);
            start = end + 1;
        }
    }
    reverse(str, start, n - 1);
    reverse(str, 0, n - 1);
}

int main()
{
    string str;
    getline(cin, str);
    int n = str.length();
    reverseWords(str, n);
    cout << str;

    return 0;
}