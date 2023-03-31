#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n,greater<int>());
        ll alice=0,bob=0;
        for(int i=0;i<n;i++)
        {
            if(i%2&&a[i]%2)
                bob+=a[i];
            else if(i%2==0&&a[i]%2==0)
                alice+=a[i];
            else continue;
        }
        //cout<<alice<<" "<<bob<<endl;
        if(alice>bob)
            cout<<"Alice"<<endl;
        else if(alice<bob)
            cout<<"Bob"<<endl;
        else cout<<"Tie"<<endl;
 
    }
    return 0;
}