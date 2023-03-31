#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,ans=0;
    cin>>r>>c;
    char ch[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)cin>>ch[i][j];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(ch[i][j]=='W')
            {
                if(ch[i-1][j]=='P'&&i!=0)ans++;

                else if(ch[i+1][j]=='P'&&i+1!=r)ans++;
                else if(ch[i][j+1]=='P'&&j+1!=c)ans++;
                else if(ch[i][j-1]=='P'&&j!=0)ans++;

            }
        }
    }
    cout<<ans<<endl;
    return 0;

}