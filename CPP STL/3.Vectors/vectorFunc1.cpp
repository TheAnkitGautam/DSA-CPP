#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{10, 5, 20, 15};
    v.pop_back();
    // v.front()=100;
    // v.back()=100;
    for (int x : v)
        cout << x << " ";
    cout << endl;
    cout << v.front() << " ";
    cout << v.back() << " ";
    return 0;
}