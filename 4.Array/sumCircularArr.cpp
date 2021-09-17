#include <iostream>
using namespace std;

// Naive Array
int maxCirSum(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int curMax = arr[i];
        int curSum = arr[i];
        for (int j = 1; j < n; j++)
        {
            int index = (i + j) % n;
            curSum += arr[index];
            curMax = max(curMax, curSum);
        }
        res = max(res, curMax);
    }
    return res;
}

// Effiecient Solution
int normalMaxSum(int arr[], int n)
{
    int res = arr[0], maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding+arr[i], maxEnding);
        res = max(res, maxEnding);
    }
    return res;
}

int OverallMaxSum(int arr[], int n)
{
    int maxN = normalMaxSum(arr, n);
    if (maxN < 0)
        return maxN;
    int arrSum = 0;
    for (int i = 0; i < n; i++)
    {
        arrSum += arr[i];
        arr[i] = -arr[i];
    }
    int maxCircular = arrSum + normalMaxSum(arr, n);
    return max(maxN, maxCircular);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << maxCirSum(arr, n) << "\n";
    cout << OverallMaxSum(arr, n) << "\n";
    return 0;
}