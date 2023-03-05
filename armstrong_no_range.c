//program to find armstrong numbers in given range
#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    printf("Enter the range : \n");
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        int count=0,sum=0,x1,x2;
        x1=i;
        x2=i;
        while(x1!=0)
        {
            count++;
            x1=x1/10;
        }
        while(x2!=0)
        {
            sum=sum + pow((x2%10),count);
            x2=x2/10;
        }
        if(sum==i)
            printf("%d\t",i);
    }
}

