#include <iostream>
using namespace std;
int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int n;
    cout << "Enter Number of rows" << endl;
    cin >> n;
    cout<<" "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(i - j) * fact(j)) << " ";
        }
        cout << endl;
    }

    return 0;
}