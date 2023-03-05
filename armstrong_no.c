/*Program to check whether given number is armstrong number or not.
What is armstrong number ?
=> Given number =  SUM of (each digit)^no.of digits   */
#include<stdio.h>
int main()
{
    int x,count=0;
    printf("Enter the number : ");
    scanf("%d",&x);
    int x1=x,x2=x;
    while(x!=0)
    {
        count++;
        x=x/10;
    }
    int sum=0;
    while(x1!=0)
    {
        sum+=pow((x1%10),count);
        x1=x1/10;
    }
    if(sum==x2)
        printf("Given number is a ARMSTRONG No. !\n");
    else
        printf("Given number is NOT a ARMSTRONG No. !\n");
}
