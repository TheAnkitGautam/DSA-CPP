#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int arr[], int n)
{
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
        v.push_back({arr[i], i});
    sort(v.begin(), v.end());
    for (auto x : v)
        cout << x.first << " " << x.second << endl;
}
int main()
{
    int arr[] = {4, 3, 2, 1};
    print(arr, 4);
    return 0;
}