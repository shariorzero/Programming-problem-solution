#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        int count=0,x=0,y=0;
        while(1)
        {
            if(x==n||y==m)break;
            if(a[x]<b[y])x++;
            else if(a[x]>b[y])y++;
            else {
                    count++;
                    x++;
                    y++;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}