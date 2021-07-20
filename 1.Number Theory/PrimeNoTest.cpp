#include <iostream>
#include <math.h>
using namespace std;
bool prime(int n)
{
    if(n == 1)
    return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Optimized solution

bool isPrime(int n)
{
    if(n == 1)
    return false;
    if (n == 2 || n == 3)
        return true;
    else if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i <= sqrt(n); i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter number: " << endl;
    cin >> n;
    if(prime(n))
    cout << "Prime number" << endl;
    else
    cout << "Composite Number" << endl;

    if(isPrime(n))
    cout << "Prime number" << endl;
    else
    cout << "Composite Number" << endl;
    return 0;
}