//Program to find HCF(Highest common factor) of given numbers.
#include<stdio.h>
int main()
{
    int x,y,hcf;
    printf("Enter the numbers : \n");
    scanf("%d%d",&x,&y);
    for(int i=1;i<=x && i<=y;i++)
        if(x%i==0 && y%i==0)
            hcf=i;
    printf("HCF of %d and %d : %d\n",x,y,hcf);
}
