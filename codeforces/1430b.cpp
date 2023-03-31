#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans=0;
        sort(a,a+n,greater<ll>());
        for(int i=0;i<=k;i++)
            ans+=a[i];
        cout<<ans<<endl;
    }
    return 0;
}