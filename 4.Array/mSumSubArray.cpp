#include <iostream>
using namespace std;

// Naive Array
int maxSum(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int cur = 0;
        for (int j = i; j < n; j++)
        {
            cur = cur + arr[j];
            res = max(res, cur);
        }
    }
    return res;
}

// Efficient Solution
int maxSumEff(int arr[], int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
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
    cout << maxSum(arr, n) << "\n";
    cout << maxSumEff(arr, n) << "\n";
    return 0;
}