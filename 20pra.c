#include<stdio.h>
 int main() {
 printf("Dhruti Viradiya\n");
 printf("25CS113\n");
 int n,x[100],sum=0,i,total,id;
 printf("Enter the N numbers of participants=");
 scanf("%d",&n);
 printf("\nEnter id numbers who attended the function\n");
 repeat: { for(i=0;i<n-1;i++){
 scanf("%d",&x[i]);
 if(x[i]>n){
 printf("invalid input!!");
 goto repeat;

 }}
 }
 for(i=0;i<n-1;i++){
 sum=sum+x[i];
 }
 total=n*(n+1)/2;
 id=total-sum;
 printf("The missing id number is %d",id);}