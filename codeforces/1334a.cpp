#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,ans=0;
        cin>>n;
        int a[10000],b[10000];
        cin>>a[0]>>b[0];
        if(a[0]<b[0])ans=1;
        for(int i=1;i<n;i++)
        {
            cin>>a[i]>>b[i];
            if(a[i]<a[i-1])ans=1;
            if(b[i]<b[i-1])ans=1;
            if(a[i]<b[i])ans=1;
            if(a[i]-a[i-1]<b[i]-b[i-1])ans=1;
        }
 
 
 
        if(ans==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
 
    }
    return 0;
}