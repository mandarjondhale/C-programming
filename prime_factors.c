//Program to calculate prime factors of given number
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    for(int i=2;i<=x;i++)
    {
        while(x%i==0)
        {
            printf("%d\t",i);
            x=x/i;
        }
    }
}
