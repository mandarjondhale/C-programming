//Program to calculate addition of two fraction numbers .
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter first number's numerator and denominator : \n");
    scanf("%d%d",&a,&b);
    printf("Enter second number's numerator and denominator : \n");
    scanf("%d%d",&c,&d);
    int x=(a*d+b*c);
    int y=b*d,hcf;
    for(int i=1;i<=x && i<=y;i++)
        if(x%i==0 && y%i==0)
            hcf=i;
    printf("ADDITION : %d/%d\n",x/hcf,y/hcf);
}
