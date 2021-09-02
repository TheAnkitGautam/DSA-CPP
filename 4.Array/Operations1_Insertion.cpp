#include <iostream>
using namespace std;

int insert(int arr[], int n, int x, int cap, int pos)
{
    if (n == cap)
        return n;
    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--)
        arr[i + 1] = arr[i];
    arr[idx] = x;
    return (n + 1);
}
int main()
{
    int arr[100], n, x, cap = 100, pos;
    cin >> n >> x >> pos;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int X = insert(arr, n, x, cap, pos);
    for (int i = 0; i < X; i++)
        cout << arr[i] << " ";

    return 0;
}