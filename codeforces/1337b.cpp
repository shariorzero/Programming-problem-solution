#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,n,m,o;
    cin>>t;
    while(t--)
    {
        cin>>x>>n>>m;
        for(int i=0;i<n;i++)
        {
            o=(x/2)+10;
 
            if(x-o>=0)x=o;
            else break;
        }
        if(m*10>=x)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}