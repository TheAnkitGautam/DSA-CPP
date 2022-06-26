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

int Height(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return max(Height(root->left), Height(root->right)) + 1;
}
// NAIVE SOLUTION

bool isBal(Node *root)
{
    if (root == NULL)
        return true;

    int lh = Height(root->left);
    int rh = Height(root->right);

    return (abs(lh - rh) <= 1 and isBal(root->left) and isBal(root->right));
}

// Optimized Solution
int isBalanced(Node *root)
{
    if (root == NULL)
        return 0;

    int lh = isBalanced(root->left);
    if (lh == -1)
        return -1;

    int rh = isBalanced(root->right);
    if (rh == -1)
        return -1;

    if (abs(lh - rh) > 1)
        return -1;
    else
        return max(lh, rh) + 1;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(30);
    root->right->left = new Node(15);
    root->right->right = new Node(20);
 
    cout << isBalanced(root) << endl;

    return 0;
}