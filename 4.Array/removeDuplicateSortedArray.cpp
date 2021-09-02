#include <iostream>
using namespace std;

// NAIVE SOLUTION
int remDup(int arr[], int n)
{
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (temp[res - 1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < res; i++)
        arr[i] = temp[i];
    return res;
}

// EFFICIENT SOLTUION
int remDuplicate(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int x = remDup(arr, n);
    for (int i = 0; i < x; i++)
        cout << arr[i] << " ";
    cout << endl;
    int y = remDuplicate(arr, n);
    for (int i = 0; i < y; i++)
        cout << arr[i] << " ";
    return 0;
}