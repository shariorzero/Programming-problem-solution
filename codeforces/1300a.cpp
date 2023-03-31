#include<bits/stdc++.h>
#define ll long long
#define dl double
using namespace std;
int main()
{
    ll t,array[10000], b,c, d, e,f;
    cin>>t;
    for(ll i = 0;i<t;i++)
    {
        ll sum=0,ans=0;
        ll in;
        cin>>in;
        for(int j = 0;j<in ;j++)
        {
            cin>>array[j];
            if(array[j]==0)
            {
                array[j]++;
                ans++;
            }
            sum+=array[j];
        }
        if(sum==0)ans++;
        cout<<ans<<endl;
    }
 
 
 
 
 
    return 0;
}