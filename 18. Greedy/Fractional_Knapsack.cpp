#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    return (double)(a.second / a.first) > (double)(b.second / b.first);
}

double fracKnap(int W, pair<int, int> arr[], int n)
{
    sort(arr, arr + n, comp);
    double res = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i].second <= W)
        {
            res += arr[i].first;
            W -= arr[i].second;
        }
        else
        {
            res += arr[i].first * (double)W / arr[i].second;
            break;
        }
    }
    return res;
}

int main()
{
    int W = 30;
    pair<int, int> arr[] = {{60, 10}, {100, 20}, {120, 30}};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << fracKnap(W, arr, n);
    return 0;
}