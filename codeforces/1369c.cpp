#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll ans=0,a[n],w[k],c=0,c2=0,k1=0;
        for(ll i=0;i<n;i++)cin>>a[i];
        for(ll i=0;i<k;i++)cin>>w[i];
        sort(a,a+n,greater<int>());
        sort(w,w+k);

        for(ll i=0;i<k;i++)
        {
            if(w[i]==1)c++;
            else if(w[i]==2)c2++;
            else break;
        }

        ll tmp=c+c2;
        while(c--)
        {
            ans+=(a[k1++]*2);
        }

        while(c2--)
        {
            ans+=a[k1++];
            ans+=a[k1++];
        }


        for(ll i=tmp;i<k;i++)ans+=a[k1++];
        ll left=k-tmp;
        k1--;
        while(left--)
        {
            k1+=(w[tmp++]-1);
            ans+=a[k1];
        }


        cout<<ans<<endl;

    }
    return 0;
}