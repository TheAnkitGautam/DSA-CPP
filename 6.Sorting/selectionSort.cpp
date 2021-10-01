#include <iostream>
using namespace std;
void selectionSortNAIVE(int arr[], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        int min_ind = 0;
        for (int j = 1; j < n; j++)
            if (arr[j] < arr[min_ind])
                min_ind = j;
        temp[i] = arr[min_ind];
        arr[min_ind] = INT_MAX;
    }
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}
void selectionSortOPT(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mid_ind = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[mid_ind])
                mid_ind = j;
        swap(arr[mid_ind], arr[i]);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    selectionSortNAIVE(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    selectionSortOPT(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}