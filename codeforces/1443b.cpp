#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c0=0;
        cin>>a>>b;
        string s;
        cin>>s;
        int ans=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                ans+=a;
                for(int j=i+1; j<s.size(); j++)
                {
                    if(s[j]=='0')
                    {
                        c0++;
                        if(j<s.size()-1&&s[j+1]=='1')
                        {
                            if(c0*b<=a)
                                ans+=c0*b;
                            else ans+=a;
                            c0=0;
                        }
                    }
                    i=j+1;
                }
            }
        }

        cout<< ans<<endl;
    }
    return 0;
}
 