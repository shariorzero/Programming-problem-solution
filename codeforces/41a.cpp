#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()!=s2.size())
        cout<<"NO"<<endl;
    else
    {
        reverse(s2.begin(),s2.end());
        bool ans=true;
        for(int i=0;i<s1.size();i++)
            {
                if(s1[i]!=s2[i])
                    ans=false;
            }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}