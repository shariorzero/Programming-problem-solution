#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    int ans=0;
    for(int i=0;i<n;i++)
        {
            cin>>s;
            int count=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='4')
                    count++;
                else if(s[i]=='7')
                    count++;
            }
            if(count<=k)
                ans++;
        }
        cout<<ans<<endl;
        return 0;

}