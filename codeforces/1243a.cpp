#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int l,r,x,mid,a[1001],n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        for(j=0;j<x;j++)
            cin>>a[j];
        sort(a,a+x);
        for(j=x-1;j>=0;j--)
        {
            if(a[j]<=x-j)
            {
                if(a[j]<x-j-1)cout<<x-j-1<<endl;
                else cout<<a[j]<<endl;
                break;
            }
        }
    }
    return 0;
}