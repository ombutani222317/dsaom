#include <stdio.h>

void last(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int c;
    c = arr[0];
    for (int i = 0; i < n; i++)
    {

        arr[i] = arr[i + 1];
    }
    arr[n - 1] = c;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}
int main()
{

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    last(arr, n);
    return 0;
}
