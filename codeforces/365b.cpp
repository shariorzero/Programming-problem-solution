#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
        cin>>a[i];
    if(t<=2)
    {
        cout<<t<<endl;
        return 0;
    }
    int ans=2,cnt=2;
    for(int i=2;i<t;i++)
    {
        if(a[i]==a[i-1]+a[i-2])
            cnt++;
        else
        {
            ans=max(ans,cnt);
            cnt=2;
        }
        //cout<<cnt<<endl;
    }
    ans=max(ans,cnt);
    cout<<ans<<endl;
    return 0;
}