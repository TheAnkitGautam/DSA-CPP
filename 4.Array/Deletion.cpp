#include <iostream>
using namespace std;

int deletion(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            break;
    if (i == n)
        return n;
    for (int j = i; j < n - 1; j++)
        arr[j] = arr[j + 1];
    return (n - 1);
}
int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int X = deletion(arr, n, x);
    for (int i = 0; i < X; i++)
        cout << arr[i] << " ";
    return 0;
}