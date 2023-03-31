#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],tmp=-1;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            tmp=max(tmp,a[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==tmp)
            {
                if(i==0)
                {
                    if(a[i+1]<tmp)
                     {
                         cout<<i+1<<endl;
                    goto lim;
                     }
                }
                else if(i==n-1)
                {
                    if(a[i-1]<tmp)
                    {
                        cout<<n<<endl;
                    goto lim;
                    }
                }
                else
                {
                    if(a[i-1]<tmp||a[i+1]<tmp)
                    {
                        cout<<i+1<<endl;
                        goto lim;
                    }
                }
            }
        }
        cout<<-1<<endl;
        lim:;
    }
    return 0;
}