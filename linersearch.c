#include <stdio.h>
#include <stdlib.h>

int display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void search(int arr[], int n)
{
    int element;
    printf("Select element you want to see:");
    scanf("%d", &element);
    int j;

    for (j = 0; j < n; j++)
    {
        if (arr[j] == element)
        {
            printf("%d is found at index %d\n", element, j);
            break;
        }
    }
    if (j == n)
    {
        printf("Element it is not in array\n");
    }
}
int main()
{
    int n, choice;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 50;
    }
    while (1)
    {
        printf("1. Display\n");
        printf("2. Search\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            display(arr, n);
            break;
        case 2:
            search(arr, n);
            break;
        case 3:
            printf("Thanks for visit\n");
            goto a;
        default:
            printf("Invalid choice");
            break;
        }
    }
a:
    return 0;
}
