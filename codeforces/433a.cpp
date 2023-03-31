#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x,c100=0,c200=0;
    while(t--)
    {
        cin>>x;
        if(x==100)
            c100++;
        else
            c200++;
    }
    if(c100%2)
        cout<<"NO"<<endl;
    else if(c200%2==0)
        cout<<"YES"<<endl;
    else if(c200%2&&c100>=2)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;

}