#include <stdio.h>
#define N 10
int search(int arr[], int data, int left, int right)
{
    int mid;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == data)
        {
            return mid;
        }
        else if (arr[mid] < data)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}
void display(int arr[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int choice, M;

    int arr[N] = {10, 20, 30, 40, 42, 48, 55, 65, 74, 85};
    int data;

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
            display(arr);

            break;
        case 2:
            printf("Enter the element to search: ");
            scanf("%d", &data);
            M = search(arr, data, 0, N - 1);
            if (M != -1)
            {
                printf("Element found at index %d\n", M);
            }
            else
            {
                printf("Element not found\n");
            }

            break;
        case 3:
            printf("Thanks for visit\n");
            goto a;
        default:
            printf("Invalid choice");
            break;
        }
    }
a:;
}