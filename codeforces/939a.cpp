#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int f[n+1];
    for(i=1;i<=n;i++)cin>>f[i];
    for(i=1;i<=n;i++)
    {
        if(f[f[f[i]]]==i)
        {
            cout<<"YES";
            break;
        }

    }
    if(i==n+1)cout<<"NO";
    return 0;
}