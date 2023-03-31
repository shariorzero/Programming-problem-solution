#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int x=0,ans=0;
        for(int i=n.size()-1;i>=0;i--)
        {
            if(n[i]!='0')ans++;
        }
        cout<<ans<<endl;
        for(int i=n.size()-1;i>=0;i--)
        {
            x++;
            if(n[i]!='0')
            {
                cout<<n[i];
                for(int j=0;j<x-1;j++)cout<<"0";
                cout<<" ";
            }
        }
        cout<<endl;
 
    }
    return 0;
}