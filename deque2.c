#include <stdio.h>
#include <stdlib.h>
int F = -1;
int R = -1;
int x, n;
void insertfront(int arr[])
{
    if ((F == 0 && R == n - 1) || F == R + 1)
    {
        printf("Queue is full\n");
    }
    else if (F == -1 && R == -1)
    {
        F = 0;
        R = 0;
        arr[F] = x;
    }
    else if (F == 0)
    {
        F = n - 1;
        arr[F] = x;
    }
    else
    {
        F = F - 1;
        arr[F] = x;
    }
}
void insertrear(int arr[])
{
    if ((F == 0 && R == n - 1) || F == R + 1)
    {
        printf("Queue is full");
    }
    else if (F == -1 && R == -1)
    {
        R = 0;
        arr[R] = x;
    }
    else if (R == n-1)
    {
        R = 0;
        arr[R] = x;
    }
    else
    {
        R = R + 1;
        arr[R] = x;
    }
}

void deletefront(int arr[])
{
    if ((F == -1) && (R == -1))
    {
        printf("arr is empty");
    }
    else if (F == R)
    {
        printf("\nThe deleted element is %d", arr[F]);
        F = -1;
        R = -1;
    }
    else if (F == (n - 1))
    {
        printf("\nThe deleted element is %d", arr[F]);
        F = 0;
    }
    else
    {
        printf("\nThe deleted element is %d", arr[F]);
        F = F + 1;
    }
}
void deleterear(int arr[])
{
    if ((F == -1) && (R == -1))
    {
        printf("arr is empty");
    }
    else if (F == R)
    {
        printf("\nThe deleted element is %d", arr[R]);
        F = -1;
        R = -1;
    }
    else if (R == 0)
    {
        printf("\nThe deleted element is %d", arr[R]);
        R= n - 1;
    }
    else
    {
        printf("\nThe deleted element is %d", arr[R]);
        R = R - 1;
    }
}
void display(int arr[])
{
    int i = F;
    printf("\nThe element ARR are:");
    while (i != R)
    {
        printf("%d  ", arr[i]);
        i = (i + 1) % n;
    }
    printf("%d ", arr[R]);
}
int main()
{
    int choice;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    while (1)
    {
        printf("\n1.Insert Front\n");
        printf("2.Insert Rear\n");
        printf("3.Delete Front\n");
        printf("4.Delete Rear\n");
        printf("5.Display\n");
        printf("6.Exit\n");

        printf("\nPlease Enter Your Choice:");
        scanf("%d", &choice);

        if (choice > 6)
        {
            printf("\n\nInvalid choice!! Re-enter it.\n\n");
            continue;
        }

        switch (choice)
        {
        case 1:
            printf("enter a element to enter in front:");
            scanf("%d", &x);
            insertfront(arr);
            break;
        case 2:
            printf("enter a element to enter in rear:");
            scanf("%d", &x);
            insertrear(arr);
            break;
        case 3:
            deletefront(arr);
            break;
        case 4:
            deleterear(arr);
            break;
        case 5:
            display(arr);
            break;
        case 6:
            printf("*********Thanks for visiting*********");
            goto a;
        }
    }
a:
    return 0;
}