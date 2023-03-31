#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //cout<<11111111<<endl;
        string s;
        cin>>s;
        int ans=0;
        if(s.size()==1)
        {
            cout<<0<<endl;
        }
        else if(s.size()==2)
        {
            if(s[0]==s[1])
                cout<<1<<endl;
            else cout<<0<<endl;
        }
        else
        {
            for(int i=0; i<s.size()-2; i++)
            {
                if(s[i]=='*')
                    continue;
                if(s[i]==s[i+1])
                {

                    s[i+1]='*';
                }
                if(s[i]==s[i+2])
                {
                    s[i+2]='*';
                }
            }
            if(s[s.size()-2]==s[s.size()-1]&&s[s.size()-1]!='*')
                ans++;
            for(int i=0;i<s.size();i++)
                if(s[i]=='*')ans++;
            cout<<ans<<endl;
        }
    }
    return 0;
}