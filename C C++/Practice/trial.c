#include<stdio.h>

int factorial(int);
int main()
{
    int x,f;
    printf("Enter the number:");
    scanf("%d",&x);
    f=factorial(x);
    printf("Factorial:%d",f);
}

int factorial(int n)
{
    int fact;
    if(n==1)
    {
        return(1);
    }
    else
    {
        fact=n*factorial(n-1);
        return fact;
    }
}