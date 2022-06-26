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

Node *prevv = NULL;
Node *BT_to_DLL(Node *root)
{
    if (root == NULL)
        return root;

    Node *head = BT_to_DLL(root->left);

    if (prevv == NULL)
        head = root;
    else
    {
        root->left = prevv;
        prevv->right = root;
    }
    prevv = root;

    BT_to_DLL(root->right);

    return head;
}

void printDLL(Node *root)
{
    Node *curr = root;

    while (curr != NULL)
    {
        cout << curr->key << " ";
        curr = curr->right;
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->right->left = new Node(30);
    root->right->right = new Node(35);

    Node *head = BT_to_DLL(root);
    printDLL(head);

    return 0;
}