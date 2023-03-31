#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a>=c)cout<<"-1"<<" ";
        else
        {
            cout<<"1"<<" ";
        }
        if(a*b<=c)cout<<"-1"<<endl;
        else
            cout<<b<<endl;


    }
    return 0;
}