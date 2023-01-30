#include <stdio.h>
#include <math.h>
 
int main(void)
{
   int n;
   printf("N:");
   scanf ("%i", &n);
 
   int i, rez=0;
   for  (i =0; i<=n; ++i)
      rez +=pow(n+i,2);
 
   printf("rez = %i \n ",rez);
 
   return 0;
}