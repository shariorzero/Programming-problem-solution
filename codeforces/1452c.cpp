#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a=0,b=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                a++;
            else if(s[i]==')'&&a>0)
            {
                ans++;
                a--;
            }
            else if(s[i]=='[')
                b++;
            else if(s[i]==']'&&b>0)
            {
                ans++;
                b--;
            }
            //cout<<a<<" "<<b<<" "<<ans<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}