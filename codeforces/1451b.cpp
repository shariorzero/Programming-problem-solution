#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;

        cin>>n>>q;
        string s;
        cin>>s;
        while(q--)
        {
            int a,b;
            cin>>a>>b;
            for(int i=0;i<a-1;i++)
            {
                if(s[i]==s[a-1])
                {
                    cout<<"YES"<<endl;
                    goto lim;
                }
            }

            for(int i=b;i<n;i++)
            {
                if(s[b-1]==s[i])
                {
                    cout<<"YES"<<endl;
                    goto lim;
                }
            }
            cout<<"NO"<<endl;
            lim:;
        }
    }
    return 0;
}
 