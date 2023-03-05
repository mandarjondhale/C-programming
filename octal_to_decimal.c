//Program to convert number from OCTAL to DECIMAL .
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
        sum+=(x%10)*(pow(8,i));
        i++;
        x=x/10;
    }
    printf("DECIMAL conversion : %d\n",sum);
}
