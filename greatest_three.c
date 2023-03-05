//program to find greatest among three numbers
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the numbers :\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x==y && y==z)
        printf("EQUAL !\n");
    else if(x>y && x>z)
        printf("GREATEST no. is %d !\n",x);
    else if(y>x && y>z)
        printf("GREATEST no. is %d !\n",y);
    else if(x==y && x>z)
        printf(" First two numbers are equal and %d is the GREATEST no.!\n",x);
    else if(x==y && x<z)
        printf("GREATEST no. is %d !\n",z);
    else if(x==z && x>y)
        printf(" First and Third number are equal and %d is the GREATEST no.!\n",x);
    else if(x==z && x<y)
        printf("GREATEST no. is %d !\n",y);
    else if(y==z && y>x)
        printf(" Second and Third number are equal and %d is the GREATEST no.!\n",y);
    else if(y==z && y<x)
        printf("GREATEST no. is %d !\n",x);
    else
        printf("GREATEST no. is %d !\n",z);

}
