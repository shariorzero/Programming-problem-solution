#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int mod,div;
        mod=n%2020;
        div=n/2020;
        if(div>=mod)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}