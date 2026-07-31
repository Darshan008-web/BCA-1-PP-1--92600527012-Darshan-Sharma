// 6. Interchange the value of two numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,x,y;
    clrscr();
    printf("\n Enter Two Digit Number: ");
	scanf("%d",&n);
    x=n%10;
    y=x/10;
    printf("Interchanged Digits is: %d",(x*10)+y);
    getch();

}