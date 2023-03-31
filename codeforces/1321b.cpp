#include<bits/stdc++.h>
typedef long long ll;
#define rep(i,a,b) for(long long i = a; i<b;i++)
using namespace std;
int main()
{
    ll n,a[101],x,b[101],sum1=0,sum2=0,sum3=0,dif;
    cin>>n;
    rep(i,0,n)
    {
        cin>>a[i];
        if(a[i]==1)sum1++;
    }
    rep(i,0,n)
    {
        cin>>b[i];
        if(b[i]==1)sum2++;
        if(a[i]==1&&b[i]==0)sum3++;
    }
 
    if(sum1>sum2)cout<<"1";
    else if(sum1==sum2&&sum2==0)cout<<"-1";
    else if (sum3==0)cout<<"-1";
    else
    {
 
        sum1=sum1-sum3;
        dif=sum2-sum1;
        rep(i,1,101)
        {
            if(sum3*i>dif)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}