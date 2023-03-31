#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        if(n-x>=0&&(n-x)%2==0)
           {
               cout<<"YES"<<endl;
               for(int i=0;i<x-1;i++)cout<<"1 ";
                cout<<n-x+1<<endl;
           }
        else if((n-2*x>=0)&&(2+n-2*x)%2==0)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<x-1;i++)cout<<"2 ";
            cout<<n-(2*x)+2<<endl;
 
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}