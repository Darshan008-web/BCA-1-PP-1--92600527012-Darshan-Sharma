#include<stdio.h>
#include<conio.h>

 void main()
 {
     int a,b,c;
     clrscr();
     printf("Enter value of A:");
     scanf("%d",&a);
     b=a*a;

     printf("\n\n square is := %d",b);
     getch();
     c=a*a*a;
     printf("\n\n cube is := %d",c);
     getch();

}