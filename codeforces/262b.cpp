#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],b[n],ans=0,z=0,zz=0,x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x>=0)
            a[z++]=x;
        else
            b[zz++]=x;
    }
    if(zz>=k)
    {
        for(int i=0; i<k; i++)
            ans-=b[i];
        for(int i=k; i<zz; i++)
            ans+=b[i];
        for(int i=0; i<z; i++)
            ans+=a[i];
    }
    else if(zz==0)
    {
        //a[0]*=((k%2)*(-1));
        if(k%2==1)
            a[0]*=(-1);
        //cout<<a[0];

        for(int i=0; i<n; i++)
            ans+=a[i];
        //cout<<ans<<endl;

    }
    else
    {
        if((k-zz)%2==1)
        {
            if(a[0]>b[zz-1]*(-1))
                b[zz-1]*=(-1);
            //b[zz-1]*=(((k-zz)%2)*(-1));
            else
                a[0]*=(-1);
            //a[0]*=(((k-zz)%2)*(-1));
        }

        for(int i=0; i<zz; i++)
            ans-=b[i];
        for(int i=0; i<z; i++)
            ans+=a[i];

    }
    cout<<ans<<endl;
    return 0;
}