#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,e,bonus=0,x,y,dragoon=0;
    cin>>e>>t;
    int tmpd,tmpb;
    vector<pair<int, int> >vp;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        vp.push_back(make_pair(x,y));
    }
    sort(vp.begin(),vp.end());
    for(int i=0;i<t;i++)
    {
        if(vp[i].first<e)e+=vp[i].second;
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}