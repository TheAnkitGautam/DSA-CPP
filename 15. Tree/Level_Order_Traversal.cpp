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

void printLevel(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->key << " ";

        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}

int main()
{
    Node *root = new Node(10);

    root->left = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(7);
    root->left->right->left = new Node(9);
    root->left->right->right = new Node(15);
    root->right = new Node(30);
    root->right->right = new Node(6);

    printLevel(root);

    return 0;
}