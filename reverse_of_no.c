//Program to reverse a given number
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    int rev=0;
    while(x!=0)
    {
        rev=rev*10+x%10;
        x=x/10;
    }
    printf("REVERSED no. is : %d\n",rev);
}
