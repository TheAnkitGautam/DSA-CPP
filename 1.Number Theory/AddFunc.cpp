#include <iostream>
using namespace std;
int add(int a, int b)
{
    int sum = a + b;
    return sum;
}
    
int main()
{
    int a = 2, b = 3;
    cout<<add(a, b)<<endl;
    cout<<a<<" "<<b<<endl;
    return 0;
}