#include <iostream>
#include <utility>
using namespace std;

int main()
{
    int x, y;
    pair<int, int> p1;
    cin >> x >> y;
    p1 = {x, y};
    // p1 = make_pair(x, y);
    pair<int, string> p2(10, "Ankit");
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    return 0;
}

