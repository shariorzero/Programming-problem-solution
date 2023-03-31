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
        int n,a=1,x=1;
        cin>>n;
        f(i,0,n)
        {
            a*=2;
            x+=a;
            if(n%x==0)
            {
                cout<<n/x<<endl;
                break;
            }
 
        }
    }
    return 0;
}