#include<stdio.h>
#include<conio.h>

 void main()
 {
     int d,x,y;
     clrscr();
     printf("\n enter two digit number:");
     scanf("%d",&d);
     x=d%10;
     y=d/10;

     printf("\nsquare of the first digit is=%d",y*y);
     printf("\nsquare of the second digit is=%d",x*x);
     getch();
 }
