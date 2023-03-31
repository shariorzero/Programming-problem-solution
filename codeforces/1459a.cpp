#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n ,a=0,b=0,x,y;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<n;i++)
        {
            x=(s1[i]-'0');
            y=(s2[i]-'0');
            if(x>y)a++;
            else if(x<y)b++;
            else continue;
        }
        //cout<<a<<" "<<b<<endl;
        if(a>b)cout<<"RED"<<endl;
        else if(b>a)cout<<"BLUE"<<endl;
        else cout<<"EQUAL"<<endl;
    }
    return 0;
}