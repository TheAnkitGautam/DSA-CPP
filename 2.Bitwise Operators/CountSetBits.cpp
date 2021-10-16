#include <iostream>
using namespace std;

// NAIVE SOLUTION
int countSetBits(int n)
{
    int res = 0;
    while (n > 0)
    {
        res = res + (n & 1);
        n = n >> 1;
    }
    return res;
}

// Brian Kerningam's Algorithm
int countSetBits2(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        res++;
    }
    return res;
}

// LOOKUP TABLE METHOD
int table[256];
void  initialize()
{
    table[0] = 0;
    for (int i = 1; i < 256; i++)
    {
        table[i] = (i & 1) + table[i / 2];
    }
}
int countSetBits3(int n)
{
    int res = table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    return res;
}
int main()
{
    initialize(); 
    int n;
    cin >> n;
    cout << countSetBits(n) << endl;
    cout << countSetBits2(n) << endl;
    cout << countSetBits3(n) << endl;
    return 0;
}
