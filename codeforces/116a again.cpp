#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,mx=0,ans=0;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        mx+=(b-a);
        ans=max(mx,ans);
    }
    cout<<ans<<endl;
    return 0;
}