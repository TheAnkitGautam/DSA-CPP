#include <iostream>
using namespace std;

void moveZero(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
                if (arr[j] != 0)
                    swap(arr[i], arr[j]);
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

// Efficient Solution
void moveZ(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    moveZero(arr, n);
    cout << endl;
    moveZ(arr, n);

    return 0;
}