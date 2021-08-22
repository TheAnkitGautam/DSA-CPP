#include <iostream>
using namespace std;

//Binary Expontiation
int power(int x, int n)
{
    int res = 1;
    while (n > 0)
    {
        if (n % 2 != 0)
            res = res * x;
        x = x * x;
        n = n / 2;
    }
    return res;
}
//Binary Expontiation Optimized
int powerOp(int x, int n)
{
    int res = 1;
    while (n > 0)
    {
        if (n & 1)
            res = res * x;
        x = x * x;
        n = n >> 1;
    }
    return res;
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << power(x, n) << endl;
    cout << powerOp(x, n) << endl;
    return 0;
}