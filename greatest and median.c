
  #include <stdio.h>

int main() {
    int a,b,c;
    int greatest , median ;
    
    printf("enter the first number: ");
    scanf("\n%d",&a);
    
    printf("enter the second number: ");
    scanf("\n%d",&b);
    
    printf("enter the third number: ");
    scanf("\n%d",&c);
    
    //for the greatest number ;
    if (a>=b && a>=c)
    greatest = a;
    
    
    else if (b>=a && b>=c)
    greatest = b;
    
    else
    greatest = c;
    
    printf("GREATEST NUMBER=%d\n" ,greatest);
    
    // finding the median 
    
    if ((a>=c && a<=b ) || (a>=b && a<=c))
       median =a;
       
    else if ((b>=c && b<=a) || (b>=a && b<=c))
       median =b;
       
       else 
       median =c;
       
       printf("MEDIAN AMONG THE 3 NUMBERS IS :%d\n",median);
    
    
    
 }
