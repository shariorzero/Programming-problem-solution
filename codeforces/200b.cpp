#include<iostream>
using namespace std;
int main()
{
    double n,c=0,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        c+=x;
    }
    cout<<c/n;
    return 0;
}