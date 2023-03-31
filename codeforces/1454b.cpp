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
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        int ans=-1,tmp=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=a[i+1]&&tmp==1)
            {
                ans=a[i];
                break;
            }
            else if(a[i]!=a[i+1]&&tmp>1)
            {
                tmp=1;
            }
            else
                tmp++;

        }
        if(ans==-1)
            {
                if(a[n-1]!=a[n-2])
                    {
                        for(int i=0;i<n;i++)
                            if(b[i]==a[n-1])
                                cout<<i+1<<endl;
                    }
                else
                    cout<<-1<<endl;
            }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(b[i]==ans)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }

    }
    return 0;
}