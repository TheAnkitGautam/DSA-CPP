// #include <iostream>
// using namespace std;
//METHOD 1: Using LSHIFT Operator
//int main()
// {
//     int n, k;
//     cin >> n >> k;
//     if ((n & (1 << (k - 1))) != 0)
//     cout<<"YES"<<endl;
//     else
//     cout<<"NO"<<endl;
//         return 0;
// }

//METHOD 2: Using RSHIFT Operator
#include <iostream>
using namespace std;
    
int main()
{
    int n, k;
    cin >> n >> k;
    if (((n >> (k-1) & 1)) == 1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
        return 0;
    return 0;
}