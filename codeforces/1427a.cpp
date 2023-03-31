#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],count=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            count+=a[i];
        }
        if(count==0)
            cout<<"NO"<<endl;
        else if(count>0)
        {
            cout<<"YES"<<endl;
            sort(a,a+n,greater<int>());
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            sort(a,a+n);
            int c=0;
            for(int i=0;i<n;i++)
                {
                    if(a[i]==0)
                    {
                        c++;
                        continue;
                    }
                    cout<<a[i]<<" ";
                }
            for(int i=0;i<c;i++)
                cout<<"0 ";
            cout<<endl;
        }

    }
    return 0;
}