#include<bits/stdc++.h>
using namespace std;
int p[10000];
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(__gcd(a[i],a[i+1])!=1)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    int x=1;
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
        if(__gcd(a[i],a[i+1])!=1)
        {
                cout<<x<<" ";
        }
    }
    cout<<a[n-1];
    cout<<endl;

    return 0;
}