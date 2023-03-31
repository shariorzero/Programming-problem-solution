#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,chips,x=1;
    cin>>t>>chips;
    while(chips>=x)
    {
        chips-=x;
        x++;
        x%=(t+1);
        if(x==0)x++;
    }
    cout<<chips<<endl;
    return 0;

}