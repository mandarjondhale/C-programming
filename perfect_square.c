//Program to check whether the given number is perfect square or not
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    printf("Enter the number : ");
    scanf("%d",&x);
    y=sqrt(x);
    if(x==(y*y))
        printf("%d is a PERFECT SQUARE !\n",x);
    else
        printf("%d is NOT a PERFECT SQUARE !\n",x);
}
