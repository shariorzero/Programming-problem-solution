#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<pair<int,int> >vp;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        vp.push_back(make_pair(a,b));
    }
    sort(vp.begin(),vp.end());
    int count=1,ans=1;
    for(int i=1;i<t;i++)
    {
        if(vp[i].first==vp[i-1].first&&vp[i].second==vp[i-1].second)
            count++;
        else count=1;
        ans=max(count,ans);
    }
    cout<<ans<<endl;
    return 0;
}