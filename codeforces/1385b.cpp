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
        int n;
        cin>>n;
        int a[n],b[n],p=0,x;
        for(int i=0;i<2*n;i++)
        {
            cin>>x;
            for(int j=0;j<p;j++)
            {
                if(a[j]==x)goto lim;
            }
            a[p++]=x;
            lim:;
        }
        for(int i=0;i<p;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}