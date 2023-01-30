#include <stdio.h>
 
int main(void)
{
   float a, b;
   printf("A:");
   scanf ("%f", &a);
   printf("B:");
   scanf ("%f", &b);
 
   if (a!=b) a=b=(a>b) ? a : b;
   else a=b=0;
 
   printf("a: %f\n b: %f\n",a, b);
    return 0;
}