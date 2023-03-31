#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int> > vp;
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        vp.push_back(make_pair(a,b));
    }
    sort(vp.begin(),vp.end());
    for(int i=1;i<t;i++)
    {
        //cout<<vp[i].first<<" "<<vp[i].second<<endl;
        if(vp[i-1].second>vp[i].second)
        {
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    cout<<"Poor Alex"<<endl;
    return 0;
}