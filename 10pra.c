#include<stdio.h>
int main() {
 printf("Dhruti Viradiya\n");
 printf("25CS113\n");
 int price;
 printf("1.burger\n");

 printf("2.pizza\n");
 printf("3.pasta\n");
 printf("4.sandwich\n");
 printf("5.fries\n");
 printf("enter the food item");
 scanf("%d",&price);
 switch(price)
 {
 case 1:
 printf("pay rupees 155");
 break;
 case 2:
 printf("pay rupees 200");
 break;
 case 3:
 printf("pay rupees 120");
 break;
 case 4:
 printf("pay rupees 100");
 break;
 case 5:

 printf("pay rupees 80");
 break;
 }
 return 0;
 }