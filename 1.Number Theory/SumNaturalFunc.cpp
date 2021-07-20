#include <iostream>
using namespace std;
int sumNatural(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += i;           
    }
    return ans;
}   
int main()
{
    int n;
    cin>>n;
    cout<<sumNatural(n)<<endl;
    return 0;
}