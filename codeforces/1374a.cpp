#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(i,a,b) for(int i=a;i<b;i++)

int main()
{
    ll t,n,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        ll ans,tmp;
        ans=((n-y)/x);
        cout<<(x*ans)+y<<endl;
    }
    return 0;
}