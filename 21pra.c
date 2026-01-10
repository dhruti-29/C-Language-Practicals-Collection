#include<stdio.h>
int main() {
 printf("Dhruti Viradiya\n");
 printf("25CS113\n");
 int id[25],positive=0,negative=0,even=0,odd=0,i;
 printf("Enter 25 random numbers:\n");
 for(i=0;i<25;i++){

 scanf("%d",&id[i]); }
for(i=0;i<25;i++){
if(id[i]>=0){
positive++; }
else if(id[i]<0) {
negative++; } }
printf("\nTotal number of positive numbers=%d",positive);
 printf("\nTotal number of negative numbers=%d",negative);
 for(i=0;i<25;i++){
 if(id[i]%2==0){
even++; }
 else if(id[i]%2!=0){ odd++; } }

 printf("\nTotal number of even numbers=%d",even);
 printf("\nTotal number of odd numbers=%d",odd);
}