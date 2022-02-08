#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void generateNumbers(int n)
{
    queue<string> q;
    vector<string> ans;
    q.push("1");
    q.push("2");

    for (int i = 0; i < n; i++)
    {
        string curr = q.front();
        cout << curr << " ";
        q.pop();
        q.push(curr + "1");
        q.push(curr + "2");
    }
}

int main()
{
    int n;
    cin >> n;

    generateNumbers(n);

    return 0;
}