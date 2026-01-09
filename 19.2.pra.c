#include<stdio.h>
int main() {
 printf("Dhruti Viradiya\n");
 printf("25CS113\n");
 int n=9,s,i;

 int mid=(n+1)/2;
 for(i=1;i<=n;i++)
 {
 printf("%d",i);
 }
 printf("\n");
 for(i=2;i<=mid;i++)
 {
 for(s=1;s<i;s++)
 {
 printf(" ");
 }
 printf("%d",i);
 int innerspace=n-(2*i);
 for(s=0;s<innerspace;s++)
 {
 printf(" ");
 }
 if(i!=mid)
 {
 printf("%d",n-i+1);

 } printf("\n"); } }