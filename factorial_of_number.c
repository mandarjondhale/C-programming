//Program to calculate factorial of given number
#include<stdio.h>
int fact(int);
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    printf("Factorial of %d : %d\n",x,fact(x));
}
int fact(int x)
{
    if(x<=1)
        return 1;
    else
        return x*fact(x-1);
}
