#include <iostream>
using namespace std;

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

int countOcurrance(int arr[], int n, int x)
{
    int first = firstOccurIter(arr, n, x);
    if (first == -1)
        return 0;
    else
        return (lastOccurIter(arr, n, x) - first + 1);
}
int main()
{
    int arr[] = {10, 20, 20, 20, 40, 40};
    cout << countOcurrance(arr, 6, 20);
    return 0;
}