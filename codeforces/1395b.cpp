#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,x,y;
    cin>>m>>n>>x>>y;
    cout<<x<<" "<<y<<endl;
    cout<<x<<" "<<n<<endl;
    int tmp=n;
    while(1)
    {
        //cout<<n<<endl;
        for(int i=1;i<=m;i++)
        {
            if(i==x&&y==n)continue;
            if(i==x&&n==tmp)continue;
            cout<<i<<" "<<n<<endl;
        }
        n--;
        if(n<1)break;
        //cout<<n<<endl;
        for(int i=m;i>=1;i--)
        {
            if(i==x&&y==n)continue;
            if(i==x&&tmp==n)continue;
            cout<<i<< " "<<n<<endl;
        }
        n--;
        if(n<1)break;
    }
    return 0;

}