#include <stdio.h>
 
int main(void)
{
   int A,B;
   printf("A:");
   scanf ("%i", &A);
 
   printf("B:");
   scanf ("%i", &B);
 
    printf("%d\n", ((A%2==0) & (B%2==0) )|((A%2!=0) & (B%2!=0) ) );
    return 0;
}