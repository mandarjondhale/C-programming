//Program to calculate sum of digits of number
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    int sum=0;
    while(x!=0)
    {
        sum+=(x%10);
        x=x/10;
    }
    printf("SUM of digits : %d\n",sum);
}
