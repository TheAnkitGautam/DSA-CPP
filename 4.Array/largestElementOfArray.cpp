#include <iostream>
using namespace std;
// NAIVE APPROACH
int getLargest(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
            return i;
    }
    return -1;
}

//EFFICIENT APPROACH
int getLarge(int arr[], int n)
{
    int res=0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[res])
            res=i;
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << getLargest(arr, n) << endl;
    cout << getLarge(arr, n) << endl;
    return 0;
}