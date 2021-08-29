#include <iostream>
using namespace std;

void fun(int n)
{
start:
    if (n == 0)
        return;
    cout << n << " ";
    // fun(n - 1);
    n = n - 1;
    goto start;
}
int main()
{
    int n;
    cin >> n;
    fun(n);
    return 0;
}