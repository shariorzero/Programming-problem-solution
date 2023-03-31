#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l=0;
    char a[15];
    scanf("%d\n",&k);
    for(i=0;i<k;i++){
        scanf("%s\n",a);
        if(strcmp(a,"Tetrahedron")==0)l=l+4;
        else if(strcmp(a,"Cube")==0)l=l+6;
        else if(strcmp(a,"Octahedron")==0)l=l+8;
        else if(strcmp(a,"Dodecahedron")==0)l=l+12;
        else if(strcmp(a,"Icosahedron")==0)l=l+20;
    }
    printf("%d\n",l);
    return 0;
}