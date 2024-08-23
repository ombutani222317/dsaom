#include <stdio.h>

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
void display(int arr[],int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
}
void bubble(int arr[], int temp,int N)
{

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d\t", arr[i]);
    }
}
int main()
{
    int choice, M, temp, N;
    printf("Enter a size of array:");
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 100 + 1;
    }

    int data;

    while (1)
    {
        printf("\n1. Display\n");
        printf("2. Search\n");
        printf("3. Sort array\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            display(arr,N);

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
            bubble(arr, temp,N);
            break;
        case 4:
            printf("Thanks for visit\n");
            goto a;
        default:
            printf("Invalid choice");
            break;
        }
    }
a:;
}