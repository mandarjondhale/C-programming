//Program to convert a number from BINARY to DECIMAL .
#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    int i=0,sum=0;
    while(x!=0)
    {
        if(x%10==1)
            sum+=(pow(2,i));
        i++;
        x=x/10;
    }
    printf("DECIMAL conversion : %d\n",sum);
}
