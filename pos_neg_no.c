//Program to check whether number is positive or negative
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number :\n");
    scanf("%d",&n);
    if(n<0)
    printf("%d is Negative number!\n",n);
    else
    printf("%d is Positive number!\n",n);
}
