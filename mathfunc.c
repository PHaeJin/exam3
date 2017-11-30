#include "mathfunc.h"

int isPrimeNumber(int a)
{
int j;
for(j=2;j<a;j++)
{
if(a%j==0)
    return 0;

}
return 1;
}
