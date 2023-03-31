#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string str;
    while(t--)
    {
        cin>>str;
        int zero=0,one=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='0')zero++;
            else one++;
        }
        if(zero>one)swap(zero,one);
        if(zero%2==0)cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
    }
    return 0;
}