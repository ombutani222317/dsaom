#include <stdio.h>
int f = -1;
int r = -1;
void display(int arr[])
{

    if (f == -1 && r == -1)
    {
        printf("Data not found");
    }
    else
    {
        for (int i = f; i <= r; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}
void enqueue(int arr[], int n, int element)
{
    if (r == n - 1)
    {
        printf("Queue is full\n");
    }
    else if (r == -1 && f == -1)
    {
        f = 0;
        r = 0;
        arr[r] = element;
    }
    else
    {
        r++;
        arr[r] = element;
        printf("Enqueued %d\n", element);
    }
}

void dequeue(int arr[], int n)
{
    if (r == -1)
    {
        printf("Queue is empty\n");
    }
    else if (f == r)
    {
        f = -1;
        r = -1;
    }
    else
    {
        f++;
        printf("Dequeued\n");
    }
}
int main()
{
    int n, choice, element;
    printf("Enter the array size:");
    scanf("%d", &n);
    int arr[n];
    while (1)
    {

        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4.Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            printf("Enter the element to be inserted:");
            scanf("%d", &element);
            enqueue(arr, n, element);
            break;
        case 2:

            dequeue(arr, n);
            break;
        case 3:
            display(arr);
            break;
        case 4:
            printf("*************Thanks for visiting*************");
            goto a;

        default:
            break;
        }
    }
a:;
}