#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,n,q,k,ans,a[102];
    cin>>q;
    for(j=0;j<q;j++)
    {
        cin>>n>>k;

        for(i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        if(2*k<a[n-1]-a[0])ans=-1;
        else ans = a[0]+k;
        cout<<ans<<endl;
    }
    return 0;

}