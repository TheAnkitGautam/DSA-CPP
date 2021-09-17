#include <iostream>
using namespace std;

// NAIVE SOLUTION
// call leftRotateByOne d times

// Method - 2 (Better)
void leftRotate(int arr[], int n, int d)
{
    int temp[d];
    for (int i = 0; i < d; i++)
        temp[i] = arr[i];
    for (int i = d; i < n; i++)
        arr[i - d] = arr[i];
    for (int i = 0; i < d; i++)
        arr[n - d + i] = temp[i];
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Method - 2 (Best)
void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
void leftRotate2(int arr[], int n, int d)
{
    reverse(arr, 0, (d - 1));
    reverse(arr, d, (n - 1));
    reverse(arr, 0, (n - 1));
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // leftRotate(arr, 5, 2); //Run Both functions one by one
    leftRotate2(arr, 5, 2);

    return 0;
}