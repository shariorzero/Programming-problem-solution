#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i+=2)
        {
            if(a[i+1]<0)
                cout<<a[i+1]*(-1)<<" "<<a[i]<<" ";
            else
                cout<<"-"<<a[i+1]<<" "<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}