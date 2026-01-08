#include<stdio.h>
int main() {
 printf("Dhruti Viradiya\n");
 printf("25CS113\n");
 int marks;
 printf("enter the marks");
 scanf("%d",&marks);
 if(marks>=0 && marks<=100)

 {
marks>=90?printf("gradeA"):marks>=80?printf("gradeB"):marks>=70?
 printf("gradeC"):marks>=60?printf("grade D"):printf("fail");;;;
}
 else {
 printf("Invalid marks");
 }
}