#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        string s;
        int ans=0;
        for(int i=0;i<m-1;i++)
        {
            cin>>s;
            if(s[n-1]=='R')ans++;
        }
        cin>>s;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='D')ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}