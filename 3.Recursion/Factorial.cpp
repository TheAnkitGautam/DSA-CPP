#include <iostream>
using namespace std;
int nonTailRecursive(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * nonTailRecursive(n - 1);
}

int tailRecursive(int n, int k)
{
    if (n == 0 || n == 1)
        return k;
    return tailRecursive(n - 1, k * n);
}
int main()
{
    int n, k = 1;
    cin >> n;
    cout << nonTailRecursive(n) << endl;
    cout << tailRecursive(n, k) << endl;
    return 0;
}