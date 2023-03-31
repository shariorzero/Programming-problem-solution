#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string x="WUB";
    if(s.size()<3)
        goto lim;
    for(int i=0;i<s.size()-2;i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            s[i]=' ';
            s[i+1]=' ';
            s[i+2]=' ';
        }
    }
    //cout<<s<<endl;
    lim:;
    for(int i=0;i<s.size();i++)
    {
        if(i>0&&s[i]==' '&&s[i-1]!=' ')
            cout<<" ";
        else if(s[i]!=' ')
            cout<<s[i];
    }
    cout<<endl;
    return 0;
}