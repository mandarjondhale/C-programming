//Program to check whether given number is palindrome number or not
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    int rev=0,org=x;
    while(x!=0)
    {
        rev=rev*10+x%10;
        x=x/10;
    }
    if(org==rev)
        printf("Given number is a PALINDROME No. !\n");
    else
        printf("Given number is NOT a PALINDROME No. !\n");
}
