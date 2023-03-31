#include<iostream>
using namespace std;
int main()
{
    int i,x,j,n,d,v;
    cin>>j;
    for(i=0;i<j;i++)
    {
        cin>>n>>d;
        if(d<=n)
        {
            cout<<"YES"<<endl;
            goto lim;
        }
        for(x=0;x<n;x++)
        {
            v=x+(d+x)/(x+1);
            if(v<=n)
            {
                cout<<"YES"<<endl;
                goto lim;
            }
        }
        cout<<"NO"<<endl;
        lim:;
    }
    return 0;
}