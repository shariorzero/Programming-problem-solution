#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x;
    cin>>t>>x;
    t--;
    int low=x,high=x,l=0,ans=0;
    while(t--)
    {
        cin>>x;
        if(x>high)
        {
            ans++;
            high=x;
        }
        if(x<low)
        {
            ans++;
            low=x;
        }
    }
    cout<<ans<<endl;
    return 0;
}