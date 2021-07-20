#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = n; i > 0; i--)
    {
        fact = fact * i;
    }
    return fact;
}
int recurFac(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * recurFac(n - 1);
}
int main()
{
    int n;
    cout << "Enter Number" << endl;
    cin >> n;
    cout << "With loop: " << factorial(n) << endl;
    cout << "With Recursion: " << recurFac(n) << endl;
    return 0;
}