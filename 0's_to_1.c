 //Program to replace all 0's with 1 in given integer .
 #include<stdio.h>
 int main()
 {
     char a[1000];
     printf("Enter the number : ");
     scanf("%s",&a);
     int i=0;
     while(a[i]!='\0')
     {
         if(a[i]=='0')
            a[i]='1';
         i++;
     }
     printf("New number : %s\n",a);
 }
