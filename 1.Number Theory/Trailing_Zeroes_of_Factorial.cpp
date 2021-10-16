#include <iostream>
using namespace std;

// Naive Solution
int countZeros(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact = fact * i;
    int res = 0;
    while (fact % 10 == 0)
        res++,
            fact /= 10;
    return res;
}

// Efficient Solution: Counting 2's and 5's
int countZeros_Efficient(int n)
{
    int res = 0;
    int fact = 1;
    for (int i = n; i > 0; i--)
    {
        fact = fact * i;
    }
    for (int i = 5; i <= fact; i *= 5)
    {
        res = res + n / i;
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
    cout << countZeros_Efficient(n) << endl;
    return 0;
}