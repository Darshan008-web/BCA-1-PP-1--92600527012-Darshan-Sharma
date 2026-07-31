#include<stdio.h>
#include<conio.h>

void main()
{
	float d;
	clrscr();
	printf("\n Enter your percentage: ");
	scanf("%f",&d);

	if(d<35)
	{
	printf("you are fail");
	}
	else
	printf(" you are pass");
	getch();

}