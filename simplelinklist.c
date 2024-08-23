#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void Insert_End(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;
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
    while (ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
}
void Insert_First(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    head = temp;
}
void Delete_First()
{
    struct node *ptr = head;
    head = ptr->next;
    free(ptr);
}
void Insert_Mid(int num, int pos)
{
    struct node *ptr = head;
    struct node *p;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = num;
    temp->next = NULL;
    while (ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = temp;
    temp->next = ptr;
}
void Delete_Mid(int pos)
{
    struct node *ptr = head;
    struct node *p;
    while (ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
}
void Display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("The list is already empty..........");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d\t", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n\n");
}

int main()
{
    int n, pos, num, val;
    while (1)
    {
        printf("\n1.Insert End\n");
        printf("2.Delete End\n");
        printf("3.Insert First\n");
        printf("4.Delete First\n");
        printf("5.Insert Mid\n");
        printf("6.Delete Mid\n");
        printf("7.Display\n\n");

        printf("\n\nEnter your choice:");
        scanf("%d", &n);

        switch (n)
        {
        case 1:

            printf("Enter a choice you want to insert in End:");
            scanf("%d", &val);

            Insert_End(val);
            break;

        case 2:
            Delete_End();
            break;
        case 3:

            printf("Enter a choice you want to insert in First:");
            scanf("%d", &num);

            Insert_First(num);
            break;
        case 4:
            Delete_First();
            break;
        case 5:

            printf("Enter a position where you can insert:");
            scanf("%d", &pos);
            Display();
            printf("Enter a choice you want to insert in end:");
            scanf("%d", &num);
            Insert_Mid(num, pos);
            Display();
            break;
        case 6:
            Delete_Mid(pos);
            break;
        case 7:
            Display();
            break;
        case 8:
            printf("********INVALID CHOICE********");
            goto a;
        }
    }
a:;
}