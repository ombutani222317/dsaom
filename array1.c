#include <stdio.h>

void array(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        int c;
        c = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = c;
    }
    printf("The Reversed array: ");
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

    array(arr, n);

    printf("%d", arr[2]);
    return 0;
}
