#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int x=abs(a)+abs(b);
    if(a>=0)
    {
        if(b>=0)cout<<"0 "<<x<<" "<<x<<" 0"<<endl;
        else cout<<"0 "<<(-1)*x<<" "<<x<<" 0"<<endl;
    }
    else
    {
        if(b>=0)cout<<(-1)*x<<" 0 0 "<<x<<endl;
        else cout<<(-1)*x<<" 0 0 "<<(-1)*x<<endl;
    }
    return 0;
}