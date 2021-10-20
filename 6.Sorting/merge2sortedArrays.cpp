#include <iostream>
using namespace std;

int main()
{
    int a[] = {10, 15, 20, 20}, m = 4;
    int b[] = {1, 12, 17, 50}, n = 4;
    int c[6], i = 0, j = 0, k = 0;
    while (i < m and j < n)
    {
        if (a[i] <= b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }
    while (i < m)
    {
        cout << a[i] << " ";
        i++;
    }
    while (j < n)
    {
        cout << b[j] << " ";
        j++;
    }

    return 0;
}