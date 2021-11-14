#include <stdio.h>
#include <stdlib.h>

struct node
{
    char data;
    struct node *next;
};

void printLL(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%c ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct node *insert_beginning(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct node *insert_end(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    while (p->next != NULL)
        p = p->next;

    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct node *delete_beginning(struct node *head)
{
    if (head == NULL)
        return NULL;
    else
    {
        struct node *temp = head->next;
        free(head);
        return temp;
    }
}
struct node *delete_end(struct node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }
    struct node *curr = head;
    while (curr->next->next != NULL)
        curr = curr->next;
    curr->next = NULL;
    return head;
}

int main()
{
    struct node *head = NULL;
    printf("1.Insert at beginning.\n");
    printf("2.Insert at end.\n");
    printf("3.Delete at beginning.\n");
    printf("4.Delete at end.\n");
    printf("5.Print the list\n");
    printf("6.Exit Program\n");

    int n;
    char ch;
    do
    {
        printf("\nEnter your Choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            printf("Enter data: ");
            fflush(stdin);
            scanf("%c", &ch);
            head = insert_beginning(head, ch);
            break;
        }
        case 2:
        {
            printf("Enter data: ");
            fflush(stdin);
            scanf("%c", &ch);
            head = insert_end(head, ch);
            break;
        }
        case 3:
            head = delete_beginning(head);
            break;
        case 4:
            head = delete_end(head);
            break;

        case 5:
            printLL(head);
            break;
        case 6:
        {
            printf("\nExiting Program...");
            exit(0);
        }
        }
    } while (n > 0 && n < 7);
    return 0;
}