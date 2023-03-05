//Program to check quadrant in which a given co-ordinate lies .
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the Co-ordinates : \n");
    scanf("%d%d",&x,&y);
    if(x>0 && y>0)
        printf("given co-ordinates lies in FIRST quadrant !\n");
    else if(x<0 && y>0)
        printf("given co-ordinates lies in SECOND quadrant !\n");
    else if(x<0 && y<0)
        printf("given co-ordinates lies in THIRD quadrant !\n");
    else
        printf("given co-ordinates lies in FOURTH quadrant !\n");
}
