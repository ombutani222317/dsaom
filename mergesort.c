#include <stdio.h>
#include <stdlib.h>
int Size;
void Marge(int Queue[], int LB, int Mid, int UB)
{
    int i = LB;
    int j = Mid + 1;
    int k = LB;
    int arr1[50];

    while (i <= Mid && j <= UB)
    {
        if (Queue[i] <= Queue[j])
        {
            arr1[k] = Queue[i];
            i++;
        }
        else
        {
            arr1[k] = Queue[j];
            j++;
        }
        k++;
    }
    if (i > Mid)
    {
        while (j <= UB)
        {
            arr1[k] = Queue[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= Mid)
        {
            arr1[k] = Queue[i];
            i++;
            k++;
        }
    }
    for (k = LB; k <= UB; k++)
    {
        Queue[k] = arr1[k];
    }
}

void MargeSort(int Queue[], int LB, int UB)
{
    if (LB < UB)
    {
        int Mid = (LB + UB) / 2;
        MargeSort(Queue, LB, Mid);
        MargeSort(Queue, Mid + 1, UB);
        Marge(Queue, LB, Mid, UB);
    }
}
void Display(int Queue[])
{
    for (int i = 0; i < Size; i++)
    {
        printf("%d  ", Queue[i]);
    }
}

int main()
{
    int LB, UB, Mid;
    int Queue[Size], choice;

    printf("Enter the size of Queue:");
    scanf("%d", &Size);
    for (int i = 0; i < Size; i++)
    {
        Queue[i] = rand() % 50 + 1;
    }

    while (1)
    {
        printf("\n1.MargeSort");
        printf("\n2.Display");
        printf("\n3.Exit");

        printf("\n\nEnter your choice:");
        scanf("%d", &choice);

        switch (choice)

        {

        case 1:
            MargeSort(Queue, 0,Size-1);
            break;

        case 2:
            Display(Queue);
            break;

        case 3:
            goto Exit;
        }
    }
Exit:
    return 0;
}