#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    else if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

//Simple implementation of Sieve
void sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j <= n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
    cout << "\n" << endl;
    for (int i = 2; i <= n; i++)
        if (isPrime[i])
            cout << i << " ";
}

//Optimized Sieve
void sieveO(int n)
{
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    for (int i = 2; i <= n; i++)
        if (isPrime[i])
            cout << i << " ";
}
int main()
{
    int n;
    cin >> n;
    sieve(n);
    cout << "\n" << endl;
    sieveO(n);

    return 0;
}
