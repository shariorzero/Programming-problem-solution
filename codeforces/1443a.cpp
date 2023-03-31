#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n;
        a=n*4;
        for(int i=0;i<n;i++)
        {
            cout<<a<<" ";
            a-=2;
        }
        cout<<endl;
    }
    return 0;
}