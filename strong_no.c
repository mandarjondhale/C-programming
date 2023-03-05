/*Program to check whether given number is strong number or not
What is strong number ?
=> It is a number whose sum of factorial of digits is equal to the number itself.
e.g.   145= 1! + 4! + 5!  */
#include<stdio.h>
int length(int);
int fact(int);
int main()
{
    int x,result=0,org;
    printf("Enter the number : ");
    scanf("%d",&x);
    org=x;
    int len=length(x);
    for(int i=0;i<len;i++)
    {
        result=result+fact(x%10);
        x=x/10;
    }
    if(org==result)
        printf("Given number is a STRONG No. !\n");
    else
        printf("Given number is NOT a STRONG No.\n");
}
int length(int x)
{
    int count=0;
    while(x!=0)
    {
        count++;
        x=x/10;
    }
    return count;
}

int fact(int x)
{
    if(x<=1)
        return 1;
    else
        return x*fact(x-1);
}
