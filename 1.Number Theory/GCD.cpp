#include <iostream>
#include <algorithm>
using namespace std;

// NAIVE SOLUTION
int gcd(int a, int b)
{
    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
            break;
        res--;
    }
    return res;
}

// EUCLIDEAN ALGORITHM
int gcdEuclid(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

//OPTIMISED EUCLIDEAN ALGORITHM
int gcdEuclidOptimized(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcdEuclidOptimized(b, a % b);
    
    // return b ? gcd (b, a % b) : a;  ONE LINER
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    cout << gcdEuclid(a, b) << endl;
    cout << gcdEuclidOptimized(a, b) << endl;
    return 0;
}
