#include <iostream>
using namespace std;

//NAIVE SOLUTION
int power(int x, int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        res = res * x;
    }
    return res;
}

//EFFICIENT SOLUTION
int powerEff(int x, int n)
{
    if (n == 0)
        return 1;
    int temp = powerEff(x, n / 2);
    temp = temp * temp;
    if (n % 2 == 0)
        return temp;
    else
        return temp * x;
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << power(x, n) << endl;
    cout << powerEff(x, n) << endl;
    return 0;
}