//Program to convert number from decimal to binary .
#include<stdio.h>
int main()
{
    int x,binary[1000],count=0;
    printf("Enter the number : ");
    scanf("%d",&x);
    int i=0;
    while(x!=0)
    {
        binary[i]=x%2;
        count++;
        i++;
        x=x/2;
    }
    for(int i=count-1;i>=0;i--)
        printf("%d",binary[i]);
}
