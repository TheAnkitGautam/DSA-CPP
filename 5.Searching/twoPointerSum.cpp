#include <iostream>
using namespace std;

bool sum(int arr[], int n, int sum)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (arr[l] + arr[r] == sum)
            return true;
        else if (arr[l] + arr[r] > sum)
            r--;
        else
            l++;
    }
    return false;
}
int main()
{
    int arr[] = {2, 5, 8, 12, 30};
    cout << sum(arr, 5, 10);
    return 0;
}