#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int x,c=0,cc=0;
        cin>>n;
        if(n==1)
        {
            cin>>x;
            if(x%2==1)
                cout<<"-1"<<endl;
            else cout<<"0"<<endl;
            goto lim;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                cin>>x;
                if(i%2==0&&x%2==1)
                    c++;
                if(i%2==1&&x%2==0)
                    cc++;
            }
            if(c==cc)cout<<c;
            else cout<<"-1";
            cout<<endl;
        }
        lim:;
    }
    return 0;
}