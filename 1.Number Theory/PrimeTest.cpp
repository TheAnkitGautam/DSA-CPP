#include <iostream>
using namespace std;

// NAIVE EFFICIENT SOLUTION
bool isPrime(int a)
{
    if (a == 1)
        return false;
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0)
            return false;
    return true;
}

int isPrimeOptimized(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int main()
{
    int a;
    cin >> a;
    cout << isPrime(a) << endl;
    cout << isPrimeOptimized(a) << endl;
    return 0;
}