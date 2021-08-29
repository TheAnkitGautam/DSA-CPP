#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    if (n <= 9)
        return n;
    else
        return sumOfDigits(n / 10) + n % 10;
}
int main()
{
    int n;
    cin >> n;
    cout << sumOfDigits(n);
    return 0;
}