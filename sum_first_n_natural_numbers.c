/*Program to calculate sum of first n natural numbers*/

/*using direct formula*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number where do you want to calculate sum.\n");
    scanf("%d",&n);
    n=n*(n+1)/2;
    printf("SUM : %d\n",n);
}

/*Using iterative method*/
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number where do you want to calculate sum.\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        sum+=i;
    printf("SUM : %d\n",sum);
}

/*Using recursion*/
#include<stdio.h>
cal(int,int);
int main()
{
    int n,sum=0;
    printf("Enter the number where do you want to calculate sum.\n");
    scanf("%d",&n);
    printf("SUM : %d",cal(sum,n));
}
int cal(int sum,int n)
{
    if(n==0)
        return sum;
    else
        return n+cal(sum,n-1);
}










