#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;

    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

void printSpiral(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    stack<int> st;
    q.push(root);

    bool reverse = false;

    while (!q.empty())
    {
        int count = q.size();

        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();

            if (reverse)
                st.push(curr->key);
            else
                cout << curr->key << " ";

            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }

        if (reverse)
        {
            while (!st.empty())
            {
                cout << st.top() << " ";
                st.pop();
            }
        }
        reverse = !reverse;
        // cout << endl;
    }
}

void printSpiralOptimized(Node *root)
{
    if (root == NULL)
        return;

    stack<Node *> s1, s2;
    s1.push(root);

    while (!s1.empty() or !s2.empty())
    {
        while (!s1.empty())
        {
            Node *curr = s1.top();
            s1.pop();
            cout << curr->key << " ";

            if (curr->left != NULL)
                s2.push(curr->left);
            if (curr->right != NULL)
                s2.push(curr->right);
        }

        while (!s2.empty())
        {
            Node *curr = s2.top();
            s2.pop();
            cout << curr->key << " ";

            if (curr->right != NULL)
                s1.push(curr->right);
            if (curr->left != NULL)
                s1.push(curr->left);
        }
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    printSpiral(root);
    cout << endl;
    printSpiralOptimized(root);

    return 0;
}