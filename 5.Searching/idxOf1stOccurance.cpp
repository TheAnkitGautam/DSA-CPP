#include <iostream>
using namespace std;

int firstOccurRecur(int arr[], int low, int high, int x)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] > x)
        return firstOccurRecur(arr, low, mid - 1, x);
    else if (arr[mid] < x)
        return firstOccurRecur(arr, mid + 1, high, x);
    else
    {
        if (mid == 0 || arr[mid - 1] != arr[mid])
            return mid;
        else
            return firstOccurRecur(arr, low, mid - 1, x);
    }
    return -1;
}

int firstOccurIter(int arr[], int n, int x)
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
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {5, 10, 10, 15, 20, 20, 20};
    cout << firstOccurRecur(arr, 0, 6, 20) << "\n";
    cout << firstOccurIter(arr, 7, 20);
    return 0;
}