#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int ans=1;
        for(int i=n-1;i>-1;i--)
        {
            if(a[i]<=i+1)
            {
                ans=i+2;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}