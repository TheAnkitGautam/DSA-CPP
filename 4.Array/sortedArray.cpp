#include <iostream>
using namespace std;

// NAIVE SOLUTION
bool checkSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[i])
                return false;
    return true;
}

// EFFICIENT SOLUTION
bool checkSorted(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        if (arr[i] > arr[i + 1])
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << checkSort(arr, n) << endl;
    cout << checkSort(arr, n) << endl;
    return 0;
}