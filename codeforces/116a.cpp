#include<iostream>
using namespace std;
int main()
{
    int i,a,b,ans=0,tmp=0,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        ans+=(b-a);
        if(tmp<ans)tmp=ans;
    }
    cout<<tmp;
    return 0;
}