//Program to calculate permutations in which n people can occupy r seats in classroom .
#include<stdio.h>
int fact(int);
int main()
{
    int n,r;
    printf("Enter the number of people in classroom :\n");
    scanf("%d",&n);
    printf("Enter the number of seats in classroom : \n");
    scanf("%d",&r);
    printf("=> %d\n",fact(n)/fact(n-r));
}
int fact(int n)
{
    int x=1;
    for(int i=2;i<=n;i++)
        x=x*i;
    return x;
}
