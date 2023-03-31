#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,tmp=0,c0=0,c5=0,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>x;
        sum+=x;
        if(x==0)c0++;
        else c5++;
        if(sum%9==0)tmp=c5;
    }
    if(c0)
    {
        if(tmp)
        {
            for(int i=0; i<tmp; i++)
                cout<<"5";
            for(int i=0; i<c0; i++)
                cout<<"0";
            cout<<endl;
        }
        else cout<<"0"<<endl;
    }


    else cout<<"-1"<<endl;
    return 0;
}