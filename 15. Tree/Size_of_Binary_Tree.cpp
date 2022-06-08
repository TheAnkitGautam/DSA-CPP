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

int getSize(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return (1 + getSize(root->left) + getSize(root->right));
}

int getSizeIterative(Node *root)
{
    queue<Node *> q;
    q.push(root);

    int size = 1;

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();

        if (curr->left != NULL)
        {
            q.push(curr->left);
            size++;
        }

        if (curr->right != NULL)
        {
            q.push(curr->right);
            size++;
        }
    }
    return size;
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

    cout << "Size: " << getSize(root) << endl;
    cout << "Size Iterative: " << getSizeIterative(root) << endl;

    return 0;
}