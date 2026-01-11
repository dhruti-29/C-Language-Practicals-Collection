#include<stdio.h>
int main() {
 printf("Dhruti Viradiya\n");
 printf("25CS113\n");
 int n[5][10]={0};
 int i,j,a,b,c,k;
printf("Enter the number of reserved seats :");
 scanf("%d",&a);
 for(k=1;k<=a;k++)
 {
printf("enter row and seat number for reserved seat: ");

 scanf("%d %d",&b,&c);
 n[b-1][c-1]=1;
}
 printf("\n===Seating Chart===\n");
 for(i=0;i<5;i++)
 {
 printf("row %2d: ",i+1);
for(j=0;j<10;j++)
 {
 printf("%d ",n[i][j]);
}
 printf("\n");
 }
 }