#include <stdio.h>
#include "mathfunc.h"
#include "printfunc.h"

int main()
{
int n,i;
scanf("%d",&n);

for(i=2;i<=n;i++)
{
if(isPrimeNumber(i))
    print99(i);
}
return 0;

}
