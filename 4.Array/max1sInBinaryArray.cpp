#include <iostream>
using namespace std;

// Naive Approach
int maxOne(bool arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 1)
                curr++;
            else
                break;
        }
        res = max(res, curr);
    }
    return res;
}

// Efficient Solution
int maxConOne(bool arr[], int n)
{
    int res = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            curr = 0;
        else
        {
            curr++;
            res = max(res, curr);
        }
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    bool arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << maxOne(arr, n) << endl;
    cout << maxConOne(arr, n) << endl;
    return 0;
}
