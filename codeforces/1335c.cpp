#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[200005],teamA=1,teamB=0,tmp=0;
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[i-1])
            {
                teamA++;
                teamB=max(teamB,tmp);
                tmp=0;
            }
            else
            {
                tmp++;
            }
        }
        teamB=max(teamB,tmp);
        if(teamA<=teamB)cout<<teamA<<endl;
        else if(teamA-teamB==1)cout<<teamB<<endl;
        else cout<<teamB+1<<endl;
    }
    return 0;
}