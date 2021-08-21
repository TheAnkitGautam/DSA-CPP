#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    int temp = num;
    int rev = 0;
    while (num != 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return (temp == rev);}

int main()
{
    int num;
    cin >> num;
    cout << isPalindrome(num);
    return 0;
}