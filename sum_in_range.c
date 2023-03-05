//program to calculate sum of numbers in given range
#include<stdio.h>
int main()
{
    int m,n,sum=0;
    printf("Enter the range: ");
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
        sum+=i;
    printf("SUM : %d",sum);
}
