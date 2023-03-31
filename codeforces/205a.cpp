#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int mx=1e9+5,p=1e5+5,numMIN=0;
    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        if(x==mx)
        {
            numMIN++;
        }
        else if(mx>x)
        {
            mx=x;
            p=i;
            numMIN=0;
        }
    }
    if(numMIN)
        cout<<"Still Rozdil"<<endl;
    else
        cout<<p+1<<endl;
    return 0;
}