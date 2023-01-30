#include <stdio.h>
 
int main(void)
{
    int A;
    printf("A:");
    scanf ("%i", &A);
 
    printf("+:%i  *:%i\n",A%10+(A%100)/10+A/100,(A%10)*((A%100)/10)*(A/100));
 
    return 0;
}