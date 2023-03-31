#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(i,a,b) for(int i=a;i<b;i++)

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z,a,b,c;
        cin>>x>>y>>z;
        if(x==y&&x>=z)
        {
            a=x;
            b=z;
            c=z;
            cout<<"YES\n"<<a<<" "<<b<<" "<<c<<endl;
        }
        else if(x==z&&x>=y)
        {
            b=x;
            a=y;
            c=y;
            cout<<"YES\n"<<a<<" "<<b<<" "<<c<<endl;
        }
        else if(y==z&&y>=x)
        {
            c=y;
            a=x;
            b=x;
            cout<<"YES\n"<<a<<" "<<b<<" "<<c<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}