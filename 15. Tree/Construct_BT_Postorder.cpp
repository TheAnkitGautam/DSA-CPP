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

Node *buildTree(int in[], int post[], int inStart, int inEnd, int *postIndex)
{
    if (inStart > inEnd)
        return NULL;

    Node *root = new Node(post[*postIndex]);
    (*postIndex)--;

    int inIndex;
    for (int i = 0; i <= inEnd; i++)
    {
        if (in[i] == root->key)
        {
            inIndex = i;
            break;
        }
    }

    root->right = buildTree(in, post, inIndex + 1, inEnd, postIndex);
    root->left = buildTree(in, post, inStart, inIndex - 1, postIndex);

    return root;
}

void printBT(Node *root)
{
    if (root == NULL)
        return;

    cout << root->key << " ";
    printBT(root->left);
    printBT(root->right);
}

int main()
{
    int in[] = {20, 10, 40, 30, 50};
    int post[] = {20, 40, 50, 30, 10};

    int n = sizeof(in) / sizeof(in[0]);

    cout << n << endl;
    int postIndex = n - 1;

    Node *root = buildTree(in, post, 0, n - 1, &postIndex);

    printBT(root);

    return 0;
}