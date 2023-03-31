#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ans=0,x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        if(abs(x1-x2)>0&&abs(y1-y2)>0)
            ans+=2;
        ans+=(abs(x1-x2)+abs(y1-y2));
        cout<<ans<<endl;
    }
    return 0;
}