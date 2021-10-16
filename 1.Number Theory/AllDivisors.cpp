#include <iostream>
#include <cmath>
using namespace std;

//NAIVE SOLUTION
void allDivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

//EFFICIENT SOLUTION
void allDivisorsEfficient(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i)
            {
                cout << (n / i) << " ";
            }
        }
    }
}

//MORE EFFICIENT SOLUTION
void allDivisorsMoreEfficient(int n)
{
    int i;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    for (i = sqrt(n); i >= 1; i--)
    {
        if (n % i == 0)
            cout << (n / i) << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    allDivisors(n);
    cout << endl;
    allDivisorsEfficient(n);
    cout << endl;
    allDivisorsMoreEfficient(n);
    return 0;
}