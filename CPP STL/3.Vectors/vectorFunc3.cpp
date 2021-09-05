#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{10, 5, 20, 15};
    v.clear();
    cout << v.size() << endl;
    vector<int> v2{10, 5, 20, 15};
    v2.erase(v2.begin(), v2.end());
    cout << v2.size() << endl;

    vector<int> v3{10, 5, 20, 15};
    v3.resize(3);
    for (int x : v3)
        cout << x << " ";
    cout << endl;
    v3.resize(5, 100);
    for (int x : v3)
        cout << x << " ";
    return 0;
}