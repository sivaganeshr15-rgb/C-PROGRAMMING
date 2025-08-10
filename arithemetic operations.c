// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
   float num1 , num2;
   
   printf("enter the first number:");
   scanf("%f",&num1);
   
   printf("enter the second number;");
   scanf("%f",&num2);
   
   //now use the arithemetic operations for num1 & num2
   
   printf("\naddition=%.1f ",num1+num2);
   printf("\nsubraction= %.1f",num1-num2);
   printf("\nmultiplication=%.1f",num1*num2);
  if (num2 !=0)
    printf("\ndivision=%.1f",num1/num2);
    else
    printf("\ndivision by zero is ambigous");
    
    
    
    
}