#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,n;
        cin>>w>>h>>n;
        int tmp=w*h;
        while(w%2==0)
            w/=2;
        while(h%2==0)
            h/=2;
        if(tmp/(w*h)>=n)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}