#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    int ans=0;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        if(s=="X++"||s=="++X")
            ans++;
        else ans--;
    }
    cout<<ans<<endl;
    return 0;
}