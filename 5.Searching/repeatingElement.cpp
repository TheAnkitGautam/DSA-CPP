#include <iostream>
using namespace std;

int findRepeat(int arr[], int n)
{
    int slow = arr[0], fast = arr[0];
    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);
    slow = arr[0];
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}
int main()
{
    int arr[] = {1, 3, 2, 4, 6, 5, 7, 3};
    cout << findRepeat(arr, 8);
    return 0;
}