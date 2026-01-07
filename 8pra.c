#include<stdio.h>


int main() {
 printf("Dhruti Viradiya\n");
 printf("25CS113\n");
 int age;
 printf("enter your age");
scanf("%d",&age);
if(age>=18)
printf("you are eligible to have a savings account");
 else if (age<0)
printf("invalid input");

 else {
 printf("not eligible");
} }