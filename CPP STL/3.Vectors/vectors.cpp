#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     // cout<<v[i]<<" ";
    //     cout<<v.at(i)<<" ";
    // }

    for (int x : v)
        cout << x << " ";
    cout << endl;
    for (int &x : v)
        x = 7;
    for (int x : v)
        cout << x << " ";
    cout << endl;

    int no = 3, x = 100;
    vector<int> ve(no, x);
    for (auto it = ve.begin(); it != ve.end(); it++)
        cout << (*it) << " ";
    //auto = vector<int>::iterator

    cout << endl;
    int arr[] = {7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vec(arr, arr + n);
    for (auto it = vec.rbegin(); it != vec.rend(); it++)
        cout << (*it) << " ";
    return 0;
}