#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100005],b[100005],t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n,one=0,minu=0;
        cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int j =0;j<n;j++)cin>>b[j];
 
        for(int i=0;i<n;i++)
        {
            if(one==1&&minu==-1)
            {
                cout<<"YES"<<endl;
                goto lim;
            }
            if(a[i]!=b[i])
            {
                if(a[i]<b[i]&&one==0)
                {
                    cout<<"NO"<<endl;
                    goto lim;
                }
                else if(a[i]>b[i]&&minu==0)
                {
                    cout<<"NO"<<endl;
                    goto lim;
                }
            }
            if(a[i]==1)one=1;
            else if(a[i]==-1)minu=1;
        }
        cout<<"YES"<<endl;
        lim:;
    }
    return 0;
}