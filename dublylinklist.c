#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;

void Insert_End(int value)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = value;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;
    }
}
void Delete_End()
{
    struct node *ptr = head;
    struct node *p;
    if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }
    else
    {
        while (ptr->next != NULL)
        {
            p = ptr;
            ptr = ptr->next;
        }
        p->next = NULL;
        free(ptr);
    }
}
void Insert_First(int value)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = value;
    temp->next = NULL;
    temp->prev = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        head = temp;
        ptr->prev = temp;
        temp->next = ptr;
    }
}
void Delete_First()
{
    struct node *ptr;
    if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }
    else
    {
        head = head->next;
        head->prev = NULL;
        free(ptr);
    }
}
void Insert_Mid(int value, int pos)
{
    struct node *ptr = head;
    struct node *p;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = value;
    temp->next = NULL;
    temp->prev = NULL;

    while (ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = temp;
    temp->prev = p;
    temp->next = ptr;
    ptr->prev = temp;
}

void Delete_Mid(int pos)
{
    struct node *ptr = head;
    struct node *p;
    if (ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    ptr->next->prev = p;
    free(ptr);
}
void Display()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("list is Empty");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}
int main()
{

    int n, value, pos;
    while (1)
    {
        printf("\n1.Insert End\n");
        printf("2.Delete End\n");
        printf("3.Insert First\n");
        printf("4.Delete First\n");
        printf("5.Insert Mid\n");
        printf("6.Delete Mid\n");
        printf("7.Display\n");
        printf("8.EXIT\n");

        printf("\n\n\nEnter your choice:");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("Enter the value of the link list:");
            scanf("%d", &value);
            Insert_End(value);
            break;

        case 2:
            Delete_End();
            break;

        case 3:
            printf("Enter the value of the link list:");
            scanf("%d", &value);
            Insert_First(value);
            break;

        case 4:
            Delete_First();
            break;

        case 5:

            printf("Enter the position:");
            scanf("%d", &pos);
            Display();
            printf("Enter the value of the link list:");
            scanf("%d", &value);
            Display();
            Insert_Mid(value, pos);
            Display();
            break;

        case 6:

            printf("Enter the position:");
            scanf("%d", &pos);

            Delete_Mid(pos);
            Display();
            break;

        case 7:
            Display();
            break;
        case 8:
            printf("*************THANK YOU FOR VISITING*************");
            exit(0);
        default:
            break;
        }
    }
}