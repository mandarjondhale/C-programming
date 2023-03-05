//Program to find greatest among two numbers.
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers :\n");
    scanf("%d%d",&x,&y);
    if(x>y)
        printf("GREATEST no. is %d !\n",x);
    else if(y>x)
        printf("GREATEST no. is %d !\n",y);
    else
        printf("EQUAL !\n");
}
