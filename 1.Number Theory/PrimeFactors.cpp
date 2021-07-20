#include <iostream>
#include <math.h>
using namespace std;
bool prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void primeFactors(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if (prime(i))
        {
            int x = i;
            while (n % x == 0)
            {
                cout << i << " ";
                x = x * i;
            }
        }
    }
}
int main()
{
    int n;
    cout << "Enter number: " << endl;
    cin >> n;
    primeFactors(n);

    return 0;
}