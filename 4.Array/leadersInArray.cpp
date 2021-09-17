#include <iostream>
using namespace std;

// NAIVE Solution
void leaders(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
            cout << arr[i] << " ";
    }
}

// Efficient Solution
void leaders2(int arr[], int n)
{
    int cur_ldr = arr[n - 1];
    cout << cur_ldr << " ";
    for (int i = n - 2; i >= 0; i--)
    {
        if (cur_ldr < arr[i])
        {
            cur_ldr = arr[i];
            cout << cur_ldr << " ";
        }
    }
}

int main()
{
    int arr[] = {7, 10, 4, 10, 6, 5, 2};
    leaders(arr, 7);
    cout << endl;
    leaders2(arr, 7);
    return 0;
}