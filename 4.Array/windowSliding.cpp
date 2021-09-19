#include <iostream>
using namespace std;

bool isSubSum(int arr[], int n, int sum)
{
    int csum = arr[0], s = 0;
    for (int e = 1; e < n; e++)
    {
        while (csum > sum && s < e - 1)
        {
            csum -= arr[s];
            s++;
        }
        if (csum == sum)
            return true;
        if (csum < sum)
            csum += arr[e];
    }
    return (csum == sum);
}
int window(int arr[], int k, int n)
{
    int curSum = 0;
    for (int i = 0; i < k; i++)
        curSum += arr[i];
    int maxSum = curSum;
    for (int i = k; i < n; i++)
    {
        curSum += (arr[i] - arr[i - k]);
        maxSum = max(maxSum, curSum);
    }
    return maxSum;
}
int main()
{
    int arr[] = {1, 4, 20, 3, 10, 5};
    // int k = 3;
    // cout << window(arr, k, 6)<<"\n";
    cout << isSubSum(arr, 6, 15);
    return 0;
}