#include <iostream>
using namespace std;
void reverseNum(int num)
{
    int rev = 0;
    int temp = num;
    while (num > 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (rev == temp)
    {
        cout << "Palindrome Number";
    }
    else
    {
        cout << "Not a Palindrome Number";
    }
}
int main()
{
    int num;
    cout << "Enter Number" << endl;
    cin >> num;
    reverseNum(num);

    return 0;
}