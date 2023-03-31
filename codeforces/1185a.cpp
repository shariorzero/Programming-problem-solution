#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],d,ans=0;
    cin>>a[0]>>a[1]>>a[2];
    cin>>d;

    sort(a,a+3);

    if(d-(a[2]-a[1])>=0)ans+=(d-(a[2]-a[1]));
    if(d-(a[1]-a[0])>=0)ans+=(d-(a[1]-a[0]));
    cout<<ans;
    return 0;
}