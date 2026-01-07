#include<stdio.h>
 int main()
 {

 int bill;
 int total;

 printf("Dhruti Viradiya\n");
 printf("25CS113\n");
 printf("enter the billing amount=");
 scanf("%d",&bill);
 if(bill<1000) {
printf("no discount granted\n");
printf("Total amount=%d",bill); }
else if(bill>=1000&&bill<=5000) {
 printf("you are granted 10 percent discount\n");
 total=bill/10; bill=bill-total;
printf("Total amount=%d",bill); }
else if(bill>5000){ printf("you are granted 20percent discount\n");
total=(bill/10)*2; bill=bill;
total;

 printf("Total amount=%d",bill);
 }
 else
 printf("invalid amount");
 }