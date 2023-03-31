#include<iostream>
using namespace std;
int main()
{
    int a,n,i,tmp,x;
    cin>>a;
    for(i=a;;i++)
    {
        x=0;
        tmp=i;
        while(tmp>0)
        {
            x=x+(tmp%10);
            tmp=tmp/10;
        }
        if(x%4==0)break;
    }
    cout<<i;
    return 0;
}