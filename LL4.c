#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

NODE *top;

void push()
{

    NODE *ptr = (NODE *)malloc(sizeof(NODE));
    if (ptr == NULL)
        printf("not able to push the element");
    else
    {
        printf("Enter the value : ");
        scanf("%d", &ptr->data);
        if (top == NULL)
        {
            ptr->next = NULL;
            top = ptr;
        }
        else
        {
            ptr->next = top;
            top = ptr;
        }
        printf("Item pushed");
    }
}

void pop()
{

    NODE *ptr;
    if (top == NULL)
        printf("Underflow");
    else
    {
        ptr = top;
        top = top->next;
        free(ptr);
        printf("Item popped");
    }
}

void print()
{

    NODE *ptr;
    ptr = top;
    if (ptr == NULL)
        printf("Stack is empty\n");
    else
    {
        printf("Printing Stack elements \n");
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
}

void main()
{

    int choice = 0;
    printf("\nSTACK implemented using singly linked list");

    while (choice != 4)
    {

        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("\nEnter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            print();
            break;
        }
        case 4:
        {
            printf("Exiting....");
            break;
        }
        default:
        {
            printf("Please Enter valid choice ");
        }
        };
    }
}



