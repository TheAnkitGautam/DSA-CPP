#include <iostream>
#include <vector>
using namespace std;
    
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    cout<<v.capacity()<<endl;
    return 0;
}