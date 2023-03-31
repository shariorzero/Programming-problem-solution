#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        if(l==r)
            cout<<0<<endl;
        else if(r/2>=l)
        {
            if(r%2==0)
                cout<<(r/2)-1<<endl;
            else
                cout<<r/2<<endl;
        }
        else cout<<r-l<<endl;

    }
    return 0;
}