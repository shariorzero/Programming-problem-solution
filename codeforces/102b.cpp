#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long sum=0;
    for(int i=0;i<s.size();i++)
    {
        sum+=s[i]-'0';
        //cout<<s[i]-'0'<<endl;
    }
    //cout<<sum<<endl;
    long long l,m,step=0;
    if(s.size()>1)step++;
    while(sum>9)
    {
        step++;
        long long tmp=sum,x=0;
        while(tmp>0)
        {
            x+=(tmp%10);
            //cout<<x<<endl;
            tmp/=10;
        }
        sum=x;
        //cout<<sum<<endl;
    }
    cout<<step<<endl;
    return 0;
}