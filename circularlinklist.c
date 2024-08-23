#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;
void Insert_End(int val)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    if (head == NULL && tail == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}

void Delete_End()
{
    struct node *ptr = tail;
    struct node *p = head;
    if (head == NULL)
    {
        printf("\nlist is empty......\n");
        return;
    }
    else if (head == tail)
    {
        head == NULL;
        tail == NULL;
        free(ptr);
        return;
    }
    while (p->next != ptr)
    {
        p = p->next;
    }
    p->next = head;
    tail = p;
    free(ptr);
}
void Display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("\nlist is empty......\n");
        return;
    }
    else
    {
        while (ptr != tail)
        {

            printf("%d\t", ptr->data);
            ptr = ptr->next;
        }
        printf("%d", ptr->data);
        printf("\n");
    }
}
int main()
{
    int n, pos, num, val;
    while (1)
    {
        printf("\n1.Insert End\n");
        printf("2.Delete End\n");
        printf("3.Display\n");
        printf("4.Exit\n");
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
            Display();
            break;
        case 4:
            printf("********INVALID CHOICE********");
            goto a;
        }
    }
a:;
}