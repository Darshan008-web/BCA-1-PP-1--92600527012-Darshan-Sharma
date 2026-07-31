/*write a prg to display your adderss
write a prg to calulate area of cicrle
wap to calculate total marks anmd percent baisd 5 sub marks
write to convet kg to g
wap to input one number and check weather is to positive or a negative number
wap to input your percent and display your result pass or fail  */
#include<stdio.h>
#include<conio.h>

void main()
{
	int d;
	clrscr();
	printf("\n Enter Number: ");
	scanf("%d",&d);

   if(d<0)
   {
	printf("negative number");
    }
    else
	printf("positive number");
	getch();

}