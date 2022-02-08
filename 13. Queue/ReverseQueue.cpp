#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Iterative Solution
void reverseIterative(queue<int> &q)
{
    stack<int> st;
    while (q.empty() == false)
    {
        st.push(q.front());
        q.pop();
    }

    while (st.empty() == false)
    {
        q.push(st.top());
        st.pop();
    }
}

// Recursive Solution
void reverseRecursive(queue<int> &q)
{
    if (q.empty())
        return;

    int x = q.front();
    q.pop();
    reverseRecursive(q);
    q.push(x);
}

int main()
{
    queue<int> q;
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);

    cout << q.front() << endl;
    cout << q.back() << endl;
    
    reverseRecursive(q);

    cout << q.front() << endl;
    cout << q.back() << endl;

    return 0;
}