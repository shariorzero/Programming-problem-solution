#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a=0,b=0,n;
        string s,s2="2020";
        cin>>n>>s;
        bool answer=false;
        for(int i=0;i<4;i++)
        {
            if(s[i]==s2[i])
                a++;
            else break;
            if(a==4)
                answer=true;
        }
        int c=3;
        for(int i=n-1;i>n-5;i--)
        {
            if(s[i]==s2[c--])
                b++;
            else break;
            if(b==4)
                answer=true;
        }
        if(a+b>=4)
            answer=true;
        if(answer)
        cout<<"yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
 