#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(int i=0;i<n;i++)
        {
            if(a[i]+b[i]>x)
            {
                cout<<"NO"<<endl;
                goto lim;
            }
        }
        cout<<"YES"<<endl;
        lim:;
    }
    return 0;
}