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

bool searchBST(Node *root, int key)
{
    if (root == NULL)
        return false;

    if (root->key == key)
        return true;

    if (root->key > key)
        return searchBST(root->left, key);
    else
        return searchBST(root->right, key);
}

int main()
{
    Node *root = new Node(15);
    root->left = new Node(5);
    root->left->left = new Node(3);
    root->right = new Node(20);
    root->right->right = new Node(80);
    root->right->left = new Node(18);
    root->right->left->left = new Node(16);

    cout << searchBST(root, 17) << endl;

    return 0;
}