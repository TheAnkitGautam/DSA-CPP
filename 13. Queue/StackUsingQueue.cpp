#include <iostream>
#include <queue>
using namespace std;

class Stack
{
    queue<int> q1, q2;

public:
    int top() { return q1.front(); }
    int size() { return q1.size(); }
    void pop() { return q1.pop(); }
    void push(int x)
    {
        while (q1.empty() == false)
        {
            q2.push(q1.front());
            q1.pop();
        }

        q1.push(x);

        while (q2.empty() == false)
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
};

int main()
{
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << st.top() << endl;
    cout << st.size() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;

    return 0;
}