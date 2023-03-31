#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,a[100],b=0;

        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]%a[i])
            {
                a[i+1]-=(a[i+1]%a[i]);
                if(a[i+1]==0)a[i+1]=1;
            }
        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}