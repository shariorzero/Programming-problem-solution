#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,tmp=1,tmp2,tt;
    cin>>t;
    tt=t;
    tmp2=t*t;
    while(tt--)
    {

        for(int i=tmp;i<=(t*t)/2;i+=t)cout<<i<<" ";
        for(int i=tmp2;i>(t*t)/2;i-=t)cout<<i<<" ";
        cout<<endl;
        tmp++;
        tmp2--;
    }
    return 0;
}