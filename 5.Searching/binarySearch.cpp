#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int recurBinarySearch(int arr[], int low, int high, int x)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
        return recurBinarySearch(arr, low, mid - 1, x);
    else
        return recurBinarySearch(arr, mid + 1, high, x);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    cout << binarySearch(arr, 6, 30) << "\n";
    cout << recurBinarySearch(arr, 0, 5, 60) << "\n";
    return 0;
}