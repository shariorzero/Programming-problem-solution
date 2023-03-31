#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int ans,x,xx;
        ans=(k/n)+k;
        x=(k/n)+(k%n);
        while(x>=n)
        {
            ans+=(x/n);
            x=(x%n)+(x/n);
        }
        cout<<ans<<endl;
    }
    return 0;
}