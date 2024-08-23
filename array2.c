#include <stdio.h>

void array(int arr[],int arr2[] ,int n,int p)
{

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
      for (int j= 0; j < n; j++)
    {
        printf("Enter element %d: ",j + 1);
        scanf("%d", &arr2[j]);
    }


    printf("\n");
}
int main()
{

    int n, p;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the number of second array's elements: ");
    scanf("%d", &p);
    int arr2[p];

    array(arr,arr2, n,p);


    return 0;
}
