#include <iostream>
using namespace std;
bool powOf2(int n)
{
    if (n == 0)
        return false;
    return ((n & (n - 1)) == 0);
    // return (n != 0) && ((n & (n - 1)) == 0);
}
int main()
{
    int n;
    cin >> n;
    if (powOf2(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}