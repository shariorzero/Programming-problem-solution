#include<stdio.h>
int main()
{
    long long int x,y,z,l,m,n;
    scanf("%I64d %I64d %I64d",&x,&z,&y);
    if(x%y==0)l=x/y;
    else l=(x/y)+1;
    if(z%y==0)m=z/y;
    else m=(z/y)+1;
    n=m*l;
    printf("%I64d\n",n);
    return 0;

}