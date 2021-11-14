#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void printCLL(struct node *head)
{
    struct node *ptr = head;
    printf("Printing Circular List\n");
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("\n");
}

struct node *insert_beginning(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;
    struct node *curr = head;
    if (head == NULL)
    {
        head = ptr;
        ptr->next = head;
    }
    else
    {
        do
        {
            curr = curr->next;
        } while (curr->next != head);
        curr->next = ptr;
        ptr->next = head;
        head = ptr;
    }
    return head;
}

struct node *insert_end(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;
    struct node *curr = head;
    if (head == NULL)
    {
        head = ptr;
        ptr->next = head;
    }
    else
    {
        do
        {
            curr = curr->next;
        } while (curr->next != head);
        curr->next = ptr;
        ptr->next = head;
    }
    return head;
}

struct node *delete_beginning(struct node *head)
{
    struct node *curr = head;
    if (head->next == head)
        head = NULL;
    else
    {
        do
        {
            curr = curr->next;
        } while (curr->next != head);
        head = head->next;
        curr->next = head;
    }
    return head;
}

struct node *delete_end(struct node *head)
{
    struct node *curr = head;
    if (head->next == head)
        head = NULL;
    else
    {
        while (curr->next->next != head)
        {
            curr = curr->next;
        }
        free(curr->next);
        curr->next = head;
    }
    return head;
}
int main()
{
    struct node *head = NULL;
    int choice, x;

    printf("1.Insert at beginning.\n");
    printf("2.Insert at end.\n");
    printf("3.Delete at beginning.\n");
    printf("4.Delete at end.\n");
    printf("5.Print the list\n");
    printf("6.Exit Program\n");
    fflush(stdin);

    do
    {
        printf("\nEnter your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter data: ");
            fflush(stdin);
            scanf("%d", &x);
            head = insert_beginning(head, x);
            break;
        }
        case 2:
        {
            printf("Enter data: ");
            fflush(stdin);
            scanf("%d", &x);
            head = insert_end(head, x);
            break;
        }
        case 3:
            head = delete_beginning(head);
            break;
        case 4:
            head = delete_end(head);
            break;

        case 5:
            printCLL(head);
            break;
        case 6:
        {
            printf("\nExiting Program...");
            exit(0);
        }
        }
    } while (choice > 0 && choice < 7);

    return 0;
}