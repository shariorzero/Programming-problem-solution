#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=-1,tmp=0;
        if(n==1)
        {
            ans=0;
            goto lim;
        }

        while(n%3==0)
            {
                if(n%6==0)
                {
                    n/=6;
                    tmp++;
                }
                else
                {
                    n/=3;
                    tmp+=2;
                }
                if(n==1)ans=tmp;

            }
            lim:;
            cout<<ans<<endl;
    }
    return 0;
}