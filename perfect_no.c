/*Program to check whether given number is perfect number or not
What is perfect number ?
=> It is a positive number that equals to the sum of all it's divisors (excluding itself).
e.g.  6 =>  1+2+3 .   */
#include<stdio.h>
int main()
{
    int x,result=0;
    printf("Enter the number : ");
    scanf("%d",&x);
    for(int i=1;i<x;i++)
    {
        if(x%i==0)
            result+=i;
    }
    if(x==result)
        printf("Given number is a PERFECT No. !\n");
    else
        printf("Given number is NOT a PERFECT No. !\n");
}
