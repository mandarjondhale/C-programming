//Program to calculate number of handshakes between given number of people.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of people : ");
    scanf("%d",&n);
    printf("Total No. of HANDSHAKES :  %d\n",n*(n-1)/2);
}

