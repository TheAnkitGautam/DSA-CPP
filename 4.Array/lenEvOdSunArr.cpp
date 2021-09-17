#include <iostream>
using namespace std;

//Naive Solution
int maxEO(int arr[], int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        int cur = 1;
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[j] % 2 == 0 && arr[j - 1] % 2 != 0) || arr[j] % 2 != 0 && arr[j - 1] % 2 == 0)
                cur++;
            else
                break;
        }
        res = max(res, cur);
    }
    return res;
}
// Efficient Solution
int maxEvenOdd(int arr[], int n)
{
    int res = 1, cur = 1;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || arr[i] % 2 != 0 && arr[i - 1] % 2 == 0)
        {
            cur++;
            res = max(res, cur);
        }
        else
            cur = 1;
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
    cout << maxEO(arr, n) << "\n";
    cout << maxEvenOdd(arr, n) << "\n";
    return 0;
}