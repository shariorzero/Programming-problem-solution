#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll a[n+5],m,l,r,b[n+4],type;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }

    a[0]=b[0]=0;
    sort(a,a+n+1);
    for(int i=1;i<=n;i++)
    {
        a[i]+=a[i-1];
        b[i]+=b[i-1];
    }
    cin>>m;
    while(m--)
    {
        ll ans=0;
        cin>>type>>l>>r;
        if(type==1)
        {
            cout<<b[r]-b[l-1]<<endl;
        }
        else
        {
            cout<<a[r]-a[l-1]<<endl;
        }
    }
    return 0;
}