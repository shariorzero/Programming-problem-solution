#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[100000],tmp=t;
    while(tmp--)
    {
        for(int j=0;j<=tmp;j++)cout<<"  ";
        for(int j=0;j<t-tmp;j++)
        {
            if(j==1)cout<<" ";
            cout<<j;
            if(j)cout<<" ";
        }
        for(int j=t-tmp-1;j>0;j--)
        {
            cout<<j-1;
            if(j-1)cout<<" ";
        }
        cout<<endl;
    }
    for(int j=0;j<=t;j++)cout<<j<<" ";
    for(int j=t-1;j>0;j--)cout<<j<<" ";
    cout<<"0"<<endl;
    tmp=t;
    while(tmp--)
    {
        for(int i=0;i<t-tmp;i++)cout<<"  ";
        for(int i=0;i<=tmp;i++)
        {
            if(i==1)cout<<" ";
            cout<<i;
            if(i)cout<<" ";
        }
        for(int j=tmp-1;j>=0;j--)
        {
            cout<<j;
            if(j)cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}