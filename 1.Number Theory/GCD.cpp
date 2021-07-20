#include <iostream>
using namespace std;

//Naive Solution O(min(a,b))

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

//Euclidean Algorithm
int gcdE(int a, int b)
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

//Optimized Euclidean Algorithm (Recursive)
int gcdO(int a, int b)
{
    if(b == 0)
    return a;
    else
    return gcdO(b, a%b);
}

int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    cout << "Greatest Common Divisor is (Naive): " << gcd(a, b) << endl;
    cout << "Greatest Common Divisor is (Euclidean Algorithm): " << gcdE(a, b) << endl;
    cout << "Greatest Common Divisor is (Optimized Euclidean Algorithm): " << gcdO(a, b) << endl;

    return 0;
}