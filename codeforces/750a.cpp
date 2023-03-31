#include<iostream>
using namespace std;
int main()
{
    int n,x,k,i;
    cin>>n>>k;
    x=240-k;
    for(i=0;i<n;i++)
    {
        if(x<((i+1)*5*(i+2))/2)break;
    }
    cout<<i;
    return 0;
}