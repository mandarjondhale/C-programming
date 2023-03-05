//Program to find factors of number
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    printf("Factors of %d : \n",x);
    for(int i=1;i<=x/2;i++)
        if(x%i==0)
            printf("%d\t",i);
    printf("%d\n",x);
}
