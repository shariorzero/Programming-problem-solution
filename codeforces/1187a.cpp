#include<iostream>
using namespace std;
int main()
{
    int t,n,s,c,i,ans;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>s>>c;
        if(n==s&&s==c)ans=1;
        else if(n==s)ans=n-c+1;
        else if(n==c)ans=n-s+1;
        else if(s>=c)ans=n-c+1;
        else ans=n-s+1;
        cout<<ans<<endl;
    }
    return 0;
}