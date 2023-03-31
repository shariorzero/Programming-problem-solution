#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,x,y;
    cin>>n>>x>>y;
    y/=100;
    x/=n;
    //cout<<x<<" "<<y<<endl;
    if(x>y)
        cout<<0<<endl;
    else
    {
        y-=x;
       // cout<<n*y<<endl;
        int ans=(int)(n*y);
        cout<<ceil(n*y)<<endl;

    }
    return 0;
}