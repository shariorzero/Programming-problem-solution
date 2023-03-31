#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(i,a,b) for(int i=a;i<=b;i+=2)
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        x=n/2;
        if(x%2==1)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            f(i,2,n)cout<<i<<" ";
            f(i,1,n-2)cout<<i<<" ";
            cout<<2*(x-1)+x+1<<endl;
        }
    }
    return 0;
}