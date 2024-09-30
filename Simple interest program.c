//program to calculate simple interest
/*
Author:Cyrus kipruto kosgei
Reg No:CT101/G/22278/24
Date:23/09/2024
*/
#include<stdio.h>
int main(){
float principle,rate,time;
printf("enter principle");
scanf("%f", & principle);
printf("enter rate");
scanf("%f", & rate);
printf("enter time");
scanf("%f", & time);
float SI = (principle*rate*time)/100;
printf("%f",SI);
return 0;
}

