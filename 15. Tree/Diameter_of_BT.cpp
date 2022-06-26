#include <iostream>
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
int height(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(height(root->left), height(root->right));
}

int diameterNaive(Node *root)
{
    if (root == NULL)
        return 0;

    int d1 = 1 + height(root->left) + height(root->right);
    int d2 = diameterNaive(root->left);
    int d3 = diameterNaive(root->right);

    return max(d1, max(d2, d3));
}

// Efficient solution using height of the tree
int res = 0;
int diameterHeight(Node *root)
{
    if (root == NULL)
        return 0;

    int lh = height(root->left);
    int rh = height(root->right);

    res = max(res, lh + rh + 1);
    return 1 + max(lh, rh);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->left->left = new Node(50);
    root->right->right = new Node(60);
    root->right->right->right = new Node(70);

    cout << diameterNaive(root) << endl;

    diameterHeight(root);
    cout << res << endl;

    return 0;
}