#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    t-=10;
    if(t>1&&t<10)cout<<"4"<<endl;
    else if(t==1||t==11)cout<<"4"<<endl;
    else if(t==10)cout<<"15"<<endl;
    else cout<<"0"<<endl;
    return 0;
}