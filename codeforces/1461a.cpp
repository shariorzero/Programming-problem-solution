#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n;
        cin>>n>>a;
        for(int i=0;i<n;i++)
        {
            if(i%3==0)
                cout<<"a";
            else if(i%3==1)
                cout<<"b";
            else cout<<"c";
        }
        cout<<endl;
    }
    return 0;
}