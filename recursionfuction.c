#include<stdio.h>
int fibonacci(int n)
{


    if (n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
   

}
int main()
{
    int n,i,fib;
    printf("Enter value of n:");
    scanf("%d",&n);
    for (i=1;i<=n; i++)
    {
        fib=fibonacci(i);
        printf("%d\t",fib);
    }
    
}