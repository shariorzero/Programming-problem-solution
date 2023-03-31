#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s2=s;
        sort(s2.begin(),s2.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s2[i])
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}