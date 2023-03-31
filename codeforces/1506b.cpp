#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,ans=0,tmp;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')
            {
                lim:;
                ans++;
                tmp=-1;
                int z=i+k;
                if(z>=n)z=n-1;
                for(int j=i+1;j<=z;j++)
                {
                    if(s[j]=='*')
                        tmp=j;
                    //cout<<tmp<<" ";
                }
                //cout<<endl;
                if(tmp==-1)
                    break;
                else{
                    i=tmp;
                    goto lim;
                }

            }
        }
        cout<<ans<<endl;
    }
    return 0;
}