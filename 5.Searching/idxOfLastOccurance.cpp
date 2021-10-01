#include <iostream>
using namespace std;

int lastOccurRecur(int arr[], int low, int high, int x)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] > x)
        return lastOccurRecur(arr, low, mid - 1, x);
    else if (arr[mid] < x)
        return lastOccurRecur(arr, mid + 1, high, x);
    else
    {
        if (mid == 0 || arr[mid] != arr[mid + 1])
            return mid;
        else
            return lastOccurRecur(arr, mid + 1, high, x);
    }
    return -1;
}

int lastOccurIter(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else
        {
            if (mid == n - 1 || arr[mid] != arr[mid + 1])
                return mid;
            else
                low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    cout << lastOccurRecur(arr, 0, 8, 5) << "\n";
    cout << lastOccurIter(arr, 9, 5);
    return 0;
}