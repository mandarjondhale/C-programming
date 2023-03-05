/*Program to check whether given number is harshad number or not
What is harshad number ?
=> It is divisible by addition of digits of itelf .
e.g.  number is 54 =>  5+4=9   , 54 is divisible by 9 so 54 is a HARSHAD number . */

#include<stdio.h>
int main()
{
    int x,org,sum=0;
    printf("Enter the number : ");
    scanf("%d",&x);
    org=x;
    while(x!=0)
    {
        sum+=(x%10);
        x=x/10;
    }
    if(org%sum==0)
        printf("%d is a HARSHAD No. !\n",org);
    else
        printf("%d is NOT a HARSHAD No. !\n",org);
}
