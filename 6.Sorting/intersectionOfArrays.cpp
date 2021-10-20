#include <iostream>
using namespace std;

// NAIVE SOLUTION
void intersection(int a[], int b[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        if (i > 0 and a[i] == a[i - 1])
            continue;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
                break;
            }
        }
    }
}

// EFFICIENT SOLUTION
void intersectionEFF(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m and j < n)
    {
        if (i > 0 and a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (a[i] < b[j])
            i++;
        else if (a[i] > b[j])
            j++;
        else
        {
            cout << a[i] << " ";
            i++, j++;
        }
    }
}

int main()
{
    int a[] = {1, 20, 20, 40, 60};
    int b[] = {2, 20, 20, 40};
    intersection(a, b, 5, 4);
    cout << "\n";
    intersectionEFF(a, b, 5, 4);
    return 0;
}