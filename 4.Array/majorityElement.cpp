#include <iostream>
using namespace std;

// Naive Solution
int findMaj(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
            if (arr[i] == arr[j])
                count++;
        if (count > n / 2)
            return i;
    }
    return -1;
}

int findMajority(int arr[], int n)
{
    int res = 0, count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
        if (arr[res == arr[i]])
            count++;
    if (count <= (n / 2))
        res = -1;
    return res;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << findMaj(arr, n) << "\n";
    cout << findMajority(arr, n) << "\n";

    return 0;
}