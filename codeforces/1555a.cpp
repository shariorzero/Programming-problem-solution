#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
//bool arr[500000005];
void solve()
{
//2 4 6
    ll n;
    cin>>n;
   // cout<<n%6<<endl;
    if(n<=6)
        cout<<15<<endl;
    else if(n%6==1||n%6==2)
    {
        //cout<<((n/6)-1)*15<<endl;
        cout<<((n/6)-1)*15+20<<endl;
    }   
    else if(n%6==3||n%6==4)
        cout<<((n/6)-1)*15+25<<endl;
    else if(n%6==5)
        cout<<((n/6)+1)*15<<endl;
    else 
        cout<<(n/6)*15<<endl;

}

int main()
{
    ll t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}