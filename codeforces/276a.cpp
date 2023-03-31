#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,time,x,y,ans=-2000000000;
    cin>>t>>time;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        if(y<=time)
            ans=max(x,ans);
        else
            ans=max(ans,x-(y-time));
    }
    cout<<ans<<endl;
    return 0;
}