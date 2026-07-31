//if is a key word what condition you mention then we want to do true or false
// 9. Find out Number is Odd or Even

#include<stdio.h>
#include<conio.h>

void main()
{
	int d;
	clrscr();
	printf("\n Enter Number: ");
	scanf("%d",&d);

    if(d%2==0){
        printf("Even Number");
    }
    else
	printf("Odd Number");
	getch();

}