#include <iostream>
using namespace std;

int countINV(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                res++;
        }
    }
    return res;
}

int countAndMerge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1, n2 = r - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];

    int res = 0, i = 0, j = 0, k = l;
    
    while (i < n1 and j < n2)
    {
        if (L[i] <= R[j])
            arr[k] = L[i], i++;
        else
            arr[k] = R[j], j++, res = res + (n1 - i);
        k++;
    }
    while (i < n1)
        arr[k] = L[i], k++, i++;
    while (j < n2)
        arr[k] = R[j], k++, j++;
    return res;
}

int main()
{
    int arr[] = {2, 4, 1, 3, 5};
    cout << countINV(arr, 5) << "\n";
    cout << countAndMerge(arr, 0, 2, 4) << "\n";

    return 0;
}