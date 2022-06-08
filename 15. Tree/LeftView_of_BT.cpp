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

int maxLvl = 0;
void leftViewRecur(Node *root, int lvl)
{
    if (root == NULL)
        return;

    if (maxLvl < lvl)
    {
        cout << root->key << " ";
        maxLvl = lvl;
    }
    leftViewRecur(root->left, lvl + 1);
    leftViewRecur(root->right, lvl + 1);
}

void leftView(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int count = q.size();

        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();

            if (i == 0)
                cout << curr->key << " ";

            if (curr->left != NULL)
                q.push(curr->left);

            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->right->right->left = new Node(70);

    leftViewRecur(root, 1);
    cout << endl;
    leftView(root);

    return 0;
}