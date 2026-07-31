#include<stdio.h>
#include<conio.h>

 void main()
 {
     int temp,x,y;
     clrscr();
     printf("\n Enter number 1 : ");
     scanf("%d",&x);
     printf("\n Enter number 2 : ");
     scanf("%d",&y);
     temp=x;
     x=y;
     y=temp;
     printf("\nNew number 1:%d\t\t" ,x);
     printf("\nNew number 2:%d\t\t" ,y);
     getch();
}

