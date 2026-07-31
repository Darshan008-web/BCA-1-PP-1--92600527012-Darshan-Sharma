// 3. Write a program that takes 3 values for Principle
// Amount, Rate of Interest and No. of Years and find
// out Simple Interest.

#include<stdio.h>
#include<conio.h>

void main(){
    float SI,Principal,Rate,Time;
    clrscr();
    printf("Enter Principal Amount: \n");
    scanf("%f",&Principal);
    printf("Enter Rate Of Interest: \n");
    scanf("%f",&Rate);
    printf("Enter Total Time: \n");
    scanf("%f",&Time);
    SI=(Principal*Rate*Time)/100;
    printf("The Simple Interest Is: %f",SI);
    getch();
}