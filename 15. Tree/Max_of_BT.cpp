#include <iostream>
#include <queue>
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

int getMax(Node *root)
{
    if (root == NULL)
        return INT_MIN;

    return max(root->key, max(getMax(root->left), getMax(root->right)));
}

int getMaxIter(Node *root)
{
    int max = INT_MIN;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();

        if (curr->key > max)
            max = curr->key;

        if (curr->left != NULL)
            q.push(curr->left);

        if (curr->right != NULL)
            q.push(curr->right);
    }
    return max;
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->right->right = new Node(8);

    cout << "Max: " << getMax(root) << endl;
    cout << "Max: " << getMaxIter(root) << endl;

    return 0;
}