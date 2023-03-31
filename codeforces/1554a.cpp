#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    ll ans=0,t1=0,t2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t1;
        ans=max(ans,t1*t2);
        t2=t1;
    }
    cout<<ans<<endl;
}

int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}