#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(i,a,b) for(int i=a;i<b;i++)

int main()
{
    ll t,n,i,j;
    cin>>t;
    while (t--)
    {
        cin>>n;
        string str;
        cin>>str;
        ll one=0,zero=-1;
        for(i=0;i<n;i++)
        {
            if(str[i]=='1')break;
            else cout<<str[i];
        }

        //cout<<" ";
        for(j=n-1;j>-1;j--)
        {
            if(str[j]=='0')
            {
                zero=j;
                break;
            }

        }
        //cout<<zero;
        if(i<zero)cout<<"0";
        for(j=zero+1;j<n;j++)cout<<str[j];
        cout<<endl;
    }
    return 0;
} 
