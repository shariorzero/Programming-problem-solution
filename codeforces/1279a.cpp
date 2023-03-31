#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,t,i,a[3];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[2]>(a[0]+a[1]+1))cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}