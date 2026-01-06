#include<stdio.h>
 int main() {
 printf("Dhruti Viradiya\n");
 printf("25CS113\n");
 float weight,height;
 float BMI;

 printf("enter your weight=");
 scanf("%f",&weight);

 printf("enter your height=");
 scanf("%f",&height);
 BMI=weight/(height*height);
 printf("BMI=%.2f",BMI);
 }