#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,a,b,t;
    cin>>t;
    char c[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    while(t--)
    {
        cin>>n>>a>>b;
        int p=a;
        int x=0;
        for(int i=0;i<n;i++)
        {
 
            cout<<c[x];
            if(x<b-1)x++;
            else x=0;
            p--;
            if(p==0)p=a;
        }
        cout<<endl;
    }
    return 0;
}