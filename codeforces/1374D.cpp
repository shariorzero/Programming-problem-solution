#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a[200005],x,n,k;
        cin>>n>>k;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            a[i]=x%k;
        }

        sort(a,a+n,greater<int>());
        ll tmp=(k-a[0])%k,ans=(k-a[0])%k;
        if(a[0]==0)goto lim;
        for(ll i=1;i<n;i++)
        {
            if(a[i]==0)break;
            if(a[i]==a[i-1])tmp+=k;
            else
            {
                tmp=k-a[i];
            }
            ans=max(tmp,ans);
        }
        lim:;
        if(ans!=0)ans++;
       cout<<ans<<endl;

    }
    return 0;
}