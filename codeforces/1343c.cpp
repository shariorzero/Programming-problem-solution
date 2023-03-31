#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a[200005],ans=0;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll tmp=a[0];
        for(ll i=1;i<n-1;i++)
        {
            if(a[i]>0&&tmp>0)tmp=max(a[i],tmp);
            else if(a[i]<0&&tmp<0)tmp=max(a[i],tmp);
            else
            {
                ans+=tmp;
                tmp=a[i];
            }
        }
        if(a[n-1]>0&&tmp>0)ans+=(max(tmp,a[n-1]));
        else if(a[n-1]<0&&tmp<0)ans+=(max(tmp,a[n-1]));
        else ans=ans+tmp+a[n-1];
        cout<<ans<<endl;
    }
    return 0;
}