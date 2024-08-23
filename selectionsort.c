#include <stdio.h>
#include <stdlib.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void selection(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        int small = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[small])
            {
                small = j;
            }
        }
        if (small != i)
        {
            temp = arr[i];
            arr[i] = arr[small];
            arr[small] = temp;
        }
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
}

int main()
{

    int choice, M, temp, n;
    printf("Enter a size of array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
    while (1)
    {
        printf("\n1. Display\n");
        printf("2. Sort array\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            display(arr, n);

            break;

        case 2:
            selection(arr, n);
            break;
        case 3:
            printf("Thanks for visit\n");
            goto arr;
        default:
            printf("Invalid choice");
            break;
        }
    }
arr:;
}
