//program to check whether number is even or odd
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d is Even !\n",n);
    else
        printf("%d is Odd !\n",n);
}
