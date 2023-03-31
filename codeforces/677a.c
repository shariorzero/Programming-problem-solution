#include<stdio.h>
int main(){
    int a,x[1001],n,j=0,i;
    scanf("%d %d\n",&a,&n);
    for(i=0;i<a;i++){
        scanf("%d ",&x[i]);
        if(x[i]<=n)j++;
        else j+=2;
        }
        printf("%d\n",j);
        return 0;
    }