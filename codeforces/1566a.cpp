#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        if(n%2)
        {
            cout<<s/(n-(n/2))<<endl;
        }
        else
        {
            cout<<s/(n-(n/2)+1)<<endl;
        }
    }
    return 0;
}