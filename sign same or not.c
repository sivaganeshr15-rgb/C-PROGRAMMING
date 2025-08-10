#include <stdio.h>

int main() {
    
  int p , q;
  printf("enter the value of p= ");
  scanf("%d",&p);
  
  printf("enter the value of q=");
  scanf("%d",&q);
  
   if (p==0 && q==0) // here == is used for comparing p & q
   printf("neither positive nor negative");
   
   else if (p==0 && q>0)
   printf("they are not having same sign");
   
   else if (p>0 && q==0)
   printf("they are not having the same sign");
   
   else if ((p>0 && q>0) || (p<0 && q<0))
   printf("they are having same sign");
   
   else
   printf("not same sign");
    
    
    
    
}