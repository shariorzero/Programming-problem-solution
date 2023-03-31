#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long t,i,j,x,a[3],b,c,d;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a[0]>>a[1]>>a[2]>>d;
        sort(a,a+3);
        x=(a[2]*3)-(a[0]+a[1]+a[2]);
        if((d-x)>=0&&(d-x)%3==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}