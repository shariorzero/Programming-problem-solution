#include<iostream>
using namespace std;
int main()
{
    int i,j,nn,n,x,y,ans;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>nn;
        int a[nn];
        ans=0;
        x=0;
        y=0;
        for(j=0;j<nn;j++)
        {
            cin>>a[j];
            if(a[j]%3==0)ans++;
            else if(a[j]%3==1)x++;
            else y++;
        }
        if(x<=y)ans=ans+x+((y-x)/3);
        else ans=ans+y+((x-y)/3);
        cout<<ans<<endl;
    }
    return 0;
}