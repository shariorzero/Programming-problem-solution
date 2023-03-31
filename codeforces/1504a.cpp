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
        int z=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
                z++;
        }
        if(z==s.size())
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]!='a')
                {
                    z=i;
                    break;
                }
            }
            for(int i=0;i<s.size();i++)
            {
                if(i==s.size()-z)
                    cout<<"a";
                cout<<s[i];
            }
            if(z==0)
                cout<<"a";
            cout<<endl;
        }
    }
    return 0;

}