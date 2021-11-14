#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void printLinkList(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct node *createLinkList(int arr[], int n)
{
    static int i = 0;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    if (n == 0)
        return NULL;
    temp->data = arr[i++];
    temp->next = createLinkList(arr, --n);
    return head;
}

int main()
{
    int n;
    struct node *head = NULL;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("Enter values of array elements:\n");
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nCreating linked list from array elements\n");
    head = createLinkList(arr, n);

    printf("\nPrinting linked list elements\n");
    printLinkList(head);
    return 0;
}