#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
        cin>>a[i];
    sort(a,a+t);
    cout<<a[t-1]<<" ";
    for(int i=1;i<t-1;i++)
        cout<<a[i]<<" ";
    cout<<a[0]<<endl;
    return 0;
}