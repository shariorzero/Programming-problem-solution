#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];
    sort(a,a+m);
    int tmp=10000000;
    for(int i=0;i<m-n+1;i++)
    {
        tmp=min(tmp,a[i+n-1]-a[i]);
    }
    cout<<tmp<<endl;
    return 0;
}