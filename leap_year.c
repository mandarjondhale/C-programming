//Program to check whether given year is leap year or not
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the year: ");
    scanf("%d",&x);
    if(x%400==0)
        printf("It is a Leap Year !\n");
    else if(x%4==0 && x%100!=0)
        printf("It is a Leap Year !\n");
    else
        printf("It is not a Leap Year !\n");
}
