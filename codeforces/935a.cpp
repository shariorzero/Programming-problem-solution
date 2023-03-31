#include<iostream>
using namespace std;
int main()
{
    int i,j,n,ans=0;
    cin>>n;
    for(i=1;i<=n/2;i++)
        if(n%i==0)ans++;
    cout<<ans;
    return 0;
}