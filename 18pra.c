#include<stdio.h>
int main() {
 printf("Dhruti Viradiya\n");
 printf("25CS113\n");
 int i,j;
 int rows,cols;
printf("enter size of table vertically:");
scanf("%d",&rows);
printf("enter size of table horizontally:");

 scanf("%d",&cols);
for(i=1;i<=rows;i++){
for(j=1;j<=cols;j++){
printf("%5d",i*j);
}
printf("\n");
}
}