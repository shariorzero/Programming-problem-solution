#include<bits/stdc++.h>
using namespace std;

solve()
{
    int n,m;
    cin>>n>>m;
    int a[m*n+1],x,ans[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>x;
            a[x]=j;
            //cout<<a[x]<<" ";
        }
    }




    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>x;
            ans[j][a[x]]=x;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}