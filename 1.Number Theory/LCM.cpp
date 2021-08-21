#include <iostream>
#include <algorithm>
using namespace std;
// NAIVE SOLUTION
int lcm(int a, int b)
{
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
            return res;
        res++;
    }
    return res;
}

//Efficient Solution
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcmEfficient(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b) << endl;
    cout << lcmEfficient(a, b) << endl;
    return 0;
}