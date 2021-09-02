#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    vector<int>::iterator i = v.begin(); //auto i;
    cout << (*i) << " ";
    i = next(i); //or i++;
    cout << (*i) << " ";
    advance(i, 2);
    cout << (*i) << " ";
    i = v.end();
    i = prev(i); //or i--;
    cout << (*i) << " ";
    return 0;
}