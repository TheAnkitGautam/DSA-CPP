#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << (curr->data) << " ";
        curr = curr->next;
    }
}

void recurPrint(Node *head)
{
    if (head == NULL)
        return;
    cout << (head->data) << " ";
    recurPrint(head->next);
}

Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    Node *curr = head;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = temp;
    return head;
}

Node *deleteHead(Node *head)
{
    if (head == NULL)
        return NULL;
    else
    {
        Node *temp = head->next;
        delete head;
        return temp;
    }
}

Node *deleteLastNode(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next->next != NULL)
        curr = curr->next;
    curr->next = NULL;
    return head;
}

Node *insertAtIndex(Node *head, int pos, int data)
{
    Node *temp = new Node(data);
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }

    Node *curr = head;
    for (int i = 1; i <= (pos - 2) and (curr != NULL); i++)
        curr = curr->next;
    if (curr == NULL)
        return head;

    temp->next = curr->next;
    curr->next = temp;

    return head;
}

int searchLL(Node *head, int x)
{
    int pos = 1;
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == x)
            return pos;
        else
        {
            pos++;
            curr = curr->next;
        }
    }
    return -1;
}

int searchRecur(Node *head, int x)
{
    if (head == NULL)
        return -1;
    if (head->data == x)
        return 1;
    else
    {
        int res = searchRecur(head->next, x);
        if (res == -1)
            return -1;
        else
            return (res + 1);
    }
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    Node *temp4 = new Node(50);
    Node *temp5 = new Node(60);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    temp4->next = temp5;

    head = insertBegin(head, 500);
    head = insertEnd(head, 70);
    head = deleteHead(head);
    head = deleteLastNode(head);
    head = insertAtIndex(head, 5, 0);
    printList(head);
    cout << "\n";
    cout << searchLL(head, 40) << "\n";
    cout << searchRecur(head, 40) << "\n";

    return 0;
}