#include <iostream>
#include <cmath>
using namespace std;

//Iterative Solution
int noOfDigits(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

//Recursive Solution
int noOfDigits_Recursive(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1 + noOfDigits_Recursive(n / 10);
}

// Logarithmic Solution
int noOfDigits_Log(int n)
{
    return floor(log10(n) + 1);
}
int main()
{
    int n;
    cin >> n;
    cout << noOfDigits(n) << endl;
    cout << noOfDigits_Recursive(n) << endl;
    cout << noOfDigits_Log(n) << endl;
    return 0;
}