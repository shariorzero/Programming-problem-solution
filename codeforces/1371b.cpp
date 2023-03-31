#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,r;
        ll ans=0;
        cin>>n>>r;
        if(n<=r)
            ans=(((n-1)*((n-1)+1))/2)+1;
        else ans=(r*(r+1))/2;
        cout<<ans<<endl;
    }
    return 0;
}