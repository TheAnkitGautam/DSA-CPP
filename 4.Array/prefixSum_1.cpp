#include <bits/stdc++.h>
using namespace std;

// Fills prefix sum array
void fillPrefixSum(int arr[], int n, int prefixSum[])
{
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}

int getSum(int prefixSum[], int l, int r)
{
    if (l != 0)
        return prefixSum[r] - prefixSum[l - 1];
    else
        return prefixSum[r];
}

bool isEqPoint(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    int l_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (l_sum == sum - arr[i])
            return true;
        l_sum += arr[i];
        sum -= arr[i];
    }
    return false;
}
int main()
{
    int arr[] = {10, 4, 6, 1, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefixSum[n];

    // fillPrefixSum(arr, n, prefixSum);
    // cout << getSum(prefixSum, 1, 3) << "\n";
    cout << isEqPoint(arr, n);
}
