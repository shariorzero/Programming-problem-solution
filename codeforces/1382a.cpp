#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        int ans,trig=0;

        for(int i=0;i<n;i++)cin>>a[i];
        int x;
        for(int i=0;i<m;i++)
        {
            cin>>x;
            for(int j=0;j<n;j++)
            {
                if(x==a[j])
                {
                    ans=a[j];
                    trig=1;
                }
            }
        }


        if(trig==1)cout<<"YES\n1 "<<ans<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}