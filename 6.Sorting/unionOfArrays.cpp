#include <iostream>
using namespace std;

void _union(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m and j < n)
    {
        if (i > 0 and a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (j > 0 and b[j] == b[j - 1])
        {
            j++;
            continue;
        }
        if (a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else if (a[i] > b[j])
        {
            cout << b[j] << " ";
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++, j++;
        }
    }
    while (i < m)
        if (i > 0 and a[i] != a[i - 1])
        {
            cout << a[i] << " ";
            i++;
        }
    while (j < n)
        if (j > 0 and b[j] != b[j - 1])
        {
            cout << b[j] << " ";
            j++;
        }
}

int main()
{
    int a[] = {2, 10, 20, 20};
    int b[] = {3, 20, 40};

    _union(a, b, 4, 3);

    return 0;
}