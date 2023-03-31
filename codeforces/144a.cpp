#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[101],high=0,low=200,ph,pl;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        if(a[i]<=low)
        {
            low=a[i];
            pl=i;
        }
        if(a[i]>high)
        {
            high=a[i];
            ph=i;
        }
    }
    if(ph<pl)cout<<ph+t-pl-1<<endl;
    else cout<<ph+t-pl-2<<endl;
    return 0;
}