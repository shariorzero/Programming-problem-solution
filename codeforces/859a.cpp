#include<iostream>
using namespace std;
int main()
{
    int ans=0,i,n,tmp=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>tmp)tmp=a[i];
    }
    if(tmp>25)ans=tmp-25;
    cout<<ans;
    return 0;
}