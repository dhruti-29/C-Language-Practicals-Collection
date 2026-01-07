#include<stdio.h>
int main() {
 printf("Dhruti Viradiya\n");
 printf("25CS113\n");
 double F,C,K;

 printf("enter your temperature in celsius ");
 scanf("%f",&C); F=(C*9/5)+32;

 printf("the value of temperature in fahrenheit is %f",F);
 K=C+273.15;
 printf("\ntemperature in kelvin is %f",K);
}