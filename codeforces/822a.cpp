#include<iostream>
using namespace std;
int main()
{
    int a,b,c=1;
    cin>>a>>b;
    if(a>=b)for(int i=1;i<=b;i++)c*=i;
    else for(int i=1;i<=a;i++)c*=i;
    cout<<c;
    return 0;
}