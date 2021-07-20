#include <iostream>
#include <algorithm>
using namespace std;

//Naive solution
int lcm(int a, int b)
{
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
            return res;
        else
            res++;
    }
    return res;
}

//With Euclidean Algorithm a*b = gcd(a,b) * lcm(a, b)
int gcdO(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcdO(b, a % b);
}

int main()
{
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    cout << "LCM is: " << lcm(a, b) << endl;
    cout << "LCM is (with Euclidean Algo): " << (a * b) / gcdO(a, b) << endl;
    return 0;
}