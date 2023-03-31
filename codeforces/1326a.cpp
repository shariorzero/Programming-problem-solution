#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n!=1)
        {
            cout<<"2";
            for(int i=0;i<n-1;i++)
            {
                cout<<"3";
            }
            cout<<endl;
        }
        else cout<<"-1"<<endl;
    }
    return 0;
}