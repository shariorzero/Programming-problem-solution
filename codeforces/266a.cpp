#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ans=0;
    cin>>t;
    string s;
    cin>>s;
    for(int i=1;i<t;i++)
    {
        if(s[i-1]==s[i])
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}