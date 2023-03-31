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
        int ans=0,tmp=0;
        sort(s.begin(),s.end());
        for(int i=0;i<s.size()-1;i++)
        {
            //cout<<i<<endl;
            if(s[i]==s[i+1])
            {
                ans++;
                int j=i+1;
                while(s[i]==s[j]&&j<s.size())
                {
                    j++;
                }
                i=j-1;
            }
            else 
                tmp++;
            
        }
        if(s[s.size()-1]!=s[s.size()-2]&&s.size()>1)tmp++;
        cout<<ans+(tmp/2)<<endl;    

    }
    return 0;
}