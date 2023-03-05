//Program to calculate power of number
#include<stdio.h>
#include<math.h>
int main()
{
    double x,y;
    printf("Enter the number and power to calculate :\n");
    scanf("%lf%lf",&x,&y);
    double total=1;
    for(double i=0;i<y;i++)
        total=total*x;
    printf("ANS. : %lf\n",total);

    /*Using inbuilt function*/
    printf("ANS. : %lf\n",pow(x,y));
}
