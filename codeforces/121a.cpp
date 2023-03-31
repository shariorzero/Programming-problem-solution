#include<bits/stdc++.h>
using namespace std;
vector<long long> genarateBinary(int n)
{
    queue<string>q;
    vector<long long> v;
    q.push("7");
    while(n--)
    {
        string s1=q.front();
        q.pop();
        //cout<<s1<<endl;
        long long tmp=0,ten=1;

        for(int i=s1.size()-1;i>0;i--)
        {
            tmp+=(ten*(s1[i]-'0'));
            ten*=10;
        }
        //cout<<"result "<<tmp<<endl;
        v.push_back(tmp);
        string s2=s1;
        q.push(s1.append("4"));
        q.push(s2.append("7"));
    }
    return v;
}
int main()
{
    long long ans=0,l,r;
    vector<long long>vv;
    cin>>l>>r;
    vv=genarateBinary(1100);
    for(int i=1;i<vv.size();i++)
    {
        if(vv[i]>=l&&vv[i-1]<=l)
        {
            if(vv[i]<r)
            {
                ans+=(vv[i]*(vv[i]-l+1));
                l=vv[i]+1;
            }
            else
            {
                ans+=(vv[i]*(r-l+1));
                cout<<ans<<endl;
                return 0;
            }
        }
    }
    return 0;
}