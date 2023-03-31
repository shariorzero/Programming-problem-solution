#include<iostream>
using namespace std;
int main()
{
    int i ,t,x, j, n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n%2==1)
            cout<<"7";
        else cout<<"1";
 
        x=n/2;
        for(j=1;j<x;j++)
            cout<<"1";
        cout<<endl;
    }
    return 0;
}