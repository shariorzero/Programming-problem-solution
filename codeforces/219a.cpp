#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int x,t=1;
    cin>>x>>s;
    sort(s.begin(),s.end());
    for(int i=1;i<s.size();i++)
    {
        if(s[i]!=s[i-1])
        {
            if(t%x!=0)
            {
                cout<<"-1"<<endl;
                return 0;
            }
            else t=0;
        }
        t++;
    }
    //cout<<t<<endl;
    if(t%x!=0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    for(int i=0;i<x;i++)
    {
        for(int j=i;j<s.size();j+=x)
            cout<<s[j];
    }
    return 0;
}