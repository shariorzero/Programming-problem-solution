#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c;
        cin>>a>>b>>c;
        n=(a+b+c)/9;
        if((a+b+c)%9==0&&a>=n&&b>=n&&c>=n)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}