#include<stdio.h>
int main() {
 printf("Dhruti Viradiya\n");
 printf("25CS113\n");
 int i,j,k,n=5;
for(i=n;i>=1;i--) {
 for(k=5;k>i;k--) {

 printf(" ");
 }
 for(j=i;j>=1;j--)
 {
 printf("%d",j);
 }
 for(j=j+2;j<=i;j++)
 {
 printf("%d",j);
 }
 printf("\n");
 }
 for(i=2;i<=n;i++)
 {
 for(k=5;k>=i+1;k--)
 {
 printf(" ");
 }
 for(j=i;j>=1;j--)
 {
 printf("%d",j);

 } for(j=j+2;j<=i;j++) { printf("%d",j); }
 printf("\n"); } }