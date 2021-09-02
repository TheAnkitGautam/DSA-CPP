#include <iostream>
using namespace std;

int sumSubsets(int arr[], int n, int sum)
{
    if (n == 0)
        return (sum == 0) ? 1 : 0;
    return sumSubsets(arr, n - 1, sum) + sumSubsets(arr, n - 1, sum - arr[n - 1]);
}
int main()
{
    int n, sum;
    cin >> n >> sum;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << sumSubsets(arr, n, sum);
    return 0;
}
