#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t>>n;
    while(n--)
        cout<<t--<<" ";
    for(int i=1;i<=t;i++)
    {
        cout<<i;
        if(i!=t)cout<<" ";
    }
    cout<<endl;
    return 0;
}