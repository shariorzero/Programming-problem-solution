#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b;
    cin>>t;
    while(t--)
    {
        int ans=0;
        cin>>a>>b>>n;
        while(1)
        {
            if(a>n||b>n)break;
            ans++;
            if(a<=b)
            {
                a+=b;
            }
            else b+=a;
        }
        cout<<ans<<endl;
    }
    return 0;
}