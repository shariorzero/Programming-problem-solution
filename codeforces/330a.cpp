#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,r;
    cin>>r>>c;
    char ch;
    int a[r][c],ans =0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>ch;
            if(ch=='S')
                a[i][j]=1;
            else
                a[i][j]=0;
        }
    }
    int tmp=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            tmp+=a[i][j];
        }

        if(tmp==0)
            ans+=c;
        tmp=0;
    }
    //cout<<ans<<endl;
        int x=ans/c;

    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            tmp+=a[j][i];
        }
        if(tmp==0)
            ans+=(r-x);
        tmp=0;
    }
    cout<<ans<<endl;
    return 0;
}