#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#define limit 10000000/*size of integers array*/

int main(){
    unsigned long long int i,j;
    long long *primes;
    long long z = 1;

    primes = malloc(sizeof(long long)*limit);

    for (i=2;i<limit;i++)
        primes[i]=1;

    for (i=2;i<limit;i++)
        if (primes[i])
            for (j=i;i*j<limit;j++)
                primes[i*j]=0;

    //for (i=2;i<limit;i++)
      //  if (primes[i])
            //printf("%dth prime = %dn",z++,i);
    long long t;
    scanf("%I64d",&t);
    long long a[t];
    for(i=0;i<t;i++)
        scanf("%I64d",&a[i]);
    for(i=0;i<t;i++)
    {
        long long l,low=0,high=1000000,mid;
        l=sqrt(a[i]);
        if(l*l==a[i]&&primes[l]==1)printf("YES\n");
        else printf("NO\n");
    }
return 0;
}