#include <iostream>
#include <stack>
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

void Inorder(Node *root)
{
    stack<Node *> st;
    Node *curr = root;

    while (curr != NULL or !st.empty())
    {
        while (curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout << curr->key << " ";
        curr = curr->right;
    }
}
void Preorder(Node *root)
{
    if (root == NULL)
        return;

    stack<Node *> st;
    st.push(root);

    while (!st.empty())
    {
        Node *curr = st.top();
        cout << curr->key << " ";
        st.pop();

        if (curr->right != NULL)
            st.push(curr->right);

        if (curr->left != NULL)
            st.push(curr->left);
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    Inorder(root);
    cout << endl;
    Preorder(root);

    return 0;
}