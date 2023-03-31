#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ans;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    sort(a,a+t);
    if(a[0]>1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    for(int i=0;i<t-1;i++)
    {
        if(a[i+1]-a[i]>1)
        {
            cout<<a[i]+1<<endl;
            return 0;
        }
    }
    cout<<a[t-1]+1<<endl;
    return 0;

}