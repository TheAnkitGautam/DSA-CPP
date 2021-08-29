#include <iostream>
using namespace std;

int sum(int n, int k)
{
    if (n == 0)
        return k;
    return sum(n - 1, k + n);
}
int main()
{
    int n, k = 0;
    cin >> n;
    cout << sum(n, k);
    return 0;
}