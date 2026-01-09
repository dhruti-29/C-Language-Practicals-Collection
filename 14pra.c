#include<stdio.h>
int main() {
 printf("Dhruti Viradiya\n");
 printf("25CS113\n");
 int balance=5000,i;
 printf("your current balance is %d Rs.",balance);
 while(balance<=5000&&balance>=0)
 {
printf("\nenter the amount you want to withdraw=");
 scanf("%d",&i);
 balance=balance-i;
if(balance>=0)

 printf("\namount remaining=%d",balance);
else
{printf("\namount remaining=%d",balance);
 printf("\ninsufficient balance!");
}}
}