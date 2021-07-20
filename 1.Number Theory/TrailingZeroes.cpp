#include <iostream>
using namespace std;
long countZero(int n)
{
    long fact = 1, res = 0;
    for (int i = n; i > 0; i--)
    {
        fact = fact * i;
    }
    
    for (int i = 5; i <= fact; i*=5)
    {
        res = res + n/i;
    }
    return res;
    
}
   
int main()
{
    long n;
    cout << "Enter Number" << endl;
    cin >> n;
    cout << "Number of trailing Zeroes is: " << countZero(n) << endl;
    return 0;
}