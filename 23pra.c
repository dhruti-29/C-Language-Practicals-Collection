#include<stdio.h>
int main() {
 printf("Dhruti Viradiya\n");
 printf("25CS113\n");
 int price[100],max,i,min,j,pro;
 printf("enter the price:");
 for(int i=0;i<=5;i++){
scanf("%d",&price[i]);
}
 max=price[0];
 for(int i=0;i<=5;i++){
if(max<price[i]){
max=price[i];
}
}
 min=price[0];
 for(j=0;j<=5;j++){
if(min>price[j]){

 min=price[j];
}
 }
 pro=max-min;
 printf("\nprofit=%d",pro);}