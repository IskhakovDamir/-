#include <stdio.h>
int main(void)
{
int i,n,ni,min,max,minn,maxn;
printf("N:");
scanf("%i", &n);
for (i=1;i<=n;++i){
printf("%i>",i);
scanf("%i", &ni);
if ((i==1)||(ni<=min)){
min=ni;
minn=i;
}
if ((i==1)||(ni>=max)){
max=ni;
maxn=i;
}
}
printf("%i\n", minn>maxn?minn:maxn);
return 0;
}