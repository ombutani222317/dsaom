#include <stdio.h>
struct node
{
    int data;
    char a;
    struct node *ptr;
};

int main()
{
    struct node n1, n2;
    n1.a = 'A';
    n1.data = 23;

    n2.a = 'B';
    n2.data = 22;
    printf("After\n\n");
    printf("value of n1.a:%c\nvalue of n1.data:%d", n1.a, n1.data);
    printf("\nvalue of n2.a:%c\nvalue of n2.data:%d", n2.a, n2.data);

    n1.ptr = &n2;
    n2.ptr = &n1;

    printf("\n\nBefore\n\n");
    printf("value of n1.a:%c\nvalue of n1.data:%d", n1.ptr->a, n1.ptr->data);
    printf("\nvalue of n2.a:%c\nvalue of n2.data:%d", n2.ptr->a, n2.ptr->data);
}