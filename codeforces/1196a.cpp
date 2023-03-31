#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int i,j,sum,t,aa,b,a[3];
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>a[0]>>a[1]>>a[2];
        sum=a[0]+a[1]+a[2];
        aa=sum/2;
        cout<<aa<<endl;
    }
    return 0;
}