#include <stdio.h>
#include "printfunc.h"
void print99(int n)
{
int i=1;
for(i=1;i<=9;i++)
    printf("%d x %d= %d\n",n,i,n*i);
printf("\n");
}


