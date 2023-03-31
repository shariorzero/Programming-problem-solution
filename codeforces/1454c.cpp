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
        int a[n],b[n],x,y,z=1;
        cin>>a[0];
        b[0]=a[0];
        for(int i=0; i<n-1; i++)
        {
            cin>>x;
            if(x!=a[z-1])
            {
                a[z++]=x;
            }
        }
        b[1]=a[z-1];
        int tmp=0;
        int count,tt;
        int ans=2000000;
        sort(a,a+z);
        //cout<<z<<endl;
        if(z==1)
        {
            cout<<0<<endl;
        }
        else if(z==2)
            cout<<1<<endl;
        else
        {

            for(int i=0; i<z; i++)
            {
                count =0;
                 tt=a[i];

                while(a[i+count]==tt&&i+count<z)
                {

                        count++;
                }
                i+=count;
                i--;
                //cout<<count<<" "<<endl;
                tmp=count+1;

                if(tt==b[0])
                    tmp--;
                if(tt==b[1])
                    tmp--;
                ans=min(tmp,ans);

            }

            //cout<<endl;
            cout<<ans<<endl;
        }

    }


    return 0;
}