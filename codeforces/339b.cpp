#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[m],ans=0;
    for(int i=0;i<m;i++)
        cin>>a[i];
    for(int i=1;i<m;i++)
    {
        if(a[i]>=a[i-1])
            continue;
        else
            ans+=n;
    }
    ans+=(a[m-1]-1);
    cout<<ans<<endl;
    return 0;
}