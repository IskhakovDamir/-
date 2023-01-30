#include <stdio.h>
#include <math.h>
int main(void)
{
    int k,n,i,r,b=0;
    printf("N:");
    scanf("%i", &n);
    printf("K:");
    scanf("%i", &k);
    for (i=1; i<=n; ++i){
        printf("%i:",i);
        scanf("%i", &r);
        if (r<k) b=1;
    }
    printf("%s\n",b?"True":"False");
    return 0;
}