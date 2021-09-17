#include <iostream>
using namespace std;

int maxDiff(int arr[], int n)
{
    int res = arr[1] - arr[0];
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            res = max(res, arr[j] - arr[i]);
    return res;
}
int maxDiff2(int arr[], int n)
{
    int res = arr[1] - arr[0], minVal = arr[0];
    for (int j = 1; j < n; j++)
    {
        res = max(res, arr[j] - minVal);
        minVal = min(minVal, arr[j]);
    }
    return res;
}
int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    cout << maxDiff(arr, 7) << endl;
    cout << maxDiff2(arr, 7) << endl;
    return 0;
}