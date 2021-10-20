#include <iostream>
using namespace std;

void merge(int a[], int low, int mid, int high)
{
    int n1 = mid - low + 1, n2 = high - mid;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
        left[i] = a[low + i];
    for (int i = 0; i < n2; i++)
        right[i] = a[n1 + i];

    int i = 0, j = 0, k = 0;
    while (i < n1 and j < n2)
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
            k++;
        }
        else
        {
            a[k] = right[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        a[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = right[j];
        j++;
        k++;
    }
}

int main()
{
    int a[] = {10, 20, 20, 30, 50};
    int low = 0, mid = 1, high = 4;

    merge(a, low, mid, high);

    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    return 0;
}