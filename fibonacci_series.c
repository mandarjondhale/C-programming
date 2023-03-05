//Program to find fibonacci series upto nth term
#include<stdio.h>
int main()
{
    int n,a,b;
    printf("Enter limit : ");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d\t%d\t",a,b);
    int x;
    for(int i=2;i<n;i++)
    {
        x=a+b;
        a=b;
        b=x;
        printf("%d\t",x);
    }
}
