#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
    ull t;
    cin>>t;
    ull ans=1;
    for(ull i=1;i<=t;i++)
    {
        ans=((ans*i)%1000000007);
      //  cout<<ans<<" "<<i<<endl;
    }
    ull power=1;
    for(ull i=1;i<t;i++)
    {
        power=(power*2)%1000000007;
    }
    //cout<<ans<<" "<<power<<endl;
    ans=(ans-power+2*1000000007)%1000000007;
    cout<<ans<<endl;
    return 0;
}