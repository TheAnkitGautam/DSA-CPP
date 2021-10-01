#include <iostream>
using namespace std;

int searchRotated(int arr[], int n, int x)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[l] < arr[mid])
        {
            if (x >= arr[l] && x < arr[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }
        else
        {
            if (x > arr[mid] && x <= arr[r])
                l = mid + 1;
            else
                r = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 40, 60, 5, 8};
    cout << searchRotated(arr, 6, 5);
    return 0;
}