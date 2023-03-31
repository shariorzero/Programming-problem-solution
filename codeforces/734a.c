#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l=0,m=0;
    char a[100002];
    scanf("%d\n",&k);
    scanf("%s\n",a);
    for(i=0;i<k;i++){
        if(a[i]=='A')l++;
        else m++;
    }
    if(l>m)printf("Anton\n");
    else if(l<m)printf("Danik\n");
    else printf("Friendship");
    return 0;

}