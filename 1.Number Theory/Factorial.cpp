#include <iostream>
using namespace std;

// Iterative Solution
int fact_Iter(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}

// Recursive Solution
int fact_Recur(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact_Recur(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << fact_Iter(n) << endl;
    cout << fact_Recur(n) << endl;
    return 0;
}