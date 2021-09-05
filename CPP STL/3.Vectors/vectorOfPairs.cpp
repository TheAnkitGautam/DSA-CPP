#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int roll[], int marks[], int n)
{
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
        v.push_back({marks[i], roll[i]});
    sort(v.begin(), v.end(), greater<pair<int, int>>());
    for (int i = 0; i < n; i++)
        cout << v[i].second << " " << v[i].first << endl;
}
int main()
{
    int roll[] = {105, 103, 101};
    int marks[] = {80, 70, 90};
    print(roll, marks, 3);
    return 0;
}