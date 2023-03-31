#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    long long x,y,xx,yy;
    string s;
    cin>>t>>x>>y>>xx>>yy;
    cin>>s;
    if(x==xx&&y==yy)
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<t;i++)
    {
        if(s[i]=='E'&&x<xx)
            x++;
        else if(s[i]=='W'&&x>xx)
            x--;
        else if(s[i]=='N'&&y<yy)
            y++;
        else if(s[i]=='S'&&y>yy)
            y--;
        //cout<<x<<" "<<y<<endl;
        if(x==xx&&y==yy)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}