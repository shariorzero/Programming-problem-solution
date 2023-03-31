#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,n,m,x=0,ans=0;
    cin>>n>>m;
    int a[n];
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n, greater<int>());
    for(i=0;i<n;i++)
    {
        x++;
        ans+=a[i];
        if(ans>=m)break;
    }
    cout<<x;
    return 0;
}