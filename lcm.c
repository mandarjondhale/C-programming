//Program to calculate LCM(Lowest common multiple) of given numbers.
#include<stdio.h>
int main()
{
    int x,y,lcm;
    printf("Enter the numbers : \n");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        for(int i=x; ;i++)
        {
            if(i%x==0 && i%y==0)
            {
                lcm=i;
                break;
            }
        }
    }
    else
    {
        for(int i=y; ;i++)
        {
            if(i%x==0 && i%y==0)
            {
                lcm=i;
                break;
            }
        }
    }
    printf("LCM of %d and %d : %d\n",x,y,lcm);
}
