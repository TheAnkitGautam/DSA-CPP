#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}
int main()
{
    int arr[20], x, n;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << search(arr, n, x) << endl;
    return 0;
}