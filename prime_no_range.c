//Program to find prime numbers within given range
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the range :\n");
    scanf("%d%d",&x,&y);
    for(int i=x;i<=y;i++)
    {
        if(i==1 || i==0)
            continue;
        int flag=0;
        for(int j=2;j<i;j++)
            if(i%j==0)
            {
                flag=1;
                break;
            }
        if(flag==0)
            printf("%d\t",i);
    }
}
