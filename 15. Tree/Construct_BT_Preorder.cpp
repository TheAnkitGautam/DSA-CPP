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

int preIndex = 0;
Node *constructBT(int in[], int pre[], int inStart, int inEnd)
{
    if (inStart > inEnd)
        return NULL;

    Node *root = new Node(pre[preIndex++]);

    int inIndex;

    for (int i = inStart; i <= inEnd; i++)
    {
        if (in[i] == root->key)
        {
            inIndex = i;
            break;
        }
    }

    root->left = constructBT(in, pre, inStart, inIndex - 1);
    root->right = constructBT(in, pre, inIndex + 1, inEnd);

    return root;
}

void printBT(Node *root)
{
    if (root == NULL)
        return;

    printBT(root->left);
    printBT(root->right);
    cout << root->key << " ";
}

int main()
{
    int in[] = {20, 10, 40, 30, 50};
    int pre[] = {10, 20, 30, 40, 50};

    int n = sizeof(in) / sizeof(in[0]);
    Node *root = constructBT(in, pre, 0, n - 1);
    printBT(root);

    return 0;
}