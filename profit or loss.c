#include <stdio.h>

int main() {
    
 float x,y;
 char z [30];
 
 printf("enter the Selling price = ",x);
 scanf("%f",&x);
 
 printf("enter the Cost price=",y);
 scanf("%f",&y);
 
 printf("selling - cost price=%.2f",x-y);
 
 
 printf("\npayment=",z);
 scanf("%c",&z);
 
 if (x>y)
 printf("profit");
 
 else if(y>x)
 printf("loss");
 
 else 
 printf("neither loss or profit");
 
 
 
 
 
    
}