#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int d)
    {
        data = d;
        prev = next = NULL;
    }
};

Node *insertBegin(Node *head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;

    if (head != NULL)
        head->prev = temp;
    return temp;
}
Node *insertEnd(Node *head, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
        return temp;
    Node *curr = head;

    while (curr->next != NULL)
        curr = curr->next;

    curr->next = temp;
    temp->prev = curr;
    return head;
}

Node *deleteHead(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return head;
    }
}

Node *deleteEnd(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node *curr = head;
        while (curr->next != NULL)
            curr = curr->next;

        curr->prev->next = NULL;
        delete curr; 
        return head;
    }
}

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main()
{
    Node *head = NULL;
    head = insertBegin(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = deleteHead(head);
    head = deleteEnd(head);
    printList(head);

    return 0;
}